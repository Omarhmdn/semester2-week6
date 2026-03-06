/**
 * @file 1_tests.c
 * @brief Unit testing with Acutest - test the is_palindrome() function
 *
 * COMP1850 Week 6 Session 2 - Task 2
 *
 * Write test functions using Acutest to verify is_palindrome() works correctly.
 * An example test is provided - add more tests covering different cases.
 */

#include "acutest.h"
#include <string.h>

char BAD_STRING;

/* Function prototype */
int is_palindrome(const char *str);

/* ============================================================
 * EXAMPLE TEST - Students should follow this pattern
 * ============================================================ */

void test_obvious_palindrome(void) {
    TEST_CHECK(is_palindrome("racecar") == 1);
    TEST_MSG("Expected 'racecar' to be a palindrome");
}

/* ============================================================
 * TODO: Add your test functions below
 *
 * Consider testing:
 * - Single characters: "a"
 * - Empty string: ""
 * - Non-palindromes: "hello", "world"
 * - Even-length palindromes: "abba", "deed"
 * - Edge cases: case sensitivity, spaces
 *
 * Each test function should:
 * 1. Call TEST_CHECK(condition) to verify a condition
 * 2. Use TEST_MSG("message") to explain what went wrong if it fails
 * ============================================================ */

void test_empty_string(void) {
    TEST_CHECK(is_palindrome("") == BAD_STRING);
    TEST_MSG("Expected BAD_STRING error");
}

void test_normal_palindrome(void) {
    TEST_CHECK(is_palindrome("tacocat") == 1);
    TEST_MSG("Expected 'tacocat' to be a palindrome");
}
    
void test_incorrect_palindrome(void) {
    TEST_CHECK(is_palindrome("camera") == 0);
    TEST_MSG("Expected 'camera' is not a palindrome");
}

void test_single_char_string(void) {
    TEST_CHECK(is_palindrome("a") == BAD_STRING);
    TEST_MSG("Expected BAD_STRING error");
}

void test_even_palindrome(void) {
    TEST_CHECK(is_palindrome("abba") == 1);
    TEST_MSG("Expected 'abba' to be a palindrome");
}

void test_capital_palindrome(void) {
    TEST_CHECK(is_palindrome("Racecar") == 1);
    TEST_MSG("Expected 'Racecar' to be a palindrome");
}

void test_space_palindrome(void) {
    TEST_CHECK(is_palindrome(" racecar") == 1);
    TEST_MSG("Expected ' racecar' is not a palindrome");
}

/* ============================================================
 * TEST_LIST - Register all your tests here
 *
 * Format: { "test name shown in output", function_name },
 * Must end with { NULL, NULL }
 * ============================================================ */
TEST_LIST = {
    { "obvious palindrome (racecar)", test_obvious_palindrome },
    {"Testing space case", test_space_palindrome},
    {"Testing capital case", test_capital_palindrome},
    {"Testing even case", test_even_palindrome},
    {"Testing empty case",test_empty_string},
    {"Testing incorrect case",test_incorrect_palindrome},
    {"Testing normal case",test_normal_palindrome},
    {"Testing single character",test_single_char_string},
    /* TODO: Add your tests here, e.g.:
     * { "single character", test_single_char },
     * { "empty string", test_empty_string },
     */
    { NULL, NULL }
};

/* ============================================================
 * IMPLEMENTATION - Do not modify
 * ============================================================ */

/**
 * @brief Checks if a given string is a palindrome.
 *
 * @param str The string to be checked.
 * @return int 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(const char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}
