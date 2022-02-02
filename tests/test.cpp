#include <iostream>

#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

using namespace std;

TEST(ConstructorTest, NoParameters_WidthCheck){
        Rectangle a;
        EXPECT_EQ(1, a.get_width());
}

TEST(ConstructorTest, NoParameters_HeightCheck){
	Rectangle a;
	EXPECT_EQ(1, a.get_height());
}

TEST(ConstructorTest, WithParameters){
        Rectangle a(3, 5);
	EXPECT_EQ(3, a.get_width());
        EXPECT_EQ(5, a.get_height());
}

TEST(PerimeterTest, CorrectPerimeter){
        Rectangle a(3, 5);
        EXPECT_EQ(16, a.perimeter());
}

TEST(AreaTest, CorrectArea){
        Rectangle a(3, 5);
        EXPECT_EQ(15, a.area());
}

int main(int argc, char *argv[]){
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

