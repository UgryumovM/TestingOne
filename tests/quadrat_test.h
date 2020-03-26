#ifndef QUADRATT_H
#define QUADRATT_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

/* using namespace testing; */
extern "C" {
#include "quadrat.h"
}

TEST(quadraTest, noSol){
    ASSERT_EQ(quadrat(2,4,18).a, 0);
}

TEST(quadraTest, oneSol){
    qans t = quadrat(1,6,9);
    ASSERT_EQ(t.a, 1);
    ASSERT_DOUBLE_EQ(t.b, -3);
}

TEST(quadraTest, twoSol){
    qans t = quadrat(4,8,1);
    ASSERT_EQ(t.a, 2);
    ASSERT_NEAR(t.b, -0.133974, 0.001);
    ASSERT_NEAR(t.c, -1.866025, 0.001);
}

TEST(quadraTest, Negative){
    qans t = quadrat(-4,6,4);
    ASSERT_EQ(t.a, 2);
    ASSERT_NEAR(t.b, -0.5, 0.01);
    ASSERT_NEAR(t.c, 2, 0.01);
}

TEST(quadraTest, Unexpected){
    ASSERT_EQ(quadrat(0,0,0).a, -1);

    ASSERT_EQ(quadrat(0,1,1).a, 1);
    ASSERT_EQ(quadrat(0,1,1).b, -1);
}
#endif
