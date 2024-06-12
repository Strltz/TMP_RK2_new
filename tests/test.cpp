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
    line obj5();
    obj3.add(&obj5);
    obj4.add(&obj5);
    EXPECT_EQ(obj3, obj4);
}

TEST(tests, test3) {
    composed_object obj1();
    triangle obj2();
    line obj3();
    size_t a = obj1.size_of_components_vec() + 2;
    obj1.add(&obj2);
    obj1.add(&obj3);
    size_t b = obj1.size_of_components_vec();
    EXPECT_EQ(a, b);
}
