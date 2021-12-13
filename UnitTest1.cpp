#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab13.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 3;
			int z = 6;
			int tmp = SQR(x, z);
			Assert::IsTrue(tmp == 9);

		}
	};
}
