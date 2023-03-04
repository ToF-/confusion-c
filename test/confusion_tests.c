#include "unity.h"
#include "unity_fixture.h"
#include "unity_memory.h"
#include "confusion.h"

int terms[MAX_TERMS];

TEST_GROUP(confusion);

TEST_SETUP(confusion) {
  for(int i=0; i<MAX_TERMS; terms[i++] = -1);
}

TEST_TEAR_DOWN(confusion) { }

TEST(confusion, trivial_cases) {
  int result;
  result = solve("42",6, terms);
  TEST_ASSERT_EQUAL(2, result);
  TEST_ASSERT_EQUAL(4, terms[0]);
  TEST_ASSERT_EQUAL(2, terms[1]);

  result = solve("31",4, terms);
  TEST_ASSERT_EQUAL(2, result);
  TEST_ASSERT_EQUAL(3, terms[0]);
  TEST_ASSERT_EQUAL(1, terms[1]);
}
