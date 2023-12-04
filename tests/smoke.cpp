// Copyright 2021 Nemanja Trifunovic

/*
Permission is hereby granted, free of charge, to any person or organization
obtaining a copy of the software and accompanying documentation covered by
this license (the "Software") to use, reproduce, display, distribute,
execute, and transmit the Software, and to prepare derivative works of the
Software, and to permit third-parties to whom the Software is furnished to
do so, all subject to the following:

The copyright notices in the Software and this entire statement, including
the above license grant, this restriction and the following disclaimer,
must be included in all copies of the Software, in whole or in part, and
all derivative works of the Software, unless such copies or derivative
works are solely in the form of machine-executable object code generated by
a source language processor.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.
*/

#include "ftest.h"
#include <iostream>

TEST(Simple, simple)
{
    EXPECT_TRUE(true);
    EXPECT_TRUE(1);
    EXPECT_TRUE(1 < 2);
    EXPECT_TRUE(2.0 >= 0);
}

TEST(Simple, expectfalse)
{
    EXPECT_FALSE(false);
    EXPECT_FALSE(1 == 0);
    EXPECT_FALSE(1 > 2);
    EXPECT_FALSE(3.4 == 3.41);
}

TEST(Predicates, expectequal)
{
    EXPECT_EQ(1, 1);
    EXPECT_EQ(true, true);
}

TEST(Predicates, expectlessthan)
{
    EXPECT_LT(-1, 1);
    EXPECT_LT(2., 2.1);
}

TEST(Predicates, expectlessorequal)
{
    EXPECT_LE(-1, 1);
    EXPECT_LE(2., 2.1);
    EXPECT_LE(1, 1);
}

TEST(Predicates, expectgreaterthan)
{
    EXPECT_GT(1, -1);
    EXPECT_GT(2.2, 2.1);
}

TEST(Predicates, expectgreaterorequal)
{
    EXPECT_GE(1, -1);
    EXPECT_GE(2.2, 2.1);
    EXPECT_GE(1, 1);
}

TEST(Negative, expectnotequal)
{
    EXPECT_NE(1, 2);
    EXPECT_NE(1., 2.);
    EXPECT_NE(false, true);
}

TEST(Strings, expectstrequal)
{
    EXPECT_STREQ("abc", "abc");
    EXPECT_STREQ("", "");
    EXPECT_STREQ(NULL, NULL);
}

TEST(Strings, expectstrnotequal)
{
    EXPECT_STRNE("abc", "abcd");
    EXPECT_STRNE(NULL, "abcd");
    EXPECT_STRNE("abcd", NULL);
    EXPECT_STRNE("", NULL);
    EXPECT_STRNE(NULL, "");
}
