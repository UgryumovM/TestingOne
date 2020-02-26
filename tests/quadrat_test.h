#ifndef QUADRAT_H
#define QUADRAT_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

/* using namespace testing; */
extern "C" {
#include "myfunc.h"
}

TEST(quadraTest, noSol){
    ASSERT_EQ(quadrat(2,4,18).a, 0);
    ASSERT_EQ(quadrat(7,2,1).a, 0);
}

TEST(quadraTest, oneSol){
    qans t1,t2;
    t1 = quadrat(1,6,9);
    ASSERT_EQ(t1.a, 1);
    ASSERT_DOUBLE_EQ(t1.b, -3);

    t2 = quadrat(4,4,1);
    ASSERT_EQ(t2.a, 1);
    ASSERT_DOUBLE_EQ(t2.b, -0.5);
}

TEST(quadraTest, twoSol){
    qans t1,t2;
    t1 = quadrat(4,8,1);
    ASSERT_EQ(t1.a, 2);
    ASSERT_NEAR(t1.b, -0.133974, 0.001);
    ASSERT_NEAR(t1.c, -1.866025, 0.001);

    t2 = quadrat(1,7,3);
    ASSERT_EQ(t2.a, 2);
    ASSERT_NEAR(t2.b, -0.45862, 0.001);
    ASSERT_NEAR(t2.c, -6.5414, 0.001);
}

TEST(quadraTest, Negative){
    qans t1,t2;
    t1 = quadrat(-4,6,4);
    ASSERT_EQ(t1.a, 2);
    ASSERT_NEAR(t1.b, -0.5, 0.01);
    ASSERT_NEAR(t1.c, 2, 0.1);

    t2 = quadrat(-1,-3,-2);
    ASSERT_EQ(t2.a, 2);
    ASSERT_NEAR(t2.b, -2, 0.1);
    ASSERT_NEAR(t2.c, -1, 0.1);
}

TEST(quadraTest, Unexpected){
    ASSERT_EQ(quadrat(0,0,0).a, -1);

    ASSERT_EQ(quadrat(0,1,1).a, 1);
    ASSERT_EQ(quadrat(0,1,1).b, -1);

    ASSERT_EQ(quadrat(0,0,10).a, -1);
}
#endif
