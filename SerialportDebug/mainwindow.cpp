#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include "data.h"
#include <QTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initDevice();
    showState();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initDevice()
{
    //模块初始化
    isTransing = false;//透传
    ui->toolBox->setEnabled(false);
    ui->send_GroupBox->setEnabled(false);
    ui->receive_GroupBox->setEnabled(false);
    ui->fileTrans_GroupBox->setEnabled(false);
    ui->chart_GroupBox->setEnabled(false);
    ui->passthrough_GroupBox->setEnabled(false);

    serialPort1 = new QSerialPort;
    regularCleraTimer = new QTimer;
    regularSendTimer = new QTimer;
    myUdpSocket = new QUdpSocket;
    myTcpServer = new QTcpServer;


    connect(regularSendTimer,SIGNAL(timeout()),this,SLOT(on_sendTestData_Btn_clicked()));
    connect(regularCleraTimer,SIGNAL(timeout()),this,SLOT(on_clearText_Btn_clicked()));
    connect(serialPort1,SIGNAL(readyRead()),this,SLOT(readSerialPort1Data()));
    connect(&serialPort2,SIGNAL(readyRead()),this,SLOT(readSerialPort2Data()));
    connect(&serialPort3,SIGNAL(readyRead()),this,SLOT(readSerialPort3Data()));
    connect(myTcpServer,SIGNAL(newConnection()),this,SLOT(onNewConnection()));

    connect(myUdpSocket,SIGNAL(readyRead()),this,SLOT(readUdpDatagram()));
    connect(myUdpSocket,SIGNAL(stateChanged(QAbstractSocket::SocketState)),this,SLOT(udpStateChange(QAbstractSocket::SocketState)));
    udpStateChange(myUdpSocket->state());
}
void MainWindow::showState()
{
    state1 = new QLabel("串口状态");
    state2 = new QLabel("网络状态");

    state1->setMinimumWidth(200);
    state2->setMinimumWidth(200);

    ui->statusBar->addWidget(state1);
    ui->statusBar->addWidget(state2);

}
/********串口操作模块***********/
void MainWindow::flushSerialPort(quint8 No)
{
    QSerialPortInfo m_serialPortInfo;
    QStringList serialPortNames;

    foreach(m_serialPortInfo,QSerialPortInfo::availablePorts())
    {
        QSerialPort serialPort;
        serialPort.setPort(m_serialPortInfo);
        if(serialPort.open(QIODevice::ReadWrite))
        {
            serialPortNames.append(m_serialPortInfo.portName());
            serialPort.close();
        }
    }

    switch(No)
    {
    case 1:
        ui->serialPort1_ComboBox->clear();
        ui->serialPort1_ComboBox->addItems(serialPortNames);
        break;
    case 2:
        ui->serialPort2_ComboBox->clear();
        ui->serialPort2_ComboBox->addItems(serialPortNames);
        break;
    case 3:
        ui->serialPort3_ComboBox->clear();
        ui->serialPort3_ComboBox->addItems(serialPortNames);
        break;
    default:
        break;
    }
    if(serialPortNames.isEmpty())
    {
        QMessageBox::warning(NULL,"WARNING","无可用串口",QMessageBox::Retry);
        return;
    }
}

void MainWindow::on_flushSerialPort1_Btn_clicked()
{
    flushSerialPort(1);
}

void MainWindow::on_openSerialPort1_Btn_clicked()
{
    serialPort1->setPortName(ui->serialPort1_ComboBox->currentText());
    if(ui->openSerialPort1_Btn->text() == "打开")
    {
        if(serialPort1->open(QIODevice::ReadWrite))
        {
            ui->openSerialPort1_Btn->setText("关闭");
            ui->serialPort1_GroupBox->setStyleSheet("color: rgb(44, 47, 255);");
            serialPort1->setBaudRate(ui->baud1_ComboBox->currentText().toInt());
            serialPort1->setDataBits(QSerialPort::Data8);
            serialPort1->setParity(QSerialPort::NoParity);
            serialPort1->setStopBits(QSerialPort::OneStop);
            serialPort1->setFlowControl(QSerialPort::NoFlowControl);
        }
        else
        {
            QMessageBox::warning(NULL,"WARNING","串口打开失败",QMessageBox::Retry);
        }
    }


    else if(ui->openSerialPort1_Btn->text() == "关闭")
    {
        serialPort1->close();

        ui->serialPort1_GroupBox->setStyleSheet("color: rgb(0, 0, 0);");
        ui->openSerialPort1_Btn->setText("打开");
    }
}

void MainWindow::on_flushSerialPort2_Btn_clicked()
{
    flushSerialPort(2);
}

void MainWindow::on_openSerialPort2_Btn_clicked()
{
    serialPort2.setPortName(ui->serialPort2_ComboBox->currentText());
    if(ui->openSerialPort2_Btn->text() == "打开")
    {
        if(serialPort2.open(QIODevice::ReadWrite))
        {
            ui->openSerialPort2_Btn->setText("关闭");
            ui->serialPort2_GroupBox->setStyleSheet("color: rgb(44, 47, 255);");
            serialPort2.setBaudRate(ui->baud2_ComboBox->currentText().toInt());
            serialPort2.setDataBits(QSerialPort::Data8);
            serialPort2.setParity(QSerialPort::NoParity);
            serialPort2.setStopBits(QSerialPort::OneStop);
            serialPort2.setFlowControl(QSerialPort::NoFlowControl);
        }
        else
        {
            QMessageBox::warning(NULL,"WARNING","串口打开失败",QMessageBox::Retry);
        }
    }


    else if(ui->openSerialPort2_Btn->text() == "关闭")
    {
        serialPort2.close();
        ui->serialPort2_GroupBox->setStyleSheet("color: rgb(0, 0, 0);");
        ui->openSerialPort2_Btn->setText("打开");
    }
}

void MainWindow::on_flushSerialPort3_Btn_clicked()
{
    flushSerialPort(3);
}

void MainWindow::on_openSerialPort3_Btn_clicked()
{
    serialPort3.setPortName(ui->serialPort3_ComboBox->currentText());
    if(ui->openSerialPort3_Btn->text() == "打开")
    {
        if(serialPort3.open(QIODevice::ReadWrite))
        {
            ui->openSerialPort3_Btn->setText("关闭");
            ui->serialPort3_GroupBox->setStyleSheet("color: rgb(44, 47, 255);");
            serialPort3.setBaudRate(ui->baud3_ComboBox->currentText().toInt());
            serialPort3.setDataBits(QSerialPort::Data8);
            serialPort3.setParity(QSerialPort::NoParity);
            serialPort3.setStopBits(QSerialPort::OneStop);
            serialPort3.setFlowControl(QSerialPort::NoFlowControl);
        }
        else
        {
            QMessageBox::warning(NULL,"WARNING","串口打开失败",QMessageBox::Retry);
        }
    }


    else if(ui->openSerialPort3_Btn->text() == "关闭")
    {
        serialPort3.close();
        ui->serialPort3_GroupBox->setStyleSheet("color: rgb(0, 0, 0);");
        ui->openSerialPort3_Btn->setText("打开");
    }
}
//读取串口数据
void MainWindow::readSerialPort1Data()
{
    QByteArray receiveData;
    receiveData = serialPort1->readAll();
    serial1Buffer.append(receiveData);

    //数据透传模块
    if(isTransing)
    {
        transDataS_N(receiveData);
    }

    //数据交互模块
    if(ui->dataInteracte_CheckBox->isChecked())
    {
        if(ui->sendTestData_ComboBox->currentIndex() == 0)
        {
            if(ui->receiveHex_RadioButton->isChecked())
            {
                ui->plainTextEdit->appendPlainText(receiveData.toHex());
                receiveNum += receiveData.length();
            }
            else if(ui->receiveAscii_RadioButton->isChecked())
            {
                ui->plainTextEdit->appendPlainText(receiveData);
                receiveNum += receiveData.length();
            }

        }
        ui->receive_Label->setText(QString::number(receiveNum));
    }

    if(serial1Buffer[0] != PACKAGEHEAD )
    {
        serial1Buffer.remove(0,1);
        if(serial1Buffer.isEmpty())
            return;
    }
    else
    {
        if(serial1Buffer.length() >= serial1Buffer[1])
        {
            if(serial1Buffer[serial1Buffer.length() - 1] == PACKAGETAIL)
            {
                //use serial1Buffer do  sth
                serial1Buffer.remove(0,serial1Buffer[1]);
            }
            else
            {
                serial1Buffer.remove(0,1);
            }
        }
        else
        {
            return;
        }
    }
}

void MainWindow::readSerialPort2Data()
{
    QByteArray receiveData;
    receiveData = serialPort2.readAll();
    serial2Buffer.append(receiveData);

    //数据透传模块
    if(isTransing)
    {
        transDataS_N(receiveData);
    }

    //数据交互模块
    if(ui->dataInteracte_CheckBox->isChecked())
    {
        if(ui->sendTestData_ComboBox->currentIndex() == 1)
        {
            if(ui->receiveHex_RadioButton->isChecked())
            {
                ui->plainTextEdit->appendPlainText(receiveData.toHex());
                receiveNum += receiveData.length();
            }
            else if(ui->receiveAscii_RadioButton->isChecked())
            {
                ui->plainTextEdit->appendPlainText(receiveData);
                receiveNum += receiveData.length();
            }

        }
        ui->receive_Label->setText(QString::number(receiveNum));
    }


    if(serial2Buffer[0] != PACKAGEHEAD )
    {
        serial2Buffer.remove(0,1);
        if(serial2Buffer.isEmpty())
            return;
    }
    else
    {
        if(serial2Buffer.length() >= serial2Buffer[1])
        {
            if(serial2Buffer[serial2Buffer.length() - 1] == PACKAGETAIL)
            {
                //use serial2Buffer do  sth
                serial2Buffer.remove(0,serial2Buffer[1]);
            }
            else
            {
                serial2Buffer.remove(0,1);
            }
        }
        else
        {
            return;
        }
    }
}

void MainWindow::readSerialPort3Data()
{
    QByteArray receiveData;
    receiveData = serialPort3.readAll();
    serial3Buffer.append(receiveData);

    //数据透传模块
    if(isTransing)
    {
        transDataS_N(receiveData);
    }

    //数据交互模块
    if(ui->dataInteracte_CheckBox->isChecked())
    {
        if(ui->sendTestData_ComboBox->currentIndex() == 2)
        {
            if(ui->receiveHex_RadioButton->isChecked())
            {
                ui->plainTextEdit->appendPlainText(receiveData.toHex());
                receiveNum += receiveData.length();
            }
            else if(ui->receiveAscii_RadioButton->isChecked())
            {
                ui->plainTextEdit->appendPlainText(receiveData);
                receiveNum += receiveData.length();
            }

        }
        ui->receive_Label->setText(QString::number(receiveNum));
    }


    if(serial3Buffer[0] != PACKAGEHEAD )
    {
        serial3Buffer.remove(0,1);
        if(serial3Buffer.isEmpty())
            return;
    }
    else
    {
        if(serial3Buffer.length() >= serial3Buffer[1])
        {
            if(serial3Buffer[serial3Buffer.length() - 1] == PACKAGETAIL)
            {
                //use serial3Buffer do  sth
                serial3Buffer.remove(0,serial3Buffer[1]);
            }
            else
            {
                serial3Buffer.remove(0,1);
            }
        }
        else
        {
            return;
        }
    }
}

//通过串口写入数据
void MainWindow::sendDataThroughSerialPort1(char *data,quint16 No)
{
    if(serialPort1->isOpen())
    {
        if(serialPort1->write(data,No) < 0)
            qDebug()<<"串口1写入失败";
    }
    else
        QMessageBox::warning(NULL,"WARNING","串口1打开失败",QMessageBox::Retry);

}
void MainWindow::sendDataThroughSerialPort2(char *data,quint16 No)
{
    if(serialPort2.isOpen())
    {
        if(serialPort2.write(data,No) < 0)
            qDebug()<<"串口2写入失败";
    }
    else
        QMessageBox::warning(NULL,"WARNING","串口2打开失败",QMessageBox::Retry);
}
void MainWindow::sendDataThroughSerialPort3(char *data,quint16 No)
{
    if(serialPort3.isOpen())
    {
        if(serialPort3.write(data,No) < 0)
            qDebug()<<"串口3写入失败";
    }
    else
        QMessageBox::warning(NULL,"WARNING","串口3打开失败",QMessageBox::Retry);
}
//*********************串口操作结束************/


//***************网口模块*************/
/***************UDP  start************/
void MainWindow::on_udpConnect_Btn_clicked()
{
    quint16 port = ui->udpPort_LineEdit->text().toInt();

    if(myUdpSocket->bind(port))
    {
        state2->setText(tr("端口绑定成功"));
        ui->udpConnect_Btn->setEnabled(false);
        ui->udpDisconnect_Btn->setEnabled(true);
    }
    else
    {
        state2->setText(tr("端口绑定失败"));
    }
}

void MainWindow::on_udpDisconnect_Btn_clicked()
{
    myUdpSocket->abort();
    ui->udpConnect_Btn->setEnabled(true);
    ui->udpDisconnect_Btn->setEnabled(false);
    state2->setText(tr("端口解除绑定"));
}
//单播、广播模式切换
void MainWindow::on_udpEnter_Btn_clicked()
{
    if(ui->unicast_RadioButton->isChecked())
    {
        udpSlaveIp = ui->udpIP_LineEdit_2->text();
        state2->setText("发送方式：单播");
    }
    else if(ui->broadCast_RadioButton->isChecked())
    {
        udpSlaveIp = "255.255.255.255";
        state2->setText("发送方式：广播");
    }
    udpSlavePort = ui->udpPort_LineEdit_2->text().toInt();
}
void MainWindow::readUdpDatagram()
{
    while(myUdpSocket->hasPendingDatagrams())
    {
        QByteArray datagram;
        datagram.resize(myUdpSocket->pendingDatagramSize());
        QHostAddress peerAddress;
        quint16 port;
        myUdpSocket->readDatagram(datagram.data(),datagram.size(),&peerAddress,&port);//添加了目标地址及端口
        //网口转串口透传
        if(isTransing)
        {
            transDataN_S(datagram);
        }
        //use  datagram  do  sth
        state2->setText(QString("正在与IP：%1  PORT：%2通信").arg(peerAddress.toString()).arg(port));
    }
}
void MainWindow::udpStateChange(QAbstractSocket::SocketState)
{
    qDebug()<<"udp状态发送变化";
}
void MainWindow::sendDataThrougUdp(char *data,quint16 count)
{
    if(myUdpSocket->isWritable())
    {
        myUdpSocket->writeDatagram(data,count,QHostAddress(udpSlaveIp),udpSlavePort);
    }
    else
    {
        QMessageBox::warning(NULL,"WARING","udp为准备好",QMessageBox::Ok);
    }
}


/****************UDP end***************/
/***************TCP  start************/
QString MainWindow::getLocalIp()
{
    QString hostName = QHostInfo::localHostName();
    QHostInfo hostInfo = QHostInfo::fromName(hostName);

    QString localIP = "";
    QList<QHostAddress> addList = hostInfo.addresses();

    if(!addList.isEmpty())
    {
        for(int i = 0;i < addList.size();i++)
        {
            QHostAddress aHost = addList.at(i);
            if(QAbstractSocket::IPv4Protocol == aHost.protocol())
            {
                localIP = aHost.toString();
                break;
            }
        }

        return localIP;
    }
    else
    {
        QMessageBox::warning(NULL,"WARNNING","未能成功获取本地IP",QMessageBox::Ok);
        return localIP;
    }

}
//新的TCP链接  服务端收到新的连接请求时执行
void MainWindow::onNewConnection()
{
    tcpSocket =  myTcpServer->nextPendingConnection();//获取接入的客户端
    connect(tcpSocket,SIGNAL(connected()),this,SLOT(onClientConnected()));
//    onClientConnected();  //为啥加这一句
    connect(tcpSocket,SIGNAL(disconnected()),this,SLOT(onClientDisConnected()));
    connect(tcpSocket,SIGNAL(stateChanged(QAbstractSocket::SocketState)),this,SLOT(onSocketStateChange(QAbstractSocket::SocketState)));
//    onSocketStateChange(tcpSocket->state());  //为啥加这一句
    connect(tcpSocket,SIGNAL(readyRead()),this,SLOT());

}
//服务端监听
void MainWindow::on_tcpHostServerListen_Btn_clicked()
{
    ui->tcpDevice_PlainTextEdit->clear();

    QString IP = ui->tcpHostServerIP_LineEdit->text();
    quint16 port = ui->tcpHostServerPort_LineEdit->text().toInt();

    QHostAddress addr(IP);
    if(myTcpServer->listen(addr,port)) //开始监听
    {
        state2->setText("服务端开始监听");
        ui->tcpDevice_PlainTextEdit->appendPlainText("server add:" + myTcpServer->serverAddress().toString());
        ui->tcpDevice_PlainTextEdit->appendPlainText("server port:" + QString::number(myTcpServer->serverPort()));

        ui->tcpHostServerListen_Btn->setEnabled(false);
        ui->tcpHostServerStopListen_Btn->setEnabled(true);

        ui->tabWidget_4->setStyleSheet("color: rgb(44, 47, 255);");
    }

}
//停止监听
void MainWindow::on_tcpHostServerStopListen_Btn_clicked()
{
    if(myTcpServer->isListening())
    {
        myTcpServer->close();
        state2->setText("服务器停止监听");
        ui->tcpHostServerListen_Btn->setEnabled(true);
        ui->tcpHostServerStopListen_Btn->setEnabled(false);
        ui->tabWidget_4->setStyleSheet("color: rgb(0, 0, 0);");
    }
}
void MainWindow::onSocketStateChange(QAbstractSocket::SocketState socketState)
{
    switch(socketState)
    {
    case QAbstractSocket::UnconnectedState:
        break;
    case QAbstractSocket::HostLookupState:
        break;
    case QAbstractSocket::ConnectingState:
        break;
    case QAbstractSocket::ConnectedState:
        break;
    case QAbstractSocket::BoundState:
        break;
    case QAbstractSocket::ClosingState:
        break;
    case QAbstractSocket::ListeningState:
        break;
    default:
        break;
    }
}
void MainWindow::onSocketReadReady()
{
    QByteArray receiveData = tcpSocket->readAll();
    //use  receiveData do  sth
}
void MainWindow::sendDataThroughTcp(char *data,quint16 count)
{
    if(tcpSocket->isWritable())
    {
        tcpSocket->write(data,count);
        tcpSocket->flush();
    }
}
void MainWindow::onClientConnected()    //客户端接入时执行
{
    ui->tcpDevice_PlainTextEdit->appendPlainText("--client connected");
    ui->tcpDevice_PlainTextEdit->appendPlainText("peer address:" + tcpSocket->peerAddress().toString());
    ui->tcpDevice_PlainTextEdit->appendPlainText("peer port:" + QString::number(tcpSocket->peerPort()));
}
void MainWindow::onClientDisConnected() //客户端断开时执行
{
    ui->tcpDevice_PlainTextEdit->appendPlainText("client socket disconnected");
    tcpSocket->deleteLater();
}
/***************TCP  end************/


//选择数据发送方式
void MainWindow::sendData(char *data,quint16 Num,quint8 No)
{
    switch(No)
    {
    case 0:
        sendDataThroughSerialPort1(data,Num);
        break;
    case 1:
        sendDataThroughSerialPort2(data,Num);
        break;
    case 2:
        sendDataThroughSerialPort3(data,Num);
        break;
    case 3:
        sendDataThroughTcp(data,Num);
        break;
    case 4:
        sendDataThrougUdp(data,Num);
        break;
    default:
        break;
    }
}

//*******额外功能模块开始*********//
void MainWindow::on_extraFunc_CheckBox_clicked()
{
    if(ui->extraFunc_CheckBox->isChecked())
    {
        ui->extra_GroupBox->setStyleSheet("color: rgb(44, 47, 255);");
        ui->toolBox->setEnabled(true);
    }
    else
    {
        ui->extra_GroupBox->setStyleSheet("color: rgb(0, 0, 0);");
        ui->toolBox->setEnabled(false);
    }
}
QStringList cmdList;
void MainWindow::on_editBtn_clicked()
{
    switch(ui->edit_Combox->currentIndex())
    {
    case 0:
        ui->Btn1->setText(ui->rename_LineEdit->text());
        cmdList.removeAt(0);
        cmdList.insert(0,ui->editData_LineEdit->text());
        break;
    case 1:
        ui->Btn2->setText(ui->rename_LineEdit->text());
        cmdList.removeAt(1);
        cmdList.insert(1,ui->editData_LineEdit->text());
        break;
    case 2:
        ui->Btn3->setText(ui->rename_LineEdit->text());
        cmdList.removeAt(2);
        cmdList.insert(2,ui->editData_LineEdit->text());
        break;
    case 3:
        ui->Btn4->setText(ui->rename_LineEdit->text());
        cmdList.removeAt(3);
        cmdList.insert(3,ui->editData_LineEdit->text());
        break;
    case 4:
        ui->Btn5->setText(ui->rename_LineEdit->text());
        cmdList.removeAt(4);
        cmdList.insert(4,ui->editData_LineEdit->text());
        break;
    case 5:
        ui->Btn6->setText(ui->rename_LineEdit->text());
        cmdList.removeAt(5);
        cmdList.insert(5,ui->editData_LineEdit->text());
        break;
    case 6:
        ui->Btn7->setText(ui->rename_LineEdit->text());
        cmdList.removeAt(6);
        cmdList.insert(6,ui->editData_LineEdit->text());
        break;
    case 7:
        ui->Btn8->setText(ui->rename_LineEdit->text());
        cmdList.removeAt(7);
        cmdList.insert(7,ui->editData_LineEdit->text());
        break;
    default:
        break;
    }
    if(ui->edit_Combox->currentIndex() >6)
        ui->edit_Combox->setCurrentIndex(0);
    else
        ui->edit_Combox->setCurrentIndex(ui->edit_Combox->currentIndex() + 1);
}
//发送按钮数据
void MainWindow::sendBtnData()
{
    if(!cmdList.isEmpty())
    {
        QString data = cmdList.at(0);
        char *sdata = QString2Hex(data).data();//以十六进制发送
        sendData(sdata,data.length()/2,ui->comboBox->currentIndex());
    }
    else
    {
        QMessageBox::warning(NULL,"WARNING","请先编辑按钮",QMessageBox::Retry);
    }
}
//此处七个按钮完全可以使用信号槽的方式与sendBtnData()连接。
void MainWindow::on_Btn1_clicked()
{
    sendBtnData();
}

void MainWindow::on_Btn2_clicked()
{
    sendBtnData();
}

void MainWindow::on_Btn3_clicked()
{
    sendBtnData();
}

void MainWindow::on_Btn4_clicked()
{
    sendBtnData();
}

void MainWindow::on_Btn5_clicked()
{
    sendBtnData();
}

void MainWindow::on_Btn6_clicked()
{
    sendBtnData();
}

void MainWindow::on_Btn7_clicked()
{
    sendBtnData();
}

void MainWindow::on_Btn8_clicked()
{
    sendBtnData();
}
//*******************额外功能模块结束*********//


//*********数据测试模块开始**********//
//模块总开关
void MainWindow::on_dataInteracte_CheckBox_clicked()
{
    if(ui->dataInteracte_CheckBox->isChecked())
    {
        ui->send_GroupBox->setEnabled(true);
        ui->receive_GroupBox->setEnabled(true);
        ui->groupBox_6->setStyleSheet("color: rgb(44, 47, 255);");
    }
    else
    {
        ui->send_GroupBox->setEnabled(false);
        ui->receive_GroupBox->setEnabled(false);
        ui->send_CheckBox->setChecked(false);
        ui->receive_CheckBox->setChecked(false);
        ui->groupBox_6->setStyleSheet("color: rgb(0, 0, 0);");
    }
}
void MainWindow::on_sendTestData_Btn_clicked()
{
    if(ui->sendHex_RadioButton->isChecked())
    {
        QString data = ui->lineEdit->text();
        char *sdata = QString2Hex(data).data();//以十六进制发送
        sendData(sdata,data.length()/2,ui->sendTestData_ComboBox->currentIndex());
        sendNum += data.length()/2;
    }
    else
    {
        QString data = ui->lineEdit->text();
        char *sdata = data.toLatin1().data();//以ASCII发送
        sendData(sdata,data.length(),ui->sendTestData_ComboBox->currentIndex());
        sendNum += data.length();
    }
    ui->send_Label->setText(QString::number(sendNum));
}
void MainWindow::on_clearText_Btn_clicked()
{
    ui->plainTextEdit->clear();
    ui->send_Label->setText("0");
    ui->receive_Label->setText("0");
    receiveNum = 0;
    sendNum = 0;
}
void MainWindow::on_send_CheckBox_clicked()
{
    if(ui->send_CheckBox->isChecked())
    {
        regularSendTimer->start(ui->send_SpinBox->text().toInt());
    }
    else
    {
        regularSendTimer->stop();
    }

}

void MainWindow::on_receive_CheckBox_clicked()
{
    if(ui->receive_CheckBox->isChecked())
    {
        regularCleraTimer->start(ui->recievie_SpinBox->text().toInt());
    }
    else
    {
        regularCleraTimer->stop();
    }
}
//*********数据测试模块结束**********//


//*********透传模块开始**********//
//总开关   透传只支持在不同种设备之间透传，比如串口和udp、串口和Tcp之间
void MainWindow::on_passthrough_CheckBox_clicked()
{
    if(ui->passthrough_CheckBox->isChecked())
    {
        ui->passthrough_GroupBox->setEnabled(true);
        ui->groupBox_9->setStyleSheet("color: rgb(44, 90, 255);");
    }
    else
    {
        ui->passthrough_GroupBox->setEnabled(false);
        ui->groupBox_9->setStyleSheet("color: rgb(0, 0, 0);");
    }
}

void MainWindow::on_bridgerStart_Btn_clicked()
{
    isTransing = true;
    ui->transState_Label->setText("透传进行中");
}

void MainWindow::on_bridgerStop_Btn_clicked()
{
    isTransing = false;
    ui->transState_Label->setText("透传已停止");

}
//串口转网口
void MainWindow::transDataS_N(QByteArray array)
{
    quint8 device2 = ui->outputBridge_ComboBox->currentIndex();

    switch(device2)
    {
    case 0:
        sendDataThroughTcp(array.data(),array.length());
        break;
    case 1:
        sendDataThrougUdp(array.data(),array.length());
        break;
    default:
        break;
    }
}
//网口转串口
void MainWindow::transDataN_S(QByteArray array)
{
    quint8 device1 = ui->inputBridge_ComboBox->currentIndex();
    switch(device1)
    {
    case 0:
        sendDataThroughSerialPort1(array.data(),array.length());
        break;
    case 1:
        sendDataThroughSerialPort2(array.data(),array.length());
        break;
    case 2:
        sendDataThroughSerialPort3(array.data(),array.length());
        break;
    default:
        break;
    }

}
/*********透传模块结束**********/


//*********文件传输模块开始***********/
void MainWindow::on_fileTrans_CheckBox_clicked()
{

    if(ui->fileTrans_CheckBox->isChecked())
    {
        ui->fileTrans_GroupBox->setEnabled(true);
        ui->groupBox_5->setStyleSheet("color: rgb(44, 90, 255);");
    }
    else
    {
        ui->fileTrans_GroupBox->setEnabled(false);
        ui->groupBox_5->setStyleSheet("color: rgb(4, 0, 0);");
    }
}


void MainWindow::on_slectFile_Btn_clicked()
{
    QFileDialog fileDial;
    filePath  = fileDial.getOpenFileName();

    QFileInfo info(filePath);
    fileName = info.fileName();
    fileSize = info.size();
    qDebug()<<fileName<<fileSize;

}
//传输文件
void MainWindow::on_sendFile_Btn_clicked()
{
    file.setFileName(filePath);

    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::warning(NULL,"WARNNING","文件打开失败",QMessageBox::Ok);
        return;
    }

    qint64 len = 0;
    QTime myTime;

   quint32 length = myTime.currentTime().msecsSinceStartOfDay();
    do{
        len = 0;
        char buf[1024] = {0};

        len = file.read(buf,sizeof(buf));
        len = serialPort1->write(buf,len);
        sendSize += len;
        state1->setText(QString::number(len));
        mySleep(15);
    }while(len > 0);
    qDebug()<<fileSize/(myTime.currentTime().msecsSinceStartOfDay() -length);



    file.close();

    if(sendSize == fileSize)
    {
        QMessageBox::warning(NULL,"WARNNING","文件发送完成",QMessageBox::Ok);
    }
    qDebug()<<sendSize<<fileSize;
    quint8 No = ui->fielTrans_ComboBox->currentIndex();
    switch(No)
    {
    case 0: //串口1

        break;
    case 1: //TCP
        break;
    case 2: //UDP
        break;
    default:
        break;
    }
}


