#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05.1/Lab_05.1.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMCalculation)
		{
			double t = 1.0;
			double s = 2.0;
			double M = (f(1, t * t, s) + f(t, s * s, 1)) / (1 + (f(1, t * s, 1) * f(1, t * s, 1)));
			double expectedM = 0.166462;
			Assert::AreEqual(M, expectedM, 0.0001);
		}
	};
}
