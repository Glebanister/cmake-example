#include <gtest/gtest.h>

#include <Object.hpp>

using namespace testing;

TEST(Object, a_plus_b_simple) {
    core::Object o;

    EXPECT_EQ(3, o.add_two_numbers(1, 2));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
