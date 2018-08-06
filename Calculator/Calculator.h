#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Calculator.h"
#include "qstack.h"

class Calculator : public QMainWindow
{
	Q_OBJECT

public:
	Calculator(QWidget *parent = Q_NULLPTR);

private:
	Ui::CalculatorClass ui;
	void inputNumber(int);
	void inputOperators(QString);
	void inputSingleOpt(QString);
	void numberPush();
	void operatorPush(char);
	void singalOptPush(char);
	int optPriority(char);
	void initialize();
	double calculateExp(double, double, char);
	bool lastIsNum = true;
	bool lastIsSinOpt = false;
	bool lastIsLBracket = false;
	bool lastIsRBracket = false;
	bool expClean = false;
	bool inputClean = false;
	bool dotExit = false;
	int lBracketNum = 0;
	/*int lindex = -1;*/
	int sinOptNum = 0;
	int index = 0;
	QStack <double> operands;
	QStack <char> operators;

private slots:
	//0~9
	void numberZero();
	void numberOne();
	void numberTwo();
	void numberThree();
	void numberFour();
	void numberFive();
	void numberSix();
	void numberSeven();
	void numberEight();
	void numberNine();
	//. + - * / =
	void dot();
	void plus();
	void min();
	void multi();
	void divide();
	void dengyu();
	//sqare sqrt 1/x -
	void sqareButton();
	void sqrtButton();
	void reciprocal();
	void negate();
	//()
	void lbracket();
	void rbracket();
	//C ->
	void clean();
	void back();
};
