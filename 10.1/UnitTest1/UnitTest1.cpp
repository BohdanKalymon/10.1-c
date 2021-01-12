#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include "CppUnitTest.h"
#include "../10.1/Source.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int k = 6;
			char FileName[] = "C:\\User\\source\\repos\\10.1C\\UnitTest1\\t.txt";
			bool test = IsOrNot(FileName, k);
			Assert::AreEqual(test, true);

		}
	};
}

