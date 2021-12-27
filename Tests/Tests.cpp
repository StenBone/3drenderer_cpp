#include "pch.h"
#include "CppUnitTest.h"
#include "ExampleTest.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{
	TEST_CLASS(Tests)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(return_one(), 1);
		}
	};
}
