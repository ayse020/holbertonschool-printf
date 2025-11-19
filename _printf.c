#include <stdarg.h>
#include "main.h"

/**
 * handle_d_i - Handles %d and %i conversion specifiers
 * @num: integer to print
 *
 * Return: number of characters printed
 */
int handle_d_i(int num)
{
    char buffer[12];
    int i = 0;
    int count = 0;
    unsigned int n;
    
    /* Handle zero separately */
    if (num == 0)
    {
        count += _putchar('0');
        return (count);
    }
    
    if (num < 0)
    {
        count += _putchar('-');
        n = -num;
    }
    else
    {
        n = num;
    }
    
    /* Convert number to string in reverse */
    while (n > 0)
    {
        buffer[i++] = (n % 10) + '0';
        n /= 10;
    }
    
    /* Print in correct order */
    while (i > 0)
    {
        count += _putchar(buffer[--i]);
    }
    
    return (count);
}

/**
 * _printf - Custom printf function
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    if (!format)
        return (-1);

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == '\0')
                break;

            if (*format == 'c')
            {
                count += _putchar(va_arg(args, int));
            }
            else if (*format == 's')
            {
                char *str = va_arg(args, char *);
                if (!str)
                    str = "(null)";
                while (*str)
                {
                    count += _putchar(*str);
                    str++;
                }
            }
            else if (*format == 'd' || *format == 'i')
            {
                count += handle_d_i(va_arg(args, int));
            }
            else if (*format == '%')
            {
                count += _putchar('%');
            }
            else
            {
                count += _putchar('%');
                count += _putchar(*format);
            }
        }
        else
        {
            count += _putchar(*format);
        }
        format++;
    }

    va_end(args);
    return (count);
}
