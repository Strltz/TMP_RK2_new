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
    line obj2;
    int a = obj1.get_components().size();
    obj1.add(obj2);
    bool tr = obj1.get_components().size() == a + 1;
    EXPECT_TRUE(tr);
}

TEST(tests, test2) {
    composed_object obj1;
    composed_object obj2;
    point obj3;
    line obj4;
    obj1.add(obj3);
    obj2.add(obj4);
    EXPECT_EQ(obj1.get_components().size(), obj2.get_components().size());
}

TEST(tests, test3) {
    composed_object obj1;
    triangle obj2;
    line obj3;
    int a = obj1.get_components().size();
    obj1.add(obj2);
    obj1.add(obj3);
    int b = obj1.get_components().size();
    EXPECT_EQ(a + 2, b);
}
