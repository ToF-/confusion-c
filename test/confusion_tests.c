#include "unity.h"
#include "unity_fixture.h"
#include "unity_memory.h"

TEST_GROUP(confusion);

TEST_SETUP(confusion) { }

TEST_TEAR_DOWN(confusion) { }

TEST(confusion, dummy_test) {
  TEST_ASSERT_EQUAL(4, 2+2);
}
