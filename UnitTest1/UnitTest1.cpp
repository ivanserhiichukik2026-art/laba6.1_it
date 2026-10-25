#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestCount)
        {
            int a[] = { 11, 12, 13, 14, 15, 16, 17, 18, 19 };

            int count = 0;

            for (int i = 0; i < 9; i++)
            {
                if (a[i] % 2 == 0 || i % 8 != 0)
                    count++;
            }

            Assert::AreEqual(7, count);
        }

        TEST_METHOD(TestSum)
        {
            int a[] = { 11, 12, 13, 14, 15, 16, 17, 18, 19 };

            int sum = 0;

            for (int i = 0; i < 9; i++)
            {
                if (a[i] % 2 == 0 || i % 8 != 0)
                    sum += a[i];
            }

            Assert::AreEqual(105, sum);
        }

        TEST_METHOD(TestReplace)
        {
            int a[] = { 11, 12, 13, 14, 15, 16, 17, 18, 19 };

            for (int i = 0; i < 9; i++)
            {
                if (a[i] % 2 == 0 || i % 8 != 0)
                    a[i] = 0;
            }

            Assert::AreEqual(11, a[0]);
            Assert::AreEqual(0, a[1]);
            Assert::AreEqual(0, a[7]);
            Assert::AreEqual(19, a[8]);
        }
    };
}