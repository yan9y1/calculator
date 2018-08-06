#include "Calculator.h"
#include "qdebug.h"
#include "qlabel.h"
#include "qpushbutton.h"
#include <cmath>

Calculator::Calculator(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	operators.push('#');
	setFixedSize(this->width(), this->height());

	//number and dot
	connect(ui.zeroButton, SIGNAL(clicked()), this, SLOT(numberZero()));
	connect(ui.oneButton, SIGNAL(clicked()), this, SLOT(numberOne()));
	connect(ui.twoButton, SIGNAL(clicked()), this, SLOT(numberTwo()));
	connect(ui.threeButton, SIGNAL(clicked()), this, SLOT(numberThree()));
	connect(ui.fourButton, SIGNAL(clicked()), this, SLOT(numberFour()));
	connect(ui.fiveButton, SIGNAL(clicked()), this, SLOT(numberFive()));
	connect(ui.sixButton, SIGNAL(clicked()), this, SLOT(numberSix()));
	connect(ui.sevenButton, SIGNAL(clicked()), this, SLOT(numberSeven()));
	connect(ui.eightButton, SIGNAL(clicked()), this, SLOT(numberEight()));
	connect(ui.nineButton, SIGNAL(clicked()), this, SLOT(numberNine()));
	connect(ui.dotButton, SIGNAL(clicked()), this, SLOT(dot()));
	
	//+-*=/
	connect(ui.plusButton, SIGNAL(clicked()), this, SLOT(plus()));
	connect(ui.minButton, SIGNAL(clicked()), this, SLOT(min()));
	connect(ui.mulButton, SIGNAL(clicked()), this, SLOT(multi()));
	connect(ui.divideButton, SIGNAL(clicked()), this, SLOT(divide()));
	connect(ui.equalButton, SIGNAL(clicked()), this, SLOT(dengyu()));

	// ^2 √ 1/x -
	connect(ui.sqareButton, SIGNAL(clicked()), this, SLOT(sqareButton()));
	connect(ui.sqrtButton, SIGNAL(clicked()), this, SLOT(sqrtButton()));
	connect(ui.reciprocalButton, SIGNAL(clicked()), this, SLOT(reciprocal()));
	connect(ui.negateButton, SIGNAL(clicked()), this, SLOT(negate()));

	//( )
	connect(ui.leftParentheseButton, SIGNAL(clicked()), this, SLOT(lbracket()));
	connect(ui.rightParentheseButton, SIGNAL(clicked()), this, SLOT(rbracket()));

	//c ->
	connect(ui.CButton, SIGNAL(clicked()), this, SLOT(clean()));
	connect(ui.backButton, SIGNAL(clicked()), this, SLOT(back()));
}

//when click the number button, append the number to input label
void Calculator::inputNumber(int num) {
	if (lastIsSinOpt || lastIsRBracket) return;
	QString nu;
	if (!lastIsNum || inputClean) nu = "";
	else nu = ui.inputLabel->text();
	QString s = QString::number(num,10);
	if (nu != "0") {
		nu.append(s);
		ui.inputLabel->setText(nu);
	}
	else {
		ui.inputLabel->setText(s);
	}
	lastIsNum = true;
	lastIsSinOpt = false;
	lastIsLBracket = false;
	lastIsRBracket = false;
	inputClean = false;
}

//when click the operator button, append the number to the expression label
void Calculator::inputOperators(QString opt) {
	QString ex;
	if (expClean) ex = "";
	else ex = ui.expressionLabel->text();
	if (lastIsSinOpt || lastIsRBracket) ex.append(opt);
	else {
		numberPush();
		QString number = ui.inputLabel->text();
		int pos = number.lastIndexOf('.');
		if (pos == number.length() - 1) number.remove(number.length() - 1, 1);
		ex.append(number);
		ex.append(opt);
	}
	ui.expressionLabel->setText(ex);
	lastIsNum = false;
	lastIsSinOpt = false;
	lastIsLBracket = (opt == '(' ? true : false);
	lastIsRBracket = (opt == ')' ? true : false);
	expClean = false;
}

void Calculator::inputSingleOpt(QString opt) {
	sinOptNum++;
	QString expression = ui.expressionLabel->text();
	if (lastIsNum) {
		numberPush();
		QString num = ui.inputLabel->text();
		index = expression.length();
		if (opt == "negate") {
			QString fushu = "(-";
			fushu.append(num);
			fushu.append(")");
			expression.append(fushu);
		}
		else {
			opt.append("(");
			opt.append(num);
			opt.append(")");
			expression.append(opt);
		}
		//ui.expressionLabel->setText(expression);
	}
	else {
		if (expression[index] == '(') {
			expression.insert(index, opt);
		}
		else {
			opt.append("(");
			expression.insert(index, opt);
			expression.append(")");
			//ui.expressionLabel->setText(expression);
		}
	}
	ui.expressionLabel->setText(expression);
	lastIsNum = false;
	lastIsSinOpt = true;
	lastIsLBracket = false;
	lastIsRBracket = false;
}

void Calculator::dot() {
	QString nu = ui.inputLabel->text();
	QStringList list = nu.split('.');
	if (list.size() == 1) {
		nu.append(".");
		ui.inputLabel->setText(nu);
	}
}

void Calculator::numberZero() {
	inputNumber(0);
}

void Calculator::numberOne() {
	inputNumber(1);
}

void Calculator::numberTwo() {
	inputNumber(2);
}

void Calculator::numberThree() {
	inputNumber(3);
}

void Calculator::numberFour() {
	inputNumber(4);
}

void Calculator::numberFive() {
	inputNumber(5);
}

void Calculator::numberSix() {
	inputNumber(6);
}

void Calculator::numberSeven() {
	inputNumber(7);
}

void Calculator::numberEight() {
	inputNumber(8);
}

void Calculator::numberNine() {
	inputNumber(9);
}

//when click the operator button, push the input number into the operands stack
void Calculator::numberPush() {
	QString str_number = ui.inputLabel->text();
	double double_number = str_number.toDouble();
	operands.push(double_number);
}

//operand priority
int Calculator::optPriority(char opt) {
	if (opt == '#') return -1;
	if (opt == '(') return 0;
	if (opt == '+' || opt == '-') return 1;
	if (opt == '*' || opt == '/') return 2;
}

//calculate
double Calculator::calculateExp(double num1, double num2, char opt) {
	switch (opt) {
	case '+':
		return num1 + num2;
		break;
	case '-':
		return num1 - num2;
		break;
	case '*':
		return num1 * num2;
		break;
	case '/':
		return num1 / num2;
		break;
	}
}

void Calculator::singalOptPush(char opt) {
	double number = operands.pop();
	bool flag = false;
	if (opt == '^') number *= number;
	else if (opt == '[') {
		if (number < 0) {
			flag = true;
			initialize();
			inputClean = true;
			expClean = true;
		}
		else {
			number = sqrt(number);
		}
	}
	else if (opt == ']') {
		if (number == 0) {
			flag = true;
			initialize();
			inputClean = true;
			expClean = true;
		}
		else {
			number = 1 / number;
		}
	}
	else if (opt == '~') number = 0 - number;

	if(flag) ui.inputLabel->setText(tr("Invalid input"));
	else {
		operands.push(number);
		ui.inputLabel->setNum(number);
	}
}

//when click the operand button
void Calculator::operatorPush(char opt) {
	if (opt == '^' || opt == '[' || opt == ']' || opt == '~') singalOptPush(opt);
	else if (opt == '(') operators.push('(');
	else if (opt == ')') {
		while (operators.top() != '(') {
			char optTop = operators.pop();
			double num2 = operands.pop();
			double num1 = operands.pop();
			double result = calculateExp(num1, num2, optTop);
			operands.push(result);
		}
		operators.pop();
		ui.inputLabel->setNum(operands.top());
		lBracketNum--;
	}
	else {
		bool flag = false;
		while (optPriority(opt) <= optPriority(operators.top())) {
			char optTop = operators.pop();
			double num2 = operands.pop();
			double num1 = operands.pop();
			if (optTop == '/' && num2 == 0) {
				initialize();
				inputClean = true;
				expClean = true;
				flag = true;
				break;
			}
			double result = calculateExp(num1, num2, optTop);
			operands.push(result);
		}
		if (flag) {
			ui.inputLabel->setText(tr("the number can't be divided by 0"));
		}
		else {
			double operandTop = operands.top();
			ui.inputLabel->setNum(operandTop);
			operators.push(opt);
		}
	}
}

void Calculator::plus() {
	if (lastIsNum || lastIsSinOpt || lastIsRBracket) {
		inputOperators("+");
		operatorPush('+');
	}
}

void Calculator::min() {
	if (lastIsNum || lastIsSinOpt || lastIsRBracket) {
		inputOperators("-");
		operatorPush('-');
	}
}

void Calculator::multi() {
	if (lastIsNum || lastIsSinOpt || lastIsRBracket) {
		inputOperators("*");
		operatorPush('*');
	}
}

void Calculator::divide() {
	if (lastIsNum || lastIsSinOpt || lastIsRBracket) {
		inputOperators("/");
		operatorPush('/');
	}
}

void Calculator::sqareButton() {
	if (lastIsNum || lastIsSinOpt || lastIsRBracket) {
		inputSingleOpt("sqare");
		operatorPush('^');
	}
}

void Calculator::sqrtButton() {
	if (lastIsNum || lastIsSinOpt || lastIsRBracket) {
		inputSingleOpt("sqrt");
		operatorPush('[');
	}
}

void Calculator::reciprocal() {
	if (lastIsNum || lastIsSinOpt || lastIsRBracket) {
		inputSingleOpt("1/");
		operatorPush(']');
	}
}

void Calculator::negate() {
	if (lastIsNum || lastIsSinOpt || lastIsRBracket) {
		inputSingleOpt("negate");
		operatorPush('~');
	}
}

void Calculator::dengyu() {
	ui.expressionLabel->setText("");
	if (lBracketNum != 0 || ((!lastIsNum) && (!lastIsRBracket) && (!lastIsSinOpt))) return;
	if(lastIsNum) numberPush();	
	bool flag = false;
	while (operators.top() != '#') {
		char optTop = operators.pop();
		double num2 = operands.pop();
		double num1 = operands.pop();
		if (optTop == '/' && num2 == 0) {
			initialize();
			inputClean = true;
			expClean = true;
			flag = true;
			break;
		}
		double result = calculateExp(num1, num2, optTop);
		operands.push(result);
	}
	if (flag) {
		ui.inputLabel->setText("The number can't be divided by 0");
	}
	else {
		ui.inputLabel->setNum(operands.pop());
	}
	inputClean = true;
}

//the last input must be not the right bracket and the singleopt. or is a lbracket
void Calculator::lbracket() {
	if ((!lastIsRBracket && !lastIsSinOpt) || (lastIsLBracket)) {
		QString exp = ui.expressionLabel->text();
		index = exp.length();
		exp.append("(");
		ui.expressionLabel->setText(exp);
		operatorPush('(');
	}
	lBracketNum++;
}

void Calculator::rbracket() {
	if ((lBracketNum) && (lastIsRBracket || lastIsNum ||lastIsSinOpt)) {
		QString s = ui.expressionLabel->text();
		int count = 0;
		int lcount = 0;
		for (int i = s.length() - 1; i >= 0; i--) {
			if (s[i] == '(') {
				if (count == 0) break;
				else {
					lcount++;
					count--;
				}
			}
			if (s[i] == ')') count++;
		}
		int t =  s.count('(') - lcount - 1;
		int iidex = 0;
		for (int i = 0; i < t; i++) {
			iidex = s.indexOf("(", iidex) + 1;
		}
		index = s.indexOf("(", iidex);
		inputOperators(")");
		operatorPush(')');
	}
}

void Calculator::initialize() {
	while (!operands.isEmpty()) {
		operands.pop();
	}
	while (operators.top() != '#') {
		operators.pop();
	}
	lastIsNum = true;
	lastIsSinOpt = false;
	lastIsLBracket = false;
	lastIsRBracket = false;
	lBracketNum = 0;
}

void Calculator::clean() {
	ui.expressionLabel->clear();
	ui.inputLabel->setText("0");
	initialize();
	inputClean = false;
	expClean = false;
}

void Calculator::back() {
	QString s = ui.inputLabel->text();
	if (s.length() == 1) ui.inputLabel->setText("0");
	else {
		s.remove(s.length() - 1, 1);
		ui.inputLabel->setText(s);
	}
}