#include <circle.h>
#include <composed_object.h>
#include <graphical_object.h>
#include <line.h>
#include <point.h>
#include <primitive.h>
#include <triangle.h>
#include <gtest/gtest.h>
//include <gmock/gmock.h>
#include <iostream>
#include <sstream>

TEST(tests, test1) {
    graphical_object obj1();
    graphical_object obj2(obj1);
    EXPECT_EQ(obj1, obj2);
}

TEST(tests, test2) {
    composed_object obj3();
    composed_object obj4();
    graphical_object obj5();
    obj3.add(&obj5);
    obj4.add(&obj5);
    EXPECT_EQ(obj3, obj4);
}
