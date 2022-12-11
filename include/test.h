#include <assert.h>
#include <stdio.h>

#define ASSERT(assertion) \
  fputs((assertion) ? "PASS\n" : "FAIL\n", stderr); \
  assert(assertion);

#define RUN_TEST(test) \
  fputs("Running " #test "... ", stderr); \
  test();

