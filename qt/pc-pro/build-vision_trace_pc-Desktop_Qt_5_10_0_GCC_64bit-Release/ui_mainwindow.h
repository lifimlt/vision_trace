/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QTextBrowser *textBrowser;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QPushButton *pushButton_con_net;
    QPushButton *pushButton_discon_net;
    QRadioButton *radioButtonCamera;
    QRadioButton *radioButtonCar;
    QPushButton *pushButton_send;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonStop;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_down;
    QPushButton *pushButton_left;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_up;
    QPushButton *pushButton_right;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(726, 467);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_3->addWidget(label);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setMinimumSize(QSize(420, 0));
        textBrowser->setReadOnly(false);

        verticalLayout_3->addWidget(textBrowser);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        pushButton_con_net = new QPushButton(groupBox);
        pushButton_con_net->setObjectName(QStringLiteral("pushButton_con_net"));
        pushButton_con_net->setGeometry(QRect(12, 52, 96, 25));
        pushButton_discon_net = new QPushButton(groupBox);
        pushButton_discon_net->setObjectName(QStringLiteral("pushButton_discon_net"));
        pushButton_discon_net->setGeometry(QRect(10, 80, 127, 25));
        radioButtonCamera = new QRadioButton(groupBox);
        radioButtonCamera->setObjectName(QStringLiteral("radioButtonCamera"));
        radioButtonCamera->setGeometry(QRect(150, 40, 112, 23));
        radioButtonCamera->setStyleSheet(QStringLiteral("background-color: rgb(204, 0, 0);"));
        radioButtonCamera->setCheckable(false);
        radioButtonCamera->setAutoExclusive(false);
        radioButtonCar = new QRadioButton(groupBox);
        radioButtonCar->setObjectName(QStringLiteral("radioButtonCar"));
        radioButtonCar->setGeometry(QRect(150, 70, 112, 23));
        radioButtonCar->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));
        radioButtonCar->setCheckable(false);
        radioButtonCar->setAutoExclusive(false);
        pushButton_send = new QPushButton(groupBox);
        pushButton_send->setObjectName(QStringLiteral("pushButton_send"));
        pushButton_send->setGeometry(QRect(10, 110, 127, 25));

        verticalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButtonStop = new QPushButton(groupBox_2);
        pushButtonStop->setObjectName(QStringLiteral("pushButtonStop"));
        pushButtonStop->setStyleSheet(QStringLiteral("background-color: rgb(164, 0, 0);"));

        verticalLayout_2->addWidget(pushButtonStop);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        pushButton_down = new QPushButton(groupBox_2);
        pushButton_down->setObjectName(QStringLiteral("pushButton_down"));
        pushButton_down->setMinimumSize(QSize(80, 80));

        gridLayout->addWidget(pushButton_down, 1, 1, 1, 1);

        pushButton_left = new QPushButton(groupBox_2);
        pushButton_left->setObjectName(QStringLiteral("pushButton_left"));
        pushButton_left->setMinimumSize(QSize(80, 80));
        pushButton_left->setMaximumSize(QSize(80, 80));

        gridLayout->addWidget(pushButton_left, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton_up = new QPushButton(groupBox_2);
        pushButton_up->setObjectName(QStringLiteral("pushButton_up"));
        pushButton_up->setMinimumSize(QSize(80, 80));

        gridLayout->addWidget(pushButton_up, 0, 1, 1, 1);

        pushButton_right = new QPushButton(groupBox_2);
        pushButton_right->setObjectName(QStringLiteral("pushButton_right"));
        pushButton_right->setMinimumSize(QSize(80, 80));
        pushButton_right->setMaximumSize(QSize(80, 80));

        gridLayout->addWidget(pushButton_right, 1, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        verticalLayout_4->addWidget(groupBox_2);


        horizontalLayout->addLayout(verticalLayout_4);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 726, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Infomation</span></p></body></html>", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "config", nullptr));
        pushButton_con_net->setText(QApplication::translate("MainWindow", "ping network", nullptr));
        pushButton_discon_net->setText(QApplication::translate("MainWindow", "exit network", nullptr));
        radioButtonCamera->setText(QApplication::translate("MainWindow", "Camera", nullptr));
        radioButtonCar->setText(QApplication::translate("MainWindow", "Car", nullptr));
        pushButton_send->setText(QApplication::translate("MainWindow", "send UDP", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "ctrl", nullptr));
        pushButtonStop->setText(QApplication::translate("MainWindow", "Stop", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButtonStop->setShortcut(QApplication::translate("MainWindow", "Space", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_down->setText(QApplication::translate("MainWindow", "DOWN", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_down->setShortcut(QApplication::translate("MainWindow", "Down", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_left->setText(QApplication::translate("MainWindow", "LEFT", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_left->setShortcut(QApplication::translate("MainWindow", "Left", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_up->setText(QApplication::translate("MainWindow", "UP", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_up->setShortcut(QApplication::translate("MainWindow", "Up", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton_right->setText(QApplication::translate("MainWindow", "RIGHT", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_right->setShortcut(QApplication::translate("MainWindow", "Right", nullptr));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
