/********************************************************************************
** Form generated from reading UI file 'Calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorClass
{
public:
    QWidget *centralWidget;
    QPushButton *leftParentheseButton;
    QPushButton *sqrtButton;
    QPushButton *sqareButton;
    QPushButton *reciprocalButton;
    QPushButton *rightParentheseButton;
    QPushButton *CButton;
    QPushButton *backButton;
    QPushButton *divideButton;
    QPushButton *sevenButton;
    QPushButton *eightButton;
    QPushButton *nineButton;
    QPushButton *mulButton;
    QPushButton *fourButton;
    QPushButton *fiveButton;
    QPushButton *sixButton;
    QPushButton *minButton;
    QPushButton *oneButton;
    QPushButton *twoButton;
    QPushButton *threeButton;
    QPushButton *plusButton;
    QPushButton *negateButton;
    QPushButton *zeroButton;
    QPushButton *dotButton;
    QPushButton *equalButton;
    QLabel *expressionLabel;
    QLabel *inputLabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CalculatorClass)
    {
        if (CalculatorClass->objectName().isEmpty())
            CalculatorClass->setObjectName(QStringLiteral("CalculatorClass"));
        CalculatorClass->resize(453, 573);
        centralWidget = new QWidget(CalculatorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        leftParentheseButton = new QPushButton(centralWidget);
        leftParentheseButton->setObjectName(QStringLiteral("leftParentheseButton"));
        leftParentheseButton->setGeometry(QRect(10, 150, 101, 51));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        leftParentheseButton->setFont(font);
        sqrtButton = new QPushButton(centralWidget);
        sqrtButton->setObjectName(QStringLiteral("sqrtButton"));
        sqrtButton->setGeometry(QRect(120, 150, 101, 51));
        sqrtButton->setFont(font);
        sqareButton = new QPushButton(centralWidget);
        sqareButton->setObjectName(QStringLiteral("sqareButton"));
        sqareButton->setGeometry(QRect(230, 150, 101, 51));
        sqareButton->setFont(font);
        reciprocalButton = new QPushButton(centralWidget);
        reciprocalButton->setObjectName(QStringLiteral("reciprocalButton"));
        reciprocalButton->setGeometry(QRect(340, 150, 101, 51));
        reciprocalButton->setFont(font);
        rightParentheseButton = new QPushButton(centralWidget);
        rightParentheseButton->setObjectName(QStringLiteral("rightParentheseButton"));
        rightParentheseButton->setGeometry(QRect(10, 210, 101, 51));
        rightParentheseButton->setFont(font);
        CButton = new QPushButton(centralWidget);
        CButton->setObjectName(QStringLiteral("CButton"));
        CButton->setGeometry(QRect(120, 210, 101, 51));
        CButton->setFont(font);
        backButton = new QPushButton(centralWidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(230, 210, 101, 51));
        backButton->setFont(font);
        divideButton = new QPushButton(centralWidget);
        divideButton->setObjectName(QStringLiteral("divideButton"));
        divideButton->setGeometry(QRect(340, 210, 101, 51));
        divideButton->setFont(font);
        sevenButton = new QPushButton(centralWidget);
        sevenButton->setObjectName(QStringLiteral("sevenButton"));
        sevenButton->setGeometry(QRect(10, 270, 101, 51));
        sevenButton->setFont(font);
        eightButton = new QPushButton(centralWidget);
        eightButton->setObjectName(QStringLiteral("eightButton"));
        eightButton->setGeometry(QRect(120, 270, 101, 51));
        eightButton->setFont(font);
        nineButton = new QPushButton(centralWidget);
        nineButton->setObjectName(QStringLiteral("nineButton"));
        nineButton->setGeometry(QRect(230, 270, 101, 51));
        nineButton->setFont(font);
        mulButton = new QPushButton(centralWidget);
        mulButton->setObjectName(QStringLiteral("mulButton"));
        mulButton->setGeometry(QRect(340, 270, 101, 51));
        mulButton->setFont(font);
        fourButton = new QPushButton(centralWidget);
        fourButton->setObjectName(QStringLiteral("fourButton"));
        fourButton->setGeometry(QRect(10, 330, 101, 51));
        fourButton->setFont(font);
        fiveButton = new QPushButton(centralWidget);
        fiveButton->setObjectName(QStringLiteral("fiveButton"));
        fiveButton->setGeometry(QRect(120, 330, 101, 51));
        fiveButton->setFont(font);
        sixButton = new QPushButton(centralWidget);
        sixButton->setObjectName(QStringLiteral("sixButton"));
        sixButton->setGeometry(QRect(230, 330, 101, 51));
        sixButton->setFont(font);
        minButton = new QPushButton(centralWidget);
        minButton->setObjectName(QStringLiteral("minButton"));
        minButton->setGeometry(QRect(340, 330, 101, 51));
        minButton->setFont(font);
        oneButton = new QPushButton(centralWidget);
        oneButton->setObjectName(QStringLiteral("oneButton"));
        oneButton->setGeometry(QRect(10, 390, 101, 51));
        oneButton->setFont(font);
        twoButton = new QPushButton(centralWidget);
        twoButton->setObjectName(QStringLiteral("twoButton"));
        twoButton->setGeometry(QRect(120, 390, 101, 51));
        twoButton->setFont(font);
        threeButton = new QPushButton(centralWidget);
        threeButton->setObjectName(QStringLiteral("threeButton"));
        threeButton->setGeometry(QRect(230, 390, 101, 51));
        threeButton->setFont(font);
        plusButton = new QPushButton(centralWidget);
        plusButton->setObjectName(QStringLiteral("plusButton"));
        plusButton->setGeometry(QRect(340, 390, 101, 51));
        plusButton->setFont(font);
        negateButton = new QPushButton(centralWidget);
        negateButton->setObjectName(QStringLiteral("negateButton"));
        negateButton->setGeometry(QRect(10, 450, 101, 51));
        negateButton->setFont(font);
        zeroButton = new QPushButton(centralWidget);
        zeroButton->setObjectName(QStringLiteral("zeroButton"));
        zeroButton->setGeometry(QRect(120, 450, 101, 51));
        zeroButton->setFont(font);
        dotButton = new QPushButton(centralWidget);
        dotButton->setObjectName(QStringLiteral("dotButton"));
        dotButton->setGeometry(QRect(230, 450, 101, 51));
        dotButton->setFont(font);
        equalButton = new QPushButton(centralWidget);
        equalButton->setObjectName(QStringLiteral("equalButton"));
        equalButton->setGeometry(QRect(340, 450, 101, 51));
        equalButton->setFont(font);
        expressionLabel = new QLabel(centralWidget);
        expressionLabel->setObjectName(QStringLiteral("expressionLabel"));
        expressionLabel->setGeometry(QRect(10, 20, 431, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(10);
        expressionLabel->setFont(font1);
        expressionLabel->setContextMenuPolicy(Qt::NoContextMenu);
        expressionLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        inputLabel = new QLabel(centralWidget);
        inputLabel->setObjectName(QStringLiteral("inputLabel"));
        inputLabel->setGeometry(QRect(10, 70, 431, 61));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(16);
        inputLabel->setFont(font2);
        inputLabel->setLayoutDirection(Qt::RightToLeft);
        inputLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        CalculatorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CalculatorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 453, 26));
        CalculatorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CalculatorClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CalculatorClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CalculatorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CalculatorClass->setStatusBar(statusBar);

        retranslateUi(CalculatorClass);

        QMetaObject::connectSlotsByName(CalculatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *CalculatorClass)
    {
        CalculatorClass->setWindowTitle(QApplication::translate("CalculatorClass", "Calculator", Q_NULLPTR));
        leftParentheseButton->setText(QApplication::translate("CalculatorClass", "(", Q_NULLPTR));
        sqrtButton->setText(QApplication::translate("CalculatorClass", "sqrt", Q_NULLPTR));
        sqareButton->setText(QApplication::translate("CalculatorClass", "sqare", Q_NULLPTR));
        reciprocalButton->setText(QApplication::translate("CalculatorClass", "1/x", Q_NULLPTR));
        rightParentheseButton->setText(QApplication::translate("CalculatorClass", ")", Q_NULLPTR));
        CButton->setText(QApplication::translate("CalculatorClass", "C", Q_NULLPTR));
        backButton->setText(QApplication::translate("CalculatorClass", "<-", Q_NULLPTR));
        divideButton->setText(QApplication::translate("CalculatorClass", "\303\267", Q_NULLPTR));
        sevenButton->setText(QApplication::translate("CalculatorClass", "7", Q_NULLPTR));
        eightButton->setText(QApplication::translate("CalculatorClass", "8", Q_NULLPTR));
        nineButton->setText(QApplication::translate("CalculatorClass", "9", Q_NULLPTR));
        mulButton->setText(QApplication::translate("CalculatorClass", "\303\227", Q_NULLPTR));
        fourButton->setText(QApplication::translate("CalculatorClass", "4", Q_NULLPTR));
        fiveButton->setText(QApplication::translate("CalculatorClass", "5", Q_NULLPTR));
        sixButton->setText(QApplication::translate("CalculatorClass", "6", Q_NULLPTR));
        minButton->setText(QApplication::translate("CalculatorClass", "-", Q_NULLPTR));
        oneButton->setText(QApplication::translate("CalculatorClass", "1", Q_NULLPTR));
        twoButton->setText(QApplication::translate("CalculatorClass", "2", Q_NULLPTR));
        threeButton->setText(QApplication::translate("CalculatorClass", "3", Q_NULLPTR));
        plusButton->setText(QApplication::translate("CalculatorClass", "+", Q_NULLPTR));
        negateButton->setText(QApplication::translate("CalculatorClass", "\302\261", Q_NULLPTR));
        zeroButton->setText(QApplication::translate("CalculatorClass", "0", Q_NULLPTR));
        dotButton->setText(QApplication::translate("CalculatorClass", ".", Q_NULLPTR));
        equalButton->setText(QApplication::translate("CalculatorClass", "=", Q_NULLPTR));
        expressionLabel->setText(QString());
        inputLabel->setText(QApplication::translate("CalculatorClass", "0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CalculatorClass: public Ui_CalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
