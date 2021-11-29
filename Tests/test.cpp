#include "pch.h"
#include "../Main/ExampleTest.hpp"

/**
"If a component is hard to test, it is not properly designed. 
If a component is easy to test, it is a good indication that it is properly designed.
If a component is properly designed, it is easy to test." - Oleg Rabaev on CppCast
https://cppcast.com/testing-oleg-rabaev/
*/


TEST(ExampleTestCase, ExampleTest) {
	EXPECT_EQ(return_one(), 1);
}