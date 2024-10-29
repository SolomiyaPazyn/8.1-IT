#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 8.1 IT.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool R = Search("TESTQQQ");
			Assert::AreEqual(false, R);
		}
	};
}
