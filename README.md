# FTEST - A Simple and Portable Testing Framework for C++
I developed FTest to test [UTF-8 CPP library] (https://github.com/nemtrif/utfcpp). Previously, I was using [GoogleTest](https://google.github.io/googletest/) framework. Over time it became increasingly hard to use it with C++ 98. As I was using only a small subset of its features anyway, I decided to write a new testing framework. The important features of the framework are:

- Uses only C++ 98
- Asserts are similar to a subset of Google Test's ones.
- It is simple to get started with - just a single header file

You may want to use FTest if you want to quickly set-up a testing framework with an easy path to migrating to GoogleTest once you need more features.

Another use-case scenario for FTest is when you need to compile your code (including the tests) with C++ 98.

Or, you may just like the simplicity and small size of FTest and do not need the features offered by bigger testing frameworks.


## A simple example
To see real-life use of FTest, I suggest checking the tests directory of UTF-8 CPP project. That said, here is a simple example of using FTest:

```
#include "ftest.h"

TEST(Simple, simple)
{
    EXPECT_TRUE(true);
}
```

Save the content to a cpp file, compile it and run it. The output should look like:
```
[==========] Running 8 tests from 3 test cases.
[----------] 1 tests from Simple
[ RUN      ] Simple.simple
[       OK ] Simple.simple
[----------] 1 tests from Simple
[==========] 1 tests from 1 test cases ran.
[  PASSED  ] 1 tests.
```

Some things to note:
- The test program contains no `main()` function. It is provided by FTest, unless you define `F_TEST_NO_MAIN` before including ftest.h.
- `TEST` macro takes two arguments: test case name ("Simple" in the previous example) and test name ("simple"). A test case is simply a group of related tests.
- `EXPECT_TRUE` assertion is used to establish that a condition is true. FTest provides a limited number of assertions that can still be used to write simple and effective tests.
