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



TEST(tests, test3) {
    composed_object obj1;
    triangle obj2;
    line obj3;
    int a = obj1.size_of_components_vec() + 2;
    obj1.add(obj2);
    obj1.add(obj3);
    int b = obj1.size_of_components_vec();
    EXPECT_EQ(a, b);
}
