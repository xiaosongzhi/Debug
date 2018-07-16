#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include "dataformate.h"
#include <QTimer>
#include <QUdpSocket>
#include <QTcpSocket>
#include <QTcpServer>
#include <QLabel>
#include <QHostInfo>
#include <QFileDialog>
#include <QFile>
#include <QFileInfo>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void initDevice();
    void flushSerialPort(quint8);
    void analyiseData();
    void sendBtnData();

    void sendDataThroughSerialPort1(char *,quint16); //0
    void sendDataThroughSerialPort2(char *,quint16); //1
    void sendDataThroughSerialPort3(char *,quint16); //2
    void sendDataThroughTcp(char *,quint16); //3
    void sendDataThrougUdp(char *,quint16); //4

    void sendData(char *,quint16,quint8);// 数据，数据长度，发送方式
    void transDataS_N(QByteArray);  //serial  to  network
    void transDataN_S(QByteArray);  //network to  serial

    void showState();
    QString getLocalIp();

private slots:
    void on_flushSerialPort1_Btn_clicked();

    void on_openSerialPort1_Btn_clicked();

    void on_flushSerialPort2_Btn_clicked();

    void on_openSerialPort2_Btn_clicked();

    void on_flushSerialPort3_Btn_clicked();

    void on_openSerialPort3_Btn_clicked();

    void readSerialPort1Data();

    void readSerialPort2Data();

    void readSerialPort3Data();

    void on_editBtn_clicked();

    void on_Btn1_clicked();

    void on_Btn2_clicked();

    void on_Btn3_clicked();

    void on_Btn4_clicked();

    void on_Btn5_clicked();

    void on_Btn6_clicked();

    void on_Btn7_clicked();

    void on_Btn8_clicked();

    void on_sendTestData_Btn_clicked();

    void on_clearText_Btn_clicked();

    void on_send_CheckBox_clicked();

    void on_receive_CheckBox_clicked();

    void on_extraFunc_CheckBox_clicked();

    void on_dataInteracte_CheckBox_clicked();

    void on_bridgerStart_Btn_clicked();

    void on_bridgerStop_Btn_clicked();

    void on_passthrough_CheckBox_clicked();

    void on_udpConnect_Btn_clicked();

    void on_udpDisconnect_Btn_clicked();

    void on_udpEnter_Btn_clicked();

    void on_tcpHostServerListen_Btn_clicked();

    void on_tcpHostServerStopListen_Btn_clicked();

    void on_slectFile_Btn_clicked();

    void on_sendFile_Btn_clicked();

    void on_fileTrans_CheckBox_clicked();

public slots:
    void readUdpDatagram();
    void udpStateChange(QAbstractSocket::SocketState);
    void onNewConnection();
    void onClientConnected();//客户端接入时执行
    void onClientDisConnected();//客户端断开时执行
    void onSocketStateChange(QAbstractSocket::SocketState);
    void onSocketReadReady();
private:
    Ui::MainWindow *ui;
    QSerialPort *serialPort1;
    QSerialPort serialPort2,serialPort3;
    QUdpSocket *myUdpSocket;
    QTcpSocket *myTcpSocket;    //用于自己的客户端


    QTcpServer *myTcpServer;
    QTcpSocket *tcpSocket;  //用于接入的client
    QLabel *state1;
    QLabel *state2;
private:
    QTimer *regularSendTimer,*regularCleraTimer;

    QByteArray serial1Buffer,serial2Buffer,serial3Buffer;
    quint64 sendNum = 0,receiveNum = 0;
    bool  isTransing;
    QString udpSlaveIp,tcpSlaveIp;
    quint16 udpSlavePort,tcpSlavePort;

    QString fileName;
    QString filePath;
    quint64 fileSize;
    quint64 sendSize;
    QFile file;

};

#endif // MAINWINDOW_H
