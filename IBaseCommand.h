#pragma once
#include "CalculatorProcessor.h"
class IBaseCommand {
	virtual int Execute() = 0;

};

//addition class
class AddCommand : public IBaseCommand {
private:
	int num1;
	int num2;
public:
	AddCommand(int _num1, int _num2) {
		num1 = _num1;
		num2 = _num2; 
	}
	int Execute() {
		return num1 + num2;
	}

};

//subtraction class
class SubCommand : public IBaseCommand {
private:
	int num1;
	int num2;
public:
	SubCommand(int _num1, int _num2) {
		num1 = _num1;
		num2 = _num2;
	}
	int Execute() {
		return num1 - num2;
	}
};

//multiplication class
class MultCommand : public IBaseCommand {
private:
	int num1;
	int num2;
public:
	MultCommand(int _num1, int _num2) {
		num1 = _num1;
		num2 = _num2;
	}
	int Execute() {
		return num1 * num2;
	}
};

//division class
class DivCommand : public IBaseCommand {
private:
	int num1;
	int num2;
public:
	DivCommand(int _num1, int _num2) {
		num1 = _num1;
		num2 = _num2;
	}
	int Execute() {
		return num1 / num2;
	}
};

//modulus class
class ModCommand : public IBaseCommand {
private:
	int num1;
	int num2;
public:
	ModCommand(int _num1, int _num2) {
		num1 = _num1;
		num2 = _num2;
	}
	int Execute() {
		return num1 % num2;
	}
};