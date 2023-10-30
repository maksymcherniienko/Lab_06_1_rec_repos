#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_1/Lab_06_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 22;
			int a[n];
			int S = Sum(a, n, 0);

			Assert::AreEqual(Sum(a, n, 0), S, 1e-1);
		}
	};
}
