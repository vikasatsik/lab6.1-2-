#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1(2)/lab6.1(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest612
{
	TEST_CLASS(UnitTest612)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 10;
			int r[n] = { 6,12,18,24,36,42,30,54,60,30 };

			int sum = 0;
			int count = 0;
			int exprectedSum = 0 + 12 + 18 + 24 + 36 + 42 + 30 + 54 + 0 + 30;

			Calculate(r, n, sum, count, 0);

			Assert::AreEqual(exprectedSum, sum);

		}
	};
}
