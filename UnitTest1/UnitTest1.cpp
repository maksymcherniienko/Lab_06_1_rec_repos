#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_1/Lab_06_1_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 10;
			int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
			int S = 55;

			int result = Sum(a, n, 0);

			Assert::AreEqual(Sum(a, n, 0), S, 1e-1);
		}
	};
}
