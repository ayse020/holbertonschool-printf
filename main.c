#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * main - Test function for _printf
 *
 * Return: Always 0
 */
int main(void)
{
    int len1, len2;
    
    printf("=== Testing _printf with d and i specifiers ===\n\n");
    
    /* Test 1: Positive numbers */
    printf("Test 1 - Positive numbers:\n");
    len1 = _printf("Custom: %%d = %d, %%i = %i\n", 42, 123);
    len2 = printf("Standard: %%d = %d, %%i = %i\n", 42, 123);
    printf("Chars printed - Custom: %d, Standard: %d\n\n", len1, len2);
    
    /* Test 2: Negative numbers */
    printf("Test 2 - Negative numbers:\n");
    len1 = _printf("Custom: %%d = %d, %%i = %i\n", -42, -123);
    len2 = printf("Standard: %%d = %d, %%i = %i\n", -42, -123);
    printf("Chars printed - Custom: %d, Standard: %d\n\n", len1, len2);
    
    /* Test 3: Zero */
    printf("Test 3 - Zero:\n");
    len1 = _printf("Custom: %%d = %d, %%i = %i\n", 0, 0);
    len2 = printf("Standard: %%d = %d, %%i = %i\n", 0, 0);
    printf("Chars printed - Custom: %d, Standard: %d\n\n", len1, len2);
    
    /* Test 4: Edge cases */
    printf("Test 4 - Edge cases:\n");
    len1 = _printf("Custom: MAX = %d, MIN = %i\n", INT_MAX, INT_MIN);
    len2 = printf("Standard: MAX = %d, MIN = %i\n", INT_MAX, INT_MIN);
    printf("Chars printed - Custom: %d, Standard: %d\n\n", len1, len2);
    
    /* Test 5: Single specifiers */
    printf("Test 5 - Single specifiers:\n");
    len1 = _printf("Just d: %d\n", 999);
    len2 = printf("Just d: %d\n", 999);
    printf("Chars printed - Custom: %d, Standard: %d\n\n", len1, len2);
    
    len1 = _printf("Just i: %i\n", -999);
    len2 = printf("Just i: %i\n", -999);
    printf("Chars printed - Custom: %d, Standard: %d\n\n", len1, len2);
    
    return (0);
}
