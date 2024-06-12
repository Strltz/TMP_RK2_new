#include <circle.h>
#include <composed_object.h>
#include <graphical_object.h>
#include <line.h>
#include <point.h>
#include <primitive.h>
#include <triangle.h>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <iostream>
#include <sstream>

TEST(tests, test1) {
    composed_object obj1;
    composed_object obj2(obj1);
    for (size_t i = 0; i < obj.
    EXPECT_EQ(obj1, obj2);
}

TEST(tests, test2) {
    composed_object obj3;
    composed_object obj4;
    line obj5;
    obj3.add(obj5);
    obj4.add(obj5);
    EXPECT_EQ(obj3, obj4);
}

TEST(tests, test3) {
    composed_object obj1;
    triangle obj2;
    line obj3;
    int a = obj1.components_vec().size()2;
    obj1.add(obj2);
    obj1.add(obj3);
    int b = obj1.size_of_components_vec().size();
    EXPECT_EQ(a + 2, b);
}
