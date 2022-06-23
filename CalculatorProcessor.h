#pragma once
#include <string>
#include "IBaseCommand.h"
#include "Main.h"
#include <vector>
class CalculatorProcessor
{
private:
	static CalculatorProcessor* _processor;
	int num1;
	std::vector <IBaseCommand*> temp;
	CalculatorProcessor() {}

public:
	static CalculatorProcessor* GetInstance() {
		if (_processor == nullptr) {
			_processor = new CalculatorProcessor();
		}
		return _processor;
	}

	void SetBaseNum(int num) {
		num1 = num;
	}
	int GetBaseNum() {
		return num1;
	}

	CalculatorProcessor(CalculatorProcessor& other) = delete;
	void operator=(const CalculatorProcessor& other) = delete;

	std::string GetDecimal() {
		return std::to_string(num1);
	}

	std::string GetHexadecimal() {
		std::string Hex = "";
		int temp = num1;
		while (temp > 0) {
			int mod = temp % 16;
			if (mod < 10) {
				Hex = std::to_string(mod) + Hex;
			}
			else {
				if (mod == 10) {
					Hex += "A";
				}
				else if (mod == 11) {
					Hex += "B";
				}
				else if (mod == 12) {
					Hex += "C";
				}
				else if (mod == 13) {
					Hex += "D";
				}
				else if (mod == 14) {
					Hex += "E";
				}
				else if (mod == 15) {
					Hex += "F";
				}
			}
			temp /= 16;
		}
		Hex = "0x" + Hex;

		return Hex;
	}

	std::string GetBinary() {
		std::string results = " ";
		int temp = num1;
		for (int i = 0; i < 32; i++)
		{
			if (temp % 2 == 0)
			{
				results = "0" + results;
			}
			else {
				results = "1" + results;
			}

			temp = temp / 2;

		}

		return results;
	}

	void Multiply(int num) {
		MultCommand* mult = new MultCommand(num1, num);
		temp.push_back(mult);
		num1 = mult->Execute();
	}
	void Divide(int num) {
		DivCommand* div = new DivCommand(num1, num);
		temp.push_back(div);
		num1 = div->Execute();
	}
	void Modulus(int num) {
		ModCommand* mod = new ModCommand(num1, num);
		temp.push_back(mod);
		num1 = mod->Execute();
	}
	void Add(int num) {
		AddCommand* add = new AddCommand(num1, num);
		temp.push_back(add);
		num1 = add->Execute();
	}
	void Subtract(int num) {
		SubCommand* sub = new SubCommand(num1, num);
		temp.push_back(sub);
		num1 = sub->Execute();
	}
};

CalculatorProcessor* CalculatorProcessor::_processor = nullptr;

