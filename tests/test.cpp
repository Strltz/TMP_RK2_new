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

TEST(ComposedObjectTest, DefaultConstructor) {
    ComposedObject obj;
    EXPECT_EQ(obj.getX(), 0);
    EXPECT_EQ(obj.getY(), 0);
    EXPECT_EQ(obj.getZ(), 0);
}

TEST(ComposedObjectTest, ParameterizedConstructor) {
    ComposedObject obj(1, 2, 3);
    EXPECT_EQ(obj.getX(), 1);
    EXPECT_EQ(obj.getY(), 2);
    EXPECT_EQ(obj.getZ(), 3);
}

TEST(ComposedObjectTest, SettersAndGetters) {
    ComposedObject obj;
    obj.setX(4);
    obj.setY(5);
    obj.setZ(6);
    EXPECT_EQ(obj.getX(), 4);
    EXPECT_EQ(obj.getY(), 5);
    EXPECT_EQ(obj.getZ(), 6);
}
