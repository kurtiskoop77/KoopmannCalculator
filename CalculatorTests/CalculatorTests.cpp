#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\kurti\Desktop\Coding\Software Engineering\Labs\Calculator\ButtonFactory.h"
#include "C:\Users\kurti\Desktop\Coding\Software Engineering\Labs\Calculator\CalculatorProcessor.h"
#include "wx/wx.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorTests
{
	TEST_CLASS(CalculatorTests)
	{
	public:
		//IBaseCommand Tests
		TEST_METHOD(AddTwoPlusTwoEqualFour)
		{
			AddCommand* add = new AddCommand(2, 2);
			int ans = add->Execute();
			Assert::AreEqual(ans, 4);
		}
		TEST_METHOD(TwoPlusTwoNotEqualFive)
		{
			AddCommand* add = new AddCommand(2, 2);
			int ans = add->Execute();
			Assert::AreNotEqual(ans, 5);
		}
		TEST_METHOD(TenTimesTenEqualHundred)
		{
			MultCommand* mult = new MultCommand(10, 10);
			int ans = mult->Execute();
			Assert::AreEqual(ans, 100);
		}
		TEST_METHOD(TenDivFiveEqualTwo)
		{
			DivCommand* div = new DivCommand(10, 5);
			int ans = div->Execute();
			Assert::AreEqual(ans, 2);
		}
		TEST_METHOD(TenSubThreeEqualSeven)
		{
			SubCommand* sub = new SubCommand(10, 3);
			int ans = sub->Execute();
			Assert::AreEqual(ans, 7);
		}
		TEST_METHOD(FiftyTimesTwoEqualHundred)
		{
			MultCommand* mult = new MultCommand(50, 2);
			int ans = mult->Execute();
			Assert::AreEqual(ans, 100);
		}
		TEST_METHOD(TenAddEightEqualEighteen)
		{
			AddCommand* add = new AddCommand(10, 8);
			int ans = add->Execute();
			Assert::AreEqual(ans, 18);
		}
		TEST_METHOD(HundredDivTenEqualTen)
		{
			DivCommand* div = new DivCommand(100, 10);
			int ans = div->Execute();
			Assert::AreEqual(ans, 10);
		}
		TEST_METHOD(TenTimesTenNotEighty)
		{
			MultCommand* mult = new MultCommand(10, 10);
			int ans = mult->Execute();
			Assert::AreNotEqual(ans, 80);
		}
		TEST_METHOD(EightSubThreeEqualFive)
		{
			SubCommand* sub = new SubCommand(8, 3);
			int ans = sub->Execute();
			Assert::AreEqual(ans, 5);
		}

		//CalculatorProcessor Tests
		TEST_METHOD(EightAddThirtyEqualThrityEight)
		{
			CalculatorProcessor* temp = CalculatorProcessor::GetInstance();
			temp->SetBaseNum(30);
			temp->Add(8);
			int ans = temp->GetBaseNum();
			Assert::AreEqual(ans, 38);
		}
		TEST_METHOD(TwelveSubNineEqualThree)
		{
			CalculatorProcessor* temp = CalculatorProcessor::GetInstance();
			temp->SetBaseNum(12);
			temp->Subtract(9);
			int ans = temp->GetBaseNum();
			Assert::AreEqual(ans, 3);
		}
		TEST_METHOD(NineAddNineNotEqualTwenty)
		{
			CalculatorProcessor* temp = CalculatorProcessor::GetInstance();
			temp->SetBaseNum(9);
			temp->Add(9);
			int ans = temp->GetBaseNum();
			Assert::AreNotEqual(ans, 20);
		}
		TEST_METHOD(ThreeTimesSevenEqualTwentyOne)
		{
			CalculatorProcessor* temp = CalculatorProcessor::GetInstance();
			temp->SetBaseNum(3);
			temp->Multiply(7);
			int ans = temp->GetBaseNum();
			Assert::AreEqual(ans, 21);
		}
		TEST_METHOD(TwelveSubThirteenEqualNegOne)
		{
			CalculatorProcessor* temp = CalculatorProcessor::GetInstance();
			temp->SetBaseNum(12);
			temp->Subtract(13);
			int ans = temp->GetBaseNum();
			Assert::AreEqual(ans, -1);
		}
		TEST_METHOD(OnePlusEightyNotEqualSeventy)
		{
			CalculatorProcessor* temp = CalculatorProcessor::GetInstance();
			temp->SetBaseNum(1);
			temp->Add(80);
			int ans = temp->GetBaseNum();
			Assert::AreNotEqual(ans, 70);
		}
		TEST_METHOD(TwelveToBinary)
		{
			CalculatorProcessor* temp = CalculatorProcessor::GetInstance();
			temp->SetBaseNum(12);
			wxString str = temp->GetBinary();
			int ans = wxAtoi(str);
			Assert::AreEqual(ans, 1100);
		}
		TEST_METHOD(TwoToBinary)
		{
			CalculatorProcessor* temp = CalculatorProcessor::GetInstance();
			temp->SetBaseNum(2);
			wxString str = temp->GetBinary();
			int ans = wxAtoi(str);
			Assert::AreEqual(ans, 10);
		}
		TEST_METHOD(TwelveToHex)
		{
			CalculatorProcessor* temp = CalculatorProcessor::GetInstance();
			temp->SetBaseNum(12);
			wxString str = temp->GetHexadecimal();
			int ans = wxAtoi(str);
			bool istrue = false;
			if (str == "0xC") {
				istrue = true;
				Assert::IsTrue(istrue);
			}
			else {
				Assert::IsTrue(istrue);
			}
		}
		TEST_METHOD(OneThousandTwoHunderedThrityFourToHex)
		{
			CalculatorProcessor* temp = CalculatorProcessor::GetInstance();
			temp->SetBaseNum(1234);
			wxString str = temp->GetHexadecimal();
			int ans = wxAtoi(str);
			bool istrue = false;
			if (str == "0x42D") {
				istrue = true;
				Assert::IsTrue(istrue);
			}
			else {
				Assert::IsTrue(istrue);
			}
		}
	};
}
