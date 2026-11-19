#include "pch.h"
#include "CppUnitTest.h"

#include "../../calculator.hpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TS_1)
		{
			Assert::AreEqual(90, Sum(85, 5), 1e-9);
		}
		TEST_METHOD(TS_2)
		{
			Assert::AreEqual(33, Sum(76, -43), 1e-9);
		}
		TEST_METHOD(TS_3)
		{
			Assert::AreEqual(-25, Sum(-3, -22), 1e-9);
		}
		TEST_METHOD(TS_4)
		{
			Assert::AreEqual(24, Sum(0, 24), 1e-9);
		}
		TEST_METHOD(TS_5)
		{
			Assert::AreEqual(0, Sum(0, 0), 1e-9);
		}
		TEST_METHOD(TS_6)
		{
			Assert::AreEqual(7, Minus(7, 0), 1e-9);
		}
		TEST_METHOD(TS_7)
		{
			Assert::AreEqual(-15, Minus(10, 25), 1e-9);
		}
		TEST_METHOD(TS_8)
		{
			Assert::AreEqual(10, Minus(20, 10), 1e-9);
		}
		TEST_METHOD(TS_9)
		{
			Assert::AreEqual(0, multip(0, 6), 1e-9);
		}
		TEST_METHOD(TS_10)
		{
			Assert::AreEqual(12, multip(3, 4), 1e-9);
		}
		TEST_METHOD(TS_11)
		{
			Assert::AreEqual(-10, multip(2, -5), 1e-9);
		}
		TEST_METHOD(TS_12)
		{
			Assert::AreEqual(30, multip(-6, -5), 1e-9);
		}
		TEST_METHOD(TS_13)
		{
			Assert::AreEqual(1.275, multip(2.55, 0.5), 1e-9);
		}
		TEST_METHOD(TS_14)
		{
			Assert::AreEqual(13.25, multip(2.65, 5.0), 1e-9);
		}
		TEST_METHOD(TS_15)
		{
			Assert::AreEqual(3.0, divide(9.0, 3.0), 1e-9);
		}
		TEST_METHOD(TS_16)
		{
			Assert::AreEqual(3.5, divide(7.0, 2.0), 1e-9);
		}
		TEST_METHOD(TS_17)
		{
			Assert::AreEqual(0.0, divide(0.0, 6.0), 1e-9);
		}
		TEST_METHOD(TS_18)
		{
			Assert::ExpectException<std::invalid_argument>([]() {
				divide(1.0, 0.0);
				});
		}
		TEST_METHOD(TS_19)
		{
			Assert::AreEqual(-4.0, divide(-16.0, 4.0), 1e-9);
		}
	};
}
