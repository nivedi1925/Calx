/********************************************************************************
** Form generated from reading UI file 'calx.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALX_H
#define UI_CALX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calx
{
public:
    QWidget *centralwidget;
    QLineEdit *outputLineEdit;
    QPushButton *zeroButton;
    QPushButton *clearButton;
    QPushButton *equalButton;
    QPushButton *oneButton;
    QPushButton *twoButton;
    QPushButton *fiveButton;
    QPushButton *sixButton;
    QPushButton *fourButton;
    QPushButton *threeButton;
    QPushButton *nineButton;
    QPushButton *sevenButton;
    QPushButton *additionButton;
    QPushButton *multiplyButton;
    QPushButton *substractButton;
    QPushButton *divideButton;
    QPushButton *eightButton;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuCAlx;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *calx)
    {
        if (calx->objectName().isEmpty())
            calx->setObjectName("calx");
        calx->resize(235, 322);
        calx->setStyleSheet(QString::fromUtf8("background-color:black"));
        centralwidget = new QWidget(calx);
        centralwidget->setObjectName("centralwidget");
        outputLineEdit = new QLineEdit(centralwidget);
        outputLineEdit->setObjectName("outputLineEdit");
        outputLineEdit->setGeometry(QRect(10, 30, 211, 81));
        QFont font;
        font.setPointSize(18);
        outputLineEdit->setFont(font);
        outputLineEdit->setStyleSheet(QString::fromUtf8("background-color:white"));
        zeroButton = new QPushButton(centralwidget);
        zeroButton->setObjectName("zeroButton");
        zeroButton->setGeometry(QRect(0, 120, 51, 26));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Serif")});
        zeroButton->setFont(font1);
        zeroButton->setStyleSheet(QString::fromUtf8("background-color:grey"));
        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(60, 120, 51, 26));
        clearButton->setFont(font1);
        clearButton->setStyleSheet(QString::fromUtf8("background-color:red"));
        equalButton = new QPushButton(centralwidget);
        equalButton->setObjectName("equalButton");
        equalButton->setGeometry(QRect(120, 120, 51, 26));
        equalButton->setFont(font1);
        equalButton->setStyleSheet(QString::fromUtf8("background-color:orange"));
        oneButton = new QPushButton(centralwidget);
        oneButton->setObjectName("oneButton");
        oneButton->setGeometry(QRect(0, 160, 51, 26));
        oneButton->setFont(font1);
        oneButton->setStyleSheet(QString::fromUtf8("background-color:grey"));
        twoButton = new QPushButton(centralwidget);
        twoButton->setObjectName("twoButton");
        twoButton->setGeometry(QRect(60, 160, 51, 26));
        twoButton->setFont(font1);
        twoButton->setStyleSheet(QString::fromUtf8("background-color:grey"));
        fiveButton = new QPushButton(centralwidget);
        fiveButton->setObjectName("fiveButton");
        fiveButton->setGeometry(QRect(60, 200, 51, 26));
        fiveButton->setFont(font1);
        fiveButton->setStyleSheet(QString::fromUtf8("background-color:grey"));
        sixButton = new QPushButton(centralwidget);
        sixButton->setObjectName("sixButton");
        sixButton->setGeometry(QRect(120, 200, 51, 26));
        sixButton->setFont(font1);
        sixButton->setStyleSheet(QString::fromUtf8("background-color:grey"));
        fourButton = new QPushButton(centralwidget);
        fourButton->setObjectName("fourButton");
        fourButton->setGeometry(QRect(0, 200, 51, 26));
        fourButton->setFont(font1);
        fourButton->setStyleSheet(QString::fromUtf8("background-color:grey"));
        threeButton = new QPushButton(centralwidget);
        threeButton->setObjectName("threeButton");
        threeButton->setGeometry(QRect(120, 160, 51, 26));
        threeButton->setFont(font1);
        threeButton->setStyleSheet(QString::fromUtf8("background-color:grey"));
        nineButton = new QPushButton(centralwidget);
        nineButton->setObjectName("nineButton");
        nineButton->setGeometry(QRect(120, 240, 51, 26));
        nineButton->setFont(font1);
        nineButton->setStyleSheet(QString::fromUtf8("background-color:grey"));
        sevenButton = new QPushButton(centralwidget);
        sevenButton->setObjectName("sevenButton");
        sevenButton->setGeometry(QRect(0, 240, 51, 26));
        sevenButton->setFont(font1);
        sevenButton->setStyleSheet(QString::fromUtf8("background-color:grey"));
        additionButton = new QPushButton(centralwidget);
        additionButton->setObjectName("additionButton");
        additionButton->setGeometry(QRect(180, 120, 51, 26));
        additionButton->setFont(font1);
        additionButton->setStyleSheet(QString::fromUtf8("background-color:orange\n"
"\n"
"\n"
""));
        multiplyButton = new QPushButton(centralwidget);
        multiplyButton->setObjectName("multiplyButton");
        multiplyButton->setGeometry(QRect(180, 200, 51, 26));
        multiplyButton->setFont(font1);
        multiplyButton->setStyleSheet(QString::fromUtf8("background-color:orange\n"
"\n"
"\n"
""));
        substractButton = new QPushButton(centralwidget);
        substractButton->setObjectName("substractButton");
        substractButton->setGeometry(QRect(180, 160, 51, 26));
        substractButton->setFont(font1);
        substractButton->setStyleSheet(QString::fromUtf8("background-color:orange\n"
"\n"
"\n"
""));
        divideButton = new QPushButton(centralwidget);
        divideButton->setObjectName("divideButton");
        divideButton->setGeometry(QRect(180, 240, 51, 26));
        divideButton->setFont(font1);
        divideButton->setStyleSheet(QString::fromUtf8("background-color:orange\n"
"\n"
"\n"
""));
        eightButton = new QPushButton(centralwidget);
        eightButton->setObjectName("eightButton");
        eightButton->setGeometry(QRect(60, 240, 51, 26));
        eightButton->setFont(font1);
        eightButton->setStyleSheet(QString::fromUtf8("background-color:grey"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 231, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("URW Bookman")});
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setHintingPreference(QFont::PreferDefaultHinting);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color:white\n"
""));
        calx->setCentralWidget(centralwidget);
        menubar = new QMenuBar(calx);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 235, 23));
        menuCAlx = new QMenu(menubar);
        menuCAlx->setObjectName("menuCAlx");
        calx->setMenuBar(menubar);
        statusbar = new QStatusBar(calx);
        statusbar->setObjectName("statusbar");
        calx->setStatusBar(statusbar);

        menubar->addAction(menuCAlx->menuAction());

        retranslateUi(calx);

        QMetaObject::connectSlotsByName(calx);
    } // setupUi

    void retranslateUi(QMainWindow *calx)
    {
        calx->setWindowTitle(QCoreApplication::translate("calx", "calx", nullptr));
        outputLineEdit->setText(QString());
        zeroButton->setText(QCoreApplication::translate("calx", "0", nullptr));
        clearButton->setText(QCoreApplication::translate("calx", "C", nullptr));
        equalButton->setText(QCoreApplication::translate("calx", "=", nullptr));
        oneButton->setText(QCoreApplication::translate("calx", "1", nullptr));
        twoButton->setText(QCoreApplication::translate("calx", "2", nullptr));
        fiveButton->setText(QCoreApplication::translate("calx", "5", nullptr));
        sixButton->setText(QCoreApplication::translate("calx", "6", nullptr));
        fourButton->setText(QCoreApplication::translate("calx", "4", nullptr));
        threeButton->setText(QCoreApplication::translate("calx", "3", nullptr));
        nineButton->setText(QCoreApplication::translate("calx", "9", nullptr));
        sevenButton->setText(QCoreApplication::translate("calx", "7", nullptr));
        additionButton->setText(QCoreApplication::translate("calx", "+", nullptr));
        multiplyButton->setText(QCoreApplication::translate("calx", "*", nullptr));
        substractButton->setText(QCoreApplication::translate("calx", "-", nullptr));
        divideButton->setText(QCoreApplication::translate("calx", "/", nullptr));
        eightButton->setText(QCoreApplication::translate("calx", "8", nullptr));
        label->setText(QCoreApplication::translate("calx", "CalX", nullptr));
        menuCAlx->setTitle(QCoreApplication::translate("calx", "CAlx", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calx: public Ui_calx {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALX_H
