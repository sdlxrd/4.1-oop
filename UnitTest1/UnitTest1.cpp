#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Misha\source\repos\4.1 oop\4.1 oop\Complex.cpp"
#include "C:\Users\Misha\source\repos\4.1 oop\4.1 oop\Sum.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Complex a(2, 4, 6, 8);
			double c = a.sum();
			Assert::AreEqual(c, 8.);
		}
	};
}

