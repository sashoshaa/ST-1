// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(st1, checkPrime1) {
    bool res = checkPrime(0);
    EXPECT_FALSE(res);
}

TEST(st1, checkPrime2) {
    bool res = checkPrime(1);
    EXPECT_FALSE(res);
}

TEST(st1, checkPrime3) {
    bool res = checkPrime(2);
    EXPECT_TRUE(res);
}

TEST(st1, checkPrime4) {
    bool res = checkPrime(3);
    EXPECT_TRUE(res);
}

TEST(st1, checkPrime5) {
    bool res = checkPrime(4);
    EXPECT_FALSE(res);
}

TEST(st1, checkPrime6) {
    bool res = checkPrime(5);
    EXPECT_TRUE(res);
}

TEST(st1, checkPrime7) {
    bool res = checkPrime(97);
    EXPECT_TRUE(res);
}

TEST(st1, checkPrime8) {
    bool res = checkPrime(100);
    EXPECT_FALSE(res);
}

TEST(st1, nPrime1) {
    uint64_t res = nPrime(1);
    EXPECT_EQ(2, res);
}

TEST(st1, nPrime2) {
    uint64_t res = nPrime(2);
    EXPECT_EQ(3, res);
}

TEST(st1, nPrime3) {
    uint64_t res = nPrime(3);
    EXPECT_EQ(5, res);
}

TEST(st1, nPrime4) {
    uint64_t res = nPrime(4);
    EXPECT_EQ(7, res);
}

TEST(st1, nPrime5) {
    uint64_t res = nPrime(5);
    EXPECT_EQ(11, res);
}

TEST(st1, nPrime6) {
    uint64_t res = nPrime(10);
    EXPECT_EQ(29, res);
}

TEST(st1, nPrime7) {
    uint64_t res = nPrime(15);
    EXPECT_EQ(47, res);
}

TEST(st1, nextPrime1) {
    uint64_t res = nextPrime(0);
    EXPECT_EQ(2, res);
}

TEST(st1, nextPrime2) {
    uint64_t res = nextPrime(1);
    EXPECT_EQ(2, res);
}

TEST(st1, nextPrime3) {
    uint64_t res = nextPrime(2);
    EXPECT_EQ(3, res);
}

TEST(st1, nextPrime4) {
    uint64_t res = nextPrime(3);
    EXPECT_EQ(5, res);
}

TEST(st1, nextPrime5) {
    uint64_t res = nextPrime(4);
    EXPECT_EQ(5, res);
}

TEST(st1, nextPrime6) {
    uint64_t res = nextPrime(5);
    EXPECT_EQ(7, res);
}

TEST(st1, nextPrime7) {
    uint64_t res = nextPrime(10);
    EXPECT_EQ(11, res);
}

TEST(st1, nextPrime8) {
    uint64_t res = nextPrime(11);
    EXPECT_EQ(13, res);
}

TEST(st1, nextPrime9) {
    uint64_t res = nextPrime(12);
    EXPECT_EQ(13, res);
}

TEST(st1, nextPrime10) {
    uint64_t res = nextPrime(13);
    EXPECT_EQ(17, res);
}

TEST(st1, sumPrime1) {
    uint64_t res = sumPrime(10);
    EXPECT_EQ(17, res);
}

TEST(st1, sumPrime2) {
    uint64_t res = sumPrime(2);
    EXPECT_EQ(0, res);
}

TEST(st1, sumPrime3) {
    uint64_t res = sumPrime(3);
    EXPECT_EQ(2, res);
}

TEST(st1, sumPrime4) {
    uint64_t res = sumPrime(5);
    EXPECT_EQ(5, res);
}

TEST(st1, sumPrime5) {
    uint64_t res = sumPrime(7);
    EXPECT_EQ(10, res);
}

TEST(st1, sumPrime6) {
    uint64_t res = sumPrime(11);
    EXPECT_EQ(17, res);
}
