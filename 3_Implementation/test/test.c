#include "unity.h"
#include "Flames.h"

#define "Flames"

/* Prototypes for all the test functions */
void test_f1(void);
void test_f2(void);
void test_strlwr(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_f1);
  RUN_TEST(test_f2);
  RUN_TEST(test_strlwr);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */
void test_f1(void) {
  TEST_ASSERT_EQUAL("akhil", f1(strlwr("AKHIL")));

  /* Dummy fail*/
  TEST_ASSERT_EQUAL("test", f1(strlwr("TEST")));
}

void test_f2(void) {
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));

  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100, subtract(1000, 900));
}

void test_strlwr(void) {
  TEST_ASSERT_EQUAL("a", strlwr(tolower("A")));

  /* Dummy fail*/
  TEST_ASSERT_EQUAL("b", strlwr(tolower("B")));
}
