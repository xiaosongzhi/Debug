/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *serialPort1_GroupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *serialPort1_ComboBox;
    QLabel *label_2;
    QComboBox *baud1_ComboBox;
    QPushButton *flushSerialPort1_Btn;
    QPushButton *openSerialPort1_Btn;
    QGroupBox *serialPort2_GroupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QComboBox *serialPort2_ComboBox;
    QLabel *label_4;
    QComboBox *baud2_ComboBox;
    QPushButton *flushSerialPort2_Btn;
    QPushButton *openSerialPort2_Btn;
    QGroupBox *serialPort3_GroupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QComboBox *serialPort3_ComboBox;
    QLabel *label_6;
    QComboBox *baud3_ComboBox;
    QPushButton *flushSerialPort3_Btn;
    QPushButton *openSerialPort3_Btn;
    QGroupBox *groupBox_4;
    QGraphicsView *graphicsView;
    QCheckBox *chart_CheckBox;
    QGroupBox *chart_GroupBox;
    QGroupBox *groupBox_13;
    QComboBox *XAxis_ComboBox;
    QLabel *label_18;
    QLabel *label_17;
    QComboBox *YAxis_ComboBox;
    QLabel *label_7;
    QComboBox *chart_ComboBox;
    QPushButton *saveToFile_Btn;
    QLabel *label_13;
    QGroupBox *groupBox_5;
    QCheckBox *fileTrans_CheckBox;
    QGroupBox *fileTrans_GroupBox;
    QProgressBar *progressBar;
    QLabel *label_10;
    QComboBox *fielTrans_ComboBox;
    QPushButton *slectFile_Btn;
    QPushButton *sendFile_Btn;
    QGroupBox *groupBox_6;
    QFrame *line;
    QCheckBox *dataInteracte_CheckBox;
    QGroupBox *send_GroupBox;
    QPushButton *sendTestData_Btn;
    QLabel *label_9;
    QSpinBox *send_SpinBox;
    QCheckBox *send_CheckBox;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_12;
    QRadioButton *sendAscii_RadioButton;
    QRadioButton *sendHex_RadioButton;
    QComboBox *sendTestData_ComboBox;
    QGroupBox *receive_GroupBox;
    QPlainTextEdit *plainTextEdit;
    QSpinBox *recievie_SpinBox;
    QPushButton *clearText_Btn;
    QCheckBox *receive_CheckBox;
    QLabel *label_8;
    QGroupBox *groupBox_11;
    QRadioButton *receiveHex_RadioButton;
    QRadioButton *receiveAscii_RadioButton;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *send_Label;
    QLabel *receive_Label;
    QGroupBox *groupBox_8;
    QTabWidget *tabWidget_2;
    QWidget *tab_2;
    QGroupBox *groupBox_14;
    QLineEdit *udpPort_LineEdit;
    QLabel *label_16;
    QPushButton *udpDisconnect_Btn;
    QPushButton *udpConnect_Btn;
    QWidget *tab_3;
    QGroupBox *groupBox_15;
    QLineEdit *udpIP_LineEdit_2;
    QLabel *label_26;
    QLineEdit *udpPort_LineEdit_2;
    QLabel *label_27;
    QPushButton *udpEnter_Btn;
    QRadioButton *unicast_RadioButton;
    QRadioButton *broadCast_RadioButton;
    QGroupBox *groupBox_9;
    QCheckBox *passthrough_CheckBox;
    QGroupBox *passthrough_GroupBox;
    QPushButton *bridgerStop_Btn;
    QPushButton *bridgerStart_Btn;
    QComboBox *inputBridge_ComboBox;
    QLabel *label_11;
    QComboBox *outputBridge_ComboBox;
    QLabel *label_12;
    QLabel *transState_Label;
    QGroupBox *extra_GroupBox;
    QToolBox *toolBox;
    QWidget *page;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QPushButton *Btn2;
    QPushButton *Btn3;
    QPushButton *Btn6;
    QPushButton *Btn4;
    QPushButton *Btn1;
    QPushButton *Btn5;
    QPushButton *Btn7;
    QPushButton *Btn8;
    QWidget *page_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QLabel *label_19;
    QComboBox *edit_Combox;
    QLabel *label_20;
    QLineEdit *rename_LineEdit;
    QLabel *label_21;
    QPushButton *editBtn;
    QLineEdit *editData_LineEdit;
    QWidget *page_3;
    QTableWidget *tableWidget;
    QCheckBox *extraFunc_CheckBox;
    QComboBox *comboBox;
    QTabWidget *tabWidget_4;
    QWidget *tab_5;
    QTabWidget *tabWidget_3;
    QWidget *tab_4;
    QGroupBox *groupBox_17;
    QPushButton *tcpClientDisconnect_Btn;
    QLineEdit *tcpClientPort_LineEdit;
    QPushButton *tcpClientConnect_Btn;
    QLabel *label_15;
    QWidget *Tab_2;
    QGroupBox *groupBox_18;
    QLineEdit *tcpClientPort_LineEdit_2;
    QLineEdit *tcpClientIP_LineEdit;
    QLabel *label_28;
    QPushButton *tcpClientEnter_Btn;
    QLabel *label_29;
    QWidget *tab_6;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_3;
    QPushButton *tcpHostServerStopListen_Btn;
    QLineEdit *tcpHostServerPort_LineEdit;
    QPushButton *tcpHostServerListen_Btn;
    QLabel *label_14;
    QLineEdit *tcpHostServerIP_LineEdit;
    QLabel *label_30;
    QWidget *Tab;
    QPlainTextEdit *tcpDevice_PlainTextEdit;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1496, 748);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        serialPort1_GroupBox = new QGroupBox(centralWidget);
        serialPort1_GroupBox->setObjectName(QStringLiteral("serialPort1_GroupBox"));
        serialPort1_GroupBox->setGeometry(QRect(40, 20, 251, 151));
        serialPort1_GroupBox->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(serialPort1_GroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(serialPort1_GroupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        serialPort1_ComboBox = new QComboBox(serialPort1_GroupBox);
        serialPort1_ComboBox->setObjectName(QStringLiteral("serialPort1_ComboBox"));

        gridLayout->addWidget(serialPort1_ComboBox, 0, 1, 1, 1);

        label_2 = new QLabel(serialPort1_GroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        baud1_ComboBox = new QComboBox(serialPort1_GroupBox);
        baud1_ComboBox->setObjectName(QStringLiteral("baud1_ComboBox"));

        gridLayout->addWidget(baud1_ComboBox, 1, 1, 1, 1);

        flushSerialPort1_Btn = new QPushButton(serialPort1_GroupBox);
        flushSerialPort1_Btn->setObjectName(QStringLiteral("flushSerialPort1_Btn"));

        gridLayout->addWidget(flushSerialPort1_Btn, 2, 0, 1, 1);

        openSerialPort1_Btn = new QPushButton(serialPort1_GroupBox);
        openSerialPort1_Btn->setObjectName(QStringLiteral("openSerialPort1_Btn"));

        gridLayout->addWidget(openSerialPort1_Btn, 2, 1, 1, 1);

        serialPort2_GroupBox = new QGroupBox(centralWidget);
        serialPort2_GroupBox->setObjectName(QStringLiteral("serialPort2_GroupBox"));
        serialPort2_GroupBox->setGeometry(QRect(340, 20, 251, 151));
        gridLayout_2 = new QGridLayout(serialPort2_GroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(serialPort2_GroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        serialPort2_ComboBox = new QComboBox(serialPort2_GroupBox);
        serialPort2_ComboBox->setObjectName(QStringLiteral("serialPort2_ComboBox"));

        gridLayout_2->addWidget(serialPort2_ComboBox, 0, 1, 1, 1);

        label_4 = new QLabel(serialPort2_GroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        baud2_ComboBox = new QComboBox(serialPort2_GroupBox);
        baud2_ComboBox->setObjectName(QStringLiteral("baud2_ComboBox"));

        gridLayout_2->addWidget(baud2_ComboBox, 1, 1, 1, 1);

        flushSerialPort2_Btn = new QPushButton(serialPort2_GroupBox);
        flushSerialPort2_Btn->setObjectName(QStringLiteral("flushSerialPort2_Btn"));

        gridLayout_2->addWidget(flushSerialPort2_Btn, 2, 0, 1, 1);

        openSerialPort2_Btn = new QPushButton(serialPort2_GroupBox);
        openSerialPort2_Btn->setObjectName(QStringLiteral("openSerialPort2_Btn"));

        gridLayout_2->addWidget(openSerialPort2_Btn, 2, 1, 1, 1);

        serialPort3_GroupBox = new QGroupBox(centralWidget);
        serialPort3_GroupBox->setObjectName(QStringLiteral("serialPort3_GroupBox"));
        serialPort3_GroupBox->setGeometry(QRect(620, 20, 261, 151));
        gridLayout_3 = new QGridLayout(serialPort3_GroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_5 = new QLabel(serialPort3_GroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        serialPort3_ComboBox = new QComboBox(serialPort3_GroupBox);
        serialPort3_ComboBox->setObjectName(QStringLiteral("serialPort3_ComboBox"));

        gridLayout_3->addWidget(serialPort3_ComboBox, 0, 1, 1, 1);

        label_6 = new QLabel(serialPort3_GroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        baud3_ComboBox = new QComboBox(serialPort3_GroupBox);
        baud3_ComboBox->setObjectName(QStringLiteral("baud3_ComboBox"));

        gridLayout_3->addWidget(baud3_ComboBox, 1, 1, 1, 1);

        flushSerialPort3_Btn = new QPushButton(serialPort3_GroupBox);
        flushSerialPort3_Btn->setObjectName(QStringLiteral("flushSerialPort3_Btn"));

        gridLayout_3->addWidget(flushSerialPort3_Btn, 2, 0, 1, 1);

        openSerialPort3_Btn = new QPushButton(serialPort3_GroupBox);
        openSerialPort3_Btn->setObjectName(QStringLiteral("openSerialPort3_Btn"));

        gridLayout_3->addWidget(openSerialPort3_Btn, 2, 1, 1, 1);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(40, 180, 691, 491));
        graphicsView = new QGraphicsView(groupBox_4);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 110, 671, 371));
        chart_CheckBox = new QCheckBox(groupBox_4);
        chart_CheckBox->setObjectName(QStringLiteral("chart_CheckBox"));
        chart_CheckBox->setGeometry(QRect(590, 15, 91, 19));
        chart_GroupBox = new QGroupBox(groupBox_4);
        chart_GroupBox->setObjectName(QStringLiteral("chart_GroupBox"));
        chart_GroupBox->setGeometry(QRect(47, 13, 531, 91));
        groupBox_13 = new QGroupBox(chart_GroupBox);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        groupBox_13->setGeometry(QRect(360, 10, 161, 71));
        XAxis_ComboBox = new QComboBox(groupBox_13);
        XAxis_ComboBox->setObjectName(QStringLiteral("XAxis_ComboBox"));
        XAxis_ComboBox->setGeometry(QRect(60, 10, 87, 22));
        label_18 = new QLabel(groupBox_13);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(20, 40, 41, 16));
        label_17 = new QLabel(groupBox_13);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(20, 10, 41, 16));
        YAxis_ComboBox = new QComboBox(groupBox_13);
        YAxis_ComboBox->setObjectName(QStringLiteral("YAxis_ComboBox"));
        YAxis_ComboBox->setGeometry(QRect(60, 40, 87, 22));
        label_7 = new QLabel(chart_GroupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 13, 81, 16));
        chart_ComboBox = new QComboBox(chart_GroupBox);
        chart_ComboBox->setObjectName(QStringLiteral("chart_ComboBox"));
        chart_ComboBox->setGeometry(QRect(100, 10, 87, 22));
        saveToFile_Btn = new QPushButton(chart_GroupBox);
        saveToFile_Btn->setObjectName(QStringLiteral("saveToFile_Btn"));
        saveToFile_Btn->setGeometry(QRect(220, 10, 93, 28));
        label_13 = new QLabel(chart_GroupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 50, 71, 16));
        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(740, 180, 521, 121));
        fileTrans_CheckBox = new QCheckBox(groupBox_5);
        fileTrans_CheckBox->setObjectName(QStringLiteral("fileTrans_CheckBox"));
        fileTrans_CheckBox->setGeometry(QRect(420, 11, 91, 19));
        fileTrans_GroupBox = new QGroupBox(groupBox_5);
        fileTrans_GroupBox->setObjectName(QStringLiteral("fileTrans_GroupBox"));
        fileTrans_GroupBox->setGeometry(QRect(20, 30, 471, 81));
        progressBar = new QProgressBar(fileTrans_GroupBox);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(10, 49, 461, 23));
        progressBar->setValue(24);
        label_10 = new QLabel(fileTrans_GroupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(5, 8, 72, 31));
        fielTrans_ComboBox = new QComboBox(fileTrans_GroupBox);
        fielTrans_ComboBox->setObjectName(QStringLiteral("fielTrans_ComboBox"));
        fielTrans_ComboBox->setGeometry(QRect(85, 13, 87, 22));
        slectFile_Btn = new QPushButton(fileTrans_GroupBox);
        slectFile_Btn->setObjectName(QStringLiteral("slectFile_Btn"));
        slectFile_Btn->setGeometry(QRect(215, 13, 93, 28));
        sendFile_Btn = new QPushButton(fileTrans_GroupBox);
        sendFile_Btn->setObjectName(QStringLiteral("sendFile_Btn"));
        sendFile_Btn->setGeometry(QRect(335, 13, 93, 28));
        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(740, 320, 521, 351));
        QFont font;
        font.setPointSize(9);
        groupBox_6->setFont(font);
        line = new QFrame(groupBox_6);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 135, 501, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        dataInteracte_CheckBox = new QCheckBox(groupBox_6);
        dataInteracte_CheckBox->setObjectName(QStringLiteral("dataInteracte_CheckBox"));
        dataInteracte_CheckBox->setGeometry(QRect(420, 16, 91, 19));
        send_GroupBox = new QGroupBox(groupBox_6);
        send_GroupBox->setObjectName(QStringLiteral("send_GroupBox"));
        send_GroupBox->setGeometry(QRect(10, 30, 481, 101));
        sendTestData_Btn = new QPushButton(send_GroupBox);
        sendTestData_Btn->setObjectName(QStringLiteral("sendTestData_Btn"));
        sendTestData_Btn->setGeometry(QRect(379, 61, 93, 28));
        label_9 = new QLabel(send_GroupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(290, 21, 71, 20));
        send_SpinBox = new QSpinBox(send_GroupBox);
        send_SpinBox->setObjectName(QStringLiteral("send_SpinBox"));
        send_SpinBox->setGeometry(QRect(360, 20, 71, 22));
        send_SpinBox->setMaximum(10000);
        send_SpinBox->setSingleStep(100);
        send_SpinBox->setValue(1000);
        send_CheckBox = new QCheckBox(send_GroupBox);
        send_CheckBox->setObjectName(QStringLiteral("send_CheckBox"));
        send_CheckBox->setGeometry(QRect(446, 22, 16, 19));
        lineEdit = new QLineEdit(send_GroupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(0, 60, 371, 31));
        groupBox_12 = new QGroupBox(send_GroupBox);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setGeometry(QRect(100, 10, 171, 41));
        sendAscii_RadioButton = new QRadioButton(groupBox_12);
        sendAscii_RadioButton->setObjectName(QStringLiteral("sendAscii_RadioButton"));
        sendAscii_RadioButton->setGeometry(QRect(90, 12, 71, 19));
        sendHex_RadioButton = new QRadioButton(groupBox_12);
        sendHex_RadioButton->setObjectName(QStringLiteral("sendHex_RadioButton"));
        sendHex_RadioButton->setGeometry(QRect(5, 12, 91, 19));
        sendHex_RadioButton->setChecked(true);
        sendTestData_ComboBox = new QComboBox(send_GroupBox);
        sendTestData_ComboBox->setObjectName(QStringLiteral("sendTestData_ComboBox"));
        sendTestData_ComboBox->setGeometry(QRect(6, 20, 87, 22));
        receive_GroupBox = new QGroupBox(groupBox_6);
        receive_GroupBox->setObjectName(QStringLiteral("receive_GroupBox"));
        receive_GroupBox->setGeometry(QRect(7, 151, 491, 191));
        plainTextEdit = new QPlainTextEdit(receive_GroupBox);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(7, 64, 481, 121));
        recievie_SpinBox = new QSpinBox(receive_GroupBox);
        recievie_SpinBox->setObjectName(QStringLiteral("recievie_SpinBox"));
        recievie_SpinBox->setGeometry(QRect(276, 25, 71, 22));
        recievie_SpinBox->setMaximum(100000);
        recievie_SpinBox->setSingleStep(100);
        recievie_SpinBox->setValue(5000);
        clearText_Btn = new QPushButton(receive_GroupBox);
        clearText_Btn->setObjectName(QStringLiteral("clearText_Btn"));
        clearText_Btn->setGeometry(QRect(396, 22, 93, 28));
        receive_CheckBox = new QCheckBox(receive_GroupBox);
        receive_CheckBox->setObjectName(QStringLiteral("receive_CheckBox"));
        receive_CheckBox->setGeometry(QRect(357, 27, 16, 19));
        label_8 = new QLabel(receive_GroupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(211, 26, 71, 20));
        groupBox_11 = new QGroupBox(receive_GroupBox);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(7, 18, 201, 41));
        receiveHex_RadioButton = new QRadioButton(groupBox_11);
        receiveHex_RadioButton->setObjectName(QStringLiteral("receiveHex_RadioButton"));
        receiveHex_RadioButton->setGeometry(QRect(10, 10, 91, 19));
        receiveHex_RadioButton->setChecked(true);
        receiveAscii_RadioButton = new QRadioButton(groupBox_11);
        receiveAscii_RadioButton->setObjectName(QStringLiteral("receiveAscii_RadioButton"));
        receiveAscii_RadioButton->setGeometry(QRect(110, 10, 81, 19));
        label_22 = new QLabel(groupBox_6);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(100, 12, 41, 16));
        label_23 = new QLabel(groupBox_6);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(248, 14, 72, 15));
        send_Label = new QLabel(groupBox_6);
        send_Label->setObjectName(QStringLiteral("send_Label"));
        send_Label->setGeometry(QRect(145, 13, 91, 16));
        receive_Label = new QLabel(groupBox_6);
        receive_Label->setObjectName(QStringLiteral("receive_Label"));
        receive_Label->setGeometry(QRect(310, 15, 91, 16));
        groupBox_8 = new QGroupBox(centralWidget);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(1200, 20, 271, 151));
        tabWidget_2 = new QTabWidget(groupBox_8);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(9, 16, 251, 130));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_14 = new QGroupBox(tab_2);
        groupBox_14->setObjectName(QStringLiteral("groupBox_14"));
        groupBox_14->setGeometry(QRect(10, 2, 230, 100));
        udpPort_LineEdit = new QLineEdit(groupBox_14);
        udpPort_LineEdit->setObjectName(QStringLiteral("udpPort_LineEdit"));
        udpPort_LineEdit->setGeometry(QRect(132, 20, 91, 21));
        label_16 = new QLabel(groupBox_14);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(12, 20, 41, 21));
        udpDisconnect_Btn = new QPushButton(groupBox_14);
        udpDisconnect_Btn->setObjectName(QStringLiteral("udpDisconnect_Btn"));
        udpDisconnect_Btn->setGeometry(QRect(132, 60, 93, 28));
        udpConnect_Btn = new QPushButton(groupBox_14);
        udpConnect_Btn->setObjectName(QStringLiteral("udpConnect_Btn"));
        udpConnect_Btn->setGeometry(QRect(5, 58, 93, 28));
        tabWidget_2->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        groupBox_15 = new QGroupBox(tab_3);
        groupBox_15->setObjectName(QStringLiteral("groupBox_15"));
        groupBox_15->setGeometry(QRect(10, 0, 230, 100));
        udpIP_LineEdit_2 = new QLineEdit(groupBox_15);
        udpIP_LineEdit_2->setObjectName(QStringLiteral("udpIP_LineEdit_2"));
        udpIP_LineEdit_2->setGeometry(QRect(40, 10, 181, 21));
        label_26 = new QLabel(groupBox_15);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(0, 10, 41, 21));
        udpPort_LineEdit_2 = new QLineEdit(groupBox_15);
        udpPort_LineEdit_2->setObjectName(QStringLiteral("udpPort_LineEdit_2"));
        udpPort_LineEdit_2->setGeometry(QRect(40, 40, 181, 21));
        label_27 = new QLabel(groupBox_15);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(0, 40, 41, 21));
        udpEnter_Btn = new QPushButton(groupBox_15);
        udpEnter_Btn->setObjectName(QStringLiteral("udpEnter_Btn"));
        udpEnter_Btn->setGeometry(QRect(142, 65, 81, 28));
        unicast_RadioButton = new QRadioButton(groupBox_15);
        unicast_RadioButton->setObjectName(QStringLiteral("unicast_RadioButton"));
        unicast_RadioButton->setGeometry(QRect(10, 70, 61, 19));
        unicast_RadioButton->setChecked(true);
        broadCast_RadioButton = new QRadioButton(groupBox_15);
        broadCast_RadioButton->setObjectName(QStringLiteral("broadCast_RadioButton"));
        broadCast_RadioButton->setGeometry(QRect(70, 70, 61, 19));
        tabWidget_2->addTab(tab_3, QString());
        groupBox_9 = new QGroupBox(centralWidget);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(1270, 450, 201, 231));
        passthrough_CheckBox = new QCheckBox(groupBox_9);
        passthrough_CheckBox->setObjectName(QStringLiteral("passthrough_CheckBox"));
        passthrough_CheckBox->setGeometry(QRect(100, 18, 91, 19));
        passthrough_GroupBox = new QGroupBox(groupBox_9);
        passthrough_GroupBox->setObjectName(QStringLiteral("passthrough_GroupBox"));
        passthrough_GroupBox->setGeometry(QRect(10, 50, 181, 171));
        bridgerStop_Btn = new QPushButton(passthrough_GroupBox);
        bridgerStop_Btn->setObjectName(QStringLiteral("bridgerStop_Btn"));
        bridgerStop_Btn->setGeometry(QRect(100, 130, 71, 28));
        bridgerStart_Btn = new QPushButton(passthrough_GroupBox);
        bridgerStart_Btn->setObjectName(QStringLiteral("bridgerStart_Btn"));
        bridgerStart_Btn->setGeometry(QRect(10, 130, 71, 28));
        inputBridge_ComboBox = new QComboBox(passthrough_GroupBox);
        inputBridge_ComboBox->setObjectName(QStringLiteral("inputBridge_ComboBox"));
        inputBridge_ComboBox->setGeometry(QRect(70, 10, 71, 22));
        label_11 = new QLabel(passthrough_GroupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 11, 51, 16));
        outputBridge_ComboBox = new QComboBox(passthrough_GroupBox);
        outputBridge_ComboBox->setObjectName(QStringLiteral("outputBridge_ComboBox"));
        outputBridge_ComboBox->setGeometry(QRect(70, 50, 71, 22));
        label_12 = new QLabel(passthrough_GroupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 50, 51, 16));
        transState_Label = new QLabel(passthrough_GroupBox);
        transState_Label->setObjectName(QStringLiteral("transState_Label"));
        transState_Label->setGeometry(QRect(10, 90, 131, 21));
        extra_GroupBox = new QGroupBox(centralWidget);
        extra_GroupBox->setObjectName(QStringLiteral("extra_GroupBox"));
        extra_GroupBox->setGeometry(QRect(1270, 180, 201, 261));
        toolBox = new QToolBox(extra_GroupBox);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(10, 42, 181, 211));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 181, 121));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 171, 121));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        Btn2 = new QPushButton(groupBox);
        Btn2->setObjectName(QStringLiteral("Btn2"));

        gridLayout_4->addWidget(Btn2, 0, 1, 1, 1);

        Btn3 = new QPushButton(groupBox);
        Btn3->setObjectName(QStringLiteral("Btn3"));

        gridLayout_4->addWidget(Btn3, 1, 0, 1, 1);

        Btn6 = new QPushButton(groupBox);
        Btn6->setObjectName(QStringLiteral("Btn6"));

        gridLayout_4->addWidget(Btn6, 2, 1, 1, 1);

        Btn4 = new QPushButton(groupBox);
        Btn4->setObjectName(QStringLiteral("Btn4"));

        gridLayout_4->addWidget(Btn4, 1, 1, 1, 1);

        Btn1 = new QPushButton(groupBox);
        Btn1->setObjectName(QStringLiteral("Btn1"));

        gridLayout_4->addWidget(Btn1, 0, 0, 1, 1);

        Btn5 = new QPushButton(groupBox);
        Btn5->setObjectName(QStringLiteral("Btn5"));

        gridLayout_4->addWidget(Btn5, 2, 0, 1, 1);

        Btn7 = new QPushButton(groupBox);
        Btn7->setObjectName(QStringLiteral("Btn7"));

        gridLayout_4->addWidget(Btn7, 3, 0, 1, 1);

        Btn8 = new QPushButton(groupBox);
        Btn8->setObjectName(QStringLiteral("Btn8"));
        QFont font1;
        font1.setPointSize(8);
        Btn8->setFont(font1);

        gridLayout_4->addWidget(Btn8, 3, 1, 1, 1);

        toolBox->addItem(page, QString::fromUtf8("\346\214\211\351\224\256"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 181, 121));
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(-10, 0, 191, 121));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_5->addWidget(label_19, 0, 0, 1, 1);

        edit_Combox = new QComboBox(groupBox_2);
        edit_Combox->setObjectName(QStringLiteral("edit_Combox"));

        gridLayout_5->addWidget(edit_Combox, 0, 1, 1, 1);

        label_20 = new QLabel(groupBox_2);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_5->addWidget(label_20, 1, 0, 1, 1);

        rename_LineEdit = new QLineEdit(groupBox_2);
        rename_LineEdit->setObjectName(QStringLiteral("rename_LineEdit"));

        gridLayout_5->addWidget(rename_LineEdit, 1, 1, 1, 1);

        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_5->addWidget(label_21, 2, 0, 1, 1);

        editBtn = new QPushButton(groupBox_2);
        editBtn->setObjectName(QStringLiteral("editBtn"));
        editBtn->setMinimumSize(QSize(0, 20));

        gridLayout_5->addWidget(editBtn, 2, 1, 1, 1);

        editData_LineEdit = new QLineEdit(groupBox_2);
        editData_LineEdit->setObjectName(QStringLiteral("editData_LineEdit"));

        gridLayout_5->addWidget(editData_LineEdit, 3, 0, 1, 2);

        toolBox->addItem(page_2, QString::fromUtf8("\347\274\226\350\276\221\346\214\211\351\224\256"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 181, 121));
        tableWidget = new QTableWidget(page_3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 181, 121));
        toolBox->addItem(page_3, QString::fromUtf8("\347\275\221\347\273\234\350\256\276\345\244\207"));
        extraFunc_CheckBox = new QCheckBox(extra_GroupBox);
        extraFunc_CheckBox->setObjectName(QStringLiteral("extraFunc_CheckBox"));
        extraFunc_CheckBox->setGeometry(QRect(104, 18, 91, 19));
        comboBox = new QComboBox(extra_GroupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(11, 16, 87, 22));
        tabWidget_4 = new QTabWidget(centralWidget);
        tabWidget_4->setObjectName(QStringLiteral("tabWidget_4"));
        tabWidget_4->setGeometry(QRect(890, 20, 291, 161));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget_3 = new QTabWidget(tab_5);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(10, 1, 271, 131));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        groupBox_17 = new QGroupBox(tab_4);
        groupBox_17->setObjectName(QStringLiteral("groupBox_17"));
        groupBox_17->setGeometry(QRect(13, 4, 241, 101));
        tcpClientDisconnect_Btn = new QPushButton(groupBox_17);
        tcpClientDisconnect_Btn->setObjectName(QStringLiteral("tcpClientDisconnect_Btn"));
        tcpClientDisconnect_Btn->setGeometry(QRect(127, 50, 93, 28));
        tcpClientPort_LineEdit = new QLineEdit(groupBox_17);
        tcpClientPort_LineEdit->setObjectName(QStringLiteral("tcpClientPort_LineEdit"));
        tcpClientPort_LineEdit->setGeometry(QRect(130, 10, 91, 21));
        tcpClientConnect_Btn = new QPushButton(groupBox_17);
        tcpClientConnect_Btn->setObjectName(QStringLiteral("tcpClientConnect_Btn"));
        tcpClientConnect_Btn->setGeometry(QRect(11, 50, 93, 28));
        label_15 = new QLabel(groupBox_17);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 10, 41, 21));
        tabWidget_3->addTab(tab_4, QString());
        Tab_2 = new QWidget();
        Tab_2->setObjectName(QStringLiteral("Tab_2"));
        groupBox_18 = new QGroupBox(Tab_2);
        groupBox_18->setObjectName(QStringLiteral("groupBox_18"));
        groupBox_18->setGeometry(QRect(12, 5, 241, 101));
        tcpClientPort_LineEdit_2 = new QLineEdit(groupBox_18);
        tcpClientPort_LineEdit_2->setObjectName(QStringLiteral("tcpClientPort_LineEdit_2"));
        tcpClientPort_LineEdit_2->setGeometry(QRect(53, 36, 181, 21));
        tcpClientIP_LineEdit = new QLineEdit(groupBox_18);
        tcpClientIP_LineEdit->setObjectName(QStringLiteral("tcpClientIP_LineEdit"));
        tcpClientIP_LineEdit->setGeometry(QRect(53, 6, 181, 21));
        label_28 = new QLabel(groupBox_18);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(3, 6, 41, 21));
        tcpClientEnter_Btn = new QPushButton(groupBox_18);
        tcpClientEnter_Btn->setObjectName(QStringLiteral("tcpClientEnter_Btn"));
        tcpClientEnter_Btn->setGeometry(QRect(162, 66, 71, 28));
        label_29 = new QLabel(groupBox_18);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(3, 36, 41, 21));
        tabWidget_3->addTab(Tab_2, QString());
        tabWidget_4->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tabWidget = new QTabWidget(tab_6);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(7, 1, 271, 131));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(13, 4, 241, 101));
        tcpHostServerStopListen_Btn = new QPushButton(groupBox_3);
        tcpHostServerStopListen_Btn->setObjectName(QStringLiteral("tcpHostServerStopListen_Btn"));
        tcpHostServerStopListen_Btn->setGeometry(QRect(127, 66, 93, 28));
        tcpHostServerPort_LineEdit = new QLineEdit(groupBox_3);
        tcpHostServerPort_LineEdit->setObjectName(QStringLiteral("tcpHostServerPort_LineEdit"));
        tcpHostServerPort_LineEdit->setGeometry(QRect(70, 40, 161, 21));
        tcpHostServerListen_Btn = new QPushButton(groupBox_3);
        tcpHostServerListen_Btn->setObjectName(QStringLiteral("tcpHostServerListen_Btn"));
        tcpHostServerListen_Btn->setGeometry(QRect(11, 66, 93, 28));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 40, 41, 21));
        tcpHostServerIP_LineEdit = new QLineEdit(groupBox_3);
        tcpHostServerIP_LineEdit->setObjectName(QStringLiteral("tcpHostServerIP_LineEdit"));
        tcpHostServerIP_LineEdit->setGeometry(QRect(70, 10, 161, 21));
        label_30 = new QLabel(groupBox_3);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(20, 10, 41, 21));
        tabWidget->addTab(tab, QString());
        Tab = new QWidget();
        Tab->setObjectName(QStringLiteral("Tab"));
        tcpDevice_PlainTextEdit = new QPlainTextEdit(Tab);
        tcpDevice_PlainTextEdit->setObjectName(QStringLiteral("tcpDevice_PlainTextEdit"));
        tcpDevice_PlainTextEdit->setGeometry(QRect(0, 0, 261, 101));
        tabWidget->addTab(Tab, QString());
        tabWidget_4->addTab(tab_6, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1496, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        tabWidget_2->setCurrentIndex(0);
        toolBox->setCurrentIndex(0);
        tabWidget_4->setCurrentIndex(1);
        tabWidget_3->setCurrentIndex(1);
        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        serialPort1_GroupBox->setTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\2431\351\205\215\347\275\256", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        baud1_ComboBox->clear();
        baud1_ComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "9600", Q_NULLPTR)
         << QApplication::translate("MainWindow", "115200", Q_NULLPTR)
        );
        flushSerialPort1_Btn->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", Q_NULLPTR));
        openSerialPort1_Btn->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
        serialPort2_GroupBox->setTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\2432\351\205\215\347\275\256", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        baud2_ComboBox->clear();
        baud2_ComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "9600", Q_NULLPTR)
         << QApplication::translate("MainWindow", "115200", Q_NULLPTR)
        );
        flushSerialPort2_Btn->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", Q_NULLPTR));
        openSerialPort2_Btn->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
        serialPort3_GroupBox->setTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\2433\351\205\215\347\275\256", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        baud3_ComboBox->clear();
        baud3_ComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "9600", Q_NULLPTR)
         << QApplication::translate("MainWindow", "115200", Q_NULLPTR)
        );
        flushSerialPort3_Btn->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", Q_NULLPTR));
        openSerialPort3_Btn->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\346\225\260\346\215\256", Q_NULLPTR));
        chart_CheckBox->setText(QApplication::translate("MainWindow", "\346\250\241\345\235\227\345\274\200\345\205\263", Q_NULLPTR));
        chart_GroupBox->setTitle(QString());
        groupBox_13->setTitle(QString());
        XAxis_ComboBox->clear();
        XAxis_ComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\350\267\235\347\246\273", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\227\266\351\227\264", Q_NULLPTR)
        );
        label_18->setText(QApplication::translate("MainWindow", "Y\350\275\264", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "X\350\275\264", Q_NULLPTR));
        YAxis_ComboBox->clear();
        YAxis_ComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\271\277\345\272\246", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\270\251\345\272\246", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\201\217\350\210\252\350\247\222", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\344\277\257\344\273\260\350\247\222", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\347\277\273\346\273\232\350\247\222", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\350\276\223\345\205\245\345\217\243", Q_NULLPTR));
        chart_ComboBox->clear();
        chart_ComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\344\270\262\345\217\2431", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\344\270\262\345\217\2432", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\344\270\262\345\217\2433", Q_NULLPTR)
        );
        saveToFile_Btn->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\345\210\260\346\226\207\344\273\266", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\346\240\274\345\274\217", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266\344\274\240\350\276\223", Q_NULLPTR));
        fileTrans_CheckBox->setText(QApplication::translate("MainWindow", "\346\250\241\345\235\227\345\274\200\345\205\263", Q_NULLPTR));
        fileTrans_GroupBox->setTitle(QString());
        label_10->setText(QApplication::translate("MainWindow", "\344\274\240\350\276\223\346\226\271\345\274\217", Q_NULLPTR));
        fielTrans_ComboBox->clear();
        fielTrans_ComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\344\270\262\345\217\2431", Q_NULLPTR)
         << QApplication::translate("MainWindow", "TCP", Q_NULLPTR)
         << QApplication::translate("MainWindow", "UDP", Q_NULLPTR)
        );
        slectFile_Btn->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266", Q_NULLPTR));
        sendFile_Btn->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "\346\225\260\346\215\256\346\265\213\350\257\225", Q_NULLPTR));
        dataInteracte_CheckBox->setText(QApplication::translate("MainWindow", "\346\250\241\345\235\227\345\274\200\345\205\263", Q_NULLPTR));
        send_GroupBox->setTitle(QApplication::translate("MainWindow", "\345\217\221\351\200\201", Q_NULLPTR));
        sendTestData_Btn->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\345\256\232\346\227\266\345\217\221\351\200\201", Q_NULLPTR));
        send_CheckBox->setText(QString());
        groupBox_12->setTitle(QString());
        sendAscii_RadioButton->setText(QApplication::translate("MainWindow", "ASCII", Q_NULLPTR));
        sendHex_RadioButton->setText(QApplication::translate("MainWindow", "16\350\277\233\345\210\266", Q_NULLPTR));
        sendTestData_ComboBox->clear();
        sendTestData_ComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\344\270\262\345\217\2431", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\344\270\262\345\217\2432", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\344\270\262\345\217\2433", Q_NULLPTR)
         << QApplication::translate("MainWindow", "TCP", Q_NULLPTR)
         << QApplication::translate("MainWindow", "UDP", Q_NULLPTR)
        );
        receive_GroupBox->setTitle(QApplication::translate("MainWindow", "\346\216\245\346\224\266", Q_NULLPTR));
        clearText_Btn->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244", Q_NULLPTR));
        receive_CheckBox->setText(QString());
        label_8->setText(QApplication::translate("MainWindow", "\345\256\232\346\227\266\346\270\205\351\231\244", Q_NULLPTR));
        groupBox_11->setTitle(QString());
        receiveHex_RadioButton->setText(QApplication::translate("MainWindow", "16\350\277\233\345\210\266", Q_NULLPTR));
        receiveAscii_RadioButton->setText(QApplication::translate("MainWindow", "ASCII", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "send", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "receive", Q_NULLPTR));
        send_Label->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        receive_Label->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "UDP", Q_NULLPTR));
        groupBox_14->setTitle(QString());
        label_16->setText(QApplication::translate("MainWindow", "PORT", Q_NULLPTR));
        udpDisconnect_Btn->setText(QApplication::translate("MainWindow", "\346\226\255\345\274\200", Q_NULLPTR));
        udpConnect_Btn->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QApplication::translate("MainWindow", "\346\234\254\345\234\260", Q_NULLPTR));
        groupBox_15->setTitle(QString());
        label_26->setText(QApplication::translate("MainWindow", "IP ", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainWindow", "PORT", Q_NULLPTR));
        udpEnter_Btn->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", Q_NULLPTR));
        unicast_RadioButton->setText(QApplication::translate("MainWindow", "\345\215\225\346\222\255", Q_NULLPTR));
        broadCast_RadioButton->setText(QApplication::translate("MainWindow", "\345\271\277\346\222\255", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "\344\270\213\344\275\215\346\234\272", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "\347\275\221\345\217\243-\344\270\262\345\217\243\351\200\217\344\274\240", Q_NULLPTR));
        passthrough_CheckBox->setText(QApplication::translate("MainWindow", "\346\250\241\345\235\227\345\274\200\345\205\263", Q_NULLPTR));
        passthrough_GroupBox->setTitle(QString());
        bridgerStop_Btn->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", Q_NULLPTR));
        bridgerStart_Btn->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213", Q_NULLPTR));
        inputBridge_ComboBox->clear();
        inputBridge_ComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\344\270\262\345\217\2431", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\344\270\262\345\217\2432", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\344\270\262\345\217\2433", Q_NULLPTR)
        );
        label_11->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\2071", Q_NULLPTR));
        outputBridge_ComboBox->clear();
        outputBridge_ComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "TCP", Q_NULLPTR)
         << QApplication::translate("MainWindow", "UDP", Q_NULLPTR)
        );
        label_12->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\2072", Q_NULLPTR));
        transState_Label->setText(QApplication::translate("MainWindow", "\351\200\217\344\274\240\346\234\252\345\274\200\345\247\213", Q_NULLPTR));
        extra_GroupBox->setTitle(QApplication::translate("MainWindow", "\351\242\235\345\244\226\345\212\237\350\203\275", Q_NULLPTR));
        groupBox->setTitle(QString());
        Btn2->setText(QApplication::translate("MainWindow", "Btn2", Q_NULLPTR));
        Btn3->setText(QApplication::translate("MainWindow", "Btn3", Q_NULLPTR));
        Btn6->setText(QApplication::translate("MainWindow", "Btn6", Q_NULLPTR));
        Btn4->setText(QApplication::translate("MainWindow", "Btn4", Q_NULLPTR));
        Btn1->setText(QApplication::translate("MainWindow", "Btn1", Q_NULLPTR));
        Btn5->setText(QApplication::translate("MainWindow", "Btn5", Q_NULLPTR));
        Btn7->setText(QApplication::translate("MainWindow", "Btn7", Q_NULLPTR));
        Btn8->setText(QApplication::translate("MainWindow", "Btn8", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "\346\214\211\351\224\256", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        label_19->setText(QApplication::translate("MainWindow", "\346\214\211\351\222\256\351\200\211\346\213\251", Q_NULLPTR));
        edit_Combox->clear();
        edit_Combox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Btn1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Btn2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Btn3", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Btn4", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Btn5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Btn6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Btn7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Btn8", Q_NULLPTR)
        );
        label_20->setText(QApplication::translate("MainWindow", "\351\207\215\345\221\275\345\220\215", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256", Q_NULLPTR));
        editBtn->setText(QApplication::translate("MainWindow", "enter", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "\347\274\226\350\276\221\346\214\211\351\224\256", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("MainWindow", "\347\275\221\347\273\234\350\256\276\345\244\207", Q_NULLPTR));
        extraFunc_CheckBox->setText(QApplication::translate("MainWindow", "\346\250\241\345\235\227\345\274\200\345\205\263", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\344\270\262\345\217\2431", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\344\270\262\345\217\2432", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\344\270\262\345\217\2433", Q_NULLPTR)
         << QApplication::translate("MainWindow", "TCP", Q_NULLPTR)
         << QApplication::translate("MainWindow", "UDP", Q_NULLPTR)
        );
        groupBox_17->setTitle(QString());
        tcpClientDisconnect_Btn->setText(QApplication::translate("MainWindow", "\346\226\255\345\274\200", Q_NULLPTR));
        tcpClientConnect_Btn->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "PORT", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_4), QApplication::translate("MainWindow", "\346\234\254\345\234\260", Q_NULLPTR));
        groupBox_18->setTitle(QString());
        label_28->setText(QApplication::translate("MainWindow", "IP ", Q_NULLPTR));
        tcpClientEnter_Btn->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", Q_NULLPTR));
        label_29->setText(QApplication::translate("MainWindow", "PORT", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(Tab_2), QApplication::translate("MainWindow", "\344\270\213\344\275\215\346\234\272", Q_NULLPTR));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_5), QApplication::translate("MainWindow", "TcpClient", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        tcpHostServerStopListen_Btn->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\347\233\221\345\220\254", Q_NULLPTR));
        tcpHostServerListen_Btn->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\347\233\221\345\220\254", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "PORT", Q_NULLPTR));
        label_30->setText(QApplication::translate("MainWindow", "IP ", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\346\234\254\345\234\260", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Tab), QApplication::translate("MainWindow", "\346\216\245\345\205\245\350\256\276\345\244\207", Q_NULLPTR));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_6), QApplication::translate("MainWindow", "TcpServer", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243\350\260\203\350\257\225\345\212\251\346\211\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
