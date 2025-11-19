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
    /* Test basic functionality */
    _printf("%d\n", 1024);
    _printf("%d\n", -1024);
    _printf("%d\n", 0);
    _printf("%d\n", INT_MAX);
    _printf("%d\n", INT_MIN);
    
    _printf("%i\n", 1024);
    _printf("%i\n", -1024);
    _printf("%i\n", 0);
    _printf("%i\n", INT_MAX);
    _printf("%i\n", INT_MIN);
    
    return (0);
}
