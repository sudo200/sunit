#include "test.h"

int functotest(void) {
  return 5 * 9;
}

void test_equality(void) {
  const int expect = 45;
  int actual = functotest();
  ASSERT(actual == expect);
}

int main(void) {
  RUN_TEST(test_equality);

  return 0;
}

