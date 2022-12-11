# sudo's unit - sunit

An extremly minimal unit testing framework for C.

## How to use

1. Write a function for each unit test, these represent our test cases.
2. In each unit test case, test the condition using the `ASSERT` macro.
3. Execute each test case using the `RUN_TEST` macro.

Example:
---
```c
#include "test.h"

int my_function(void) {
  return 5 * 9;
}

void test_equality(void) {
  ASSERT(my_function() == 45);
}

int main(void) {
  RUN_TEST(test_equality);

  return 0;
}
```

