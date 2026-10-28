#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_1Iterative.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestCount)
		{
			const int size = 5;
			int test_b[size] = { -4, 2, -6, 0, 5 };

			int actual_count = Count(test_b, size);

			Assert::AreEqual(3, actual_count);
		}

		TEST_METHOD(TestSum)
		{
			const int size = 5;
			int test_b[size] = { -4, 2, -6, 0, 5 };

			int actual_sum = Sum(test_b, size);

			Assert::AreEqual(-10, actual_sum);
		}

		TEST_METHOD(TestZero)
		{
			const int size = 5;
			int test_b[size] = { -4, 2, -6, 0, 5 };

			Zero(test_b, size);

			Assert::AreEqual(0, test_b[0]);
			Assert::AreEqual(2, test_b[1]);
			Assert::AreEqual(0, test_b[2]);
			Assert::AreEqual(0, test_b[3]);
			Assert::AreEqual(5, test_b[4]);
		}

		TEST_METHOD(TestCountAndSumDoNotModifyArray)
		{
			const int size = 5;
			int test_b[size] = { -4, 2, -6, 0, 5 };

			Count(test_b, size);
			Sum(test_b, size);

			Assert::AreEqual(-4, test_b[0]);
			Assert::AreEqual(2, test_b[1]);
			Assert::AreEqual(-6, test_b[2]);
			Assert::AreEqual(0, test_b[3]);
			Assert::AreEqual(5, test_b[4]);
		}
	};
}