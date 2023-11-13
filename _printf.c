#include "main.h"

/**
 * custom_printf - Selects the appropriate function based on the format specifier
 * @format: Identifier to look for in the format string
 * Return: The length of the resulting string
 */

int custom_printf(const char * const format, ...)
{
    conversion_pair conversions[] = {
        {"%s", print_string},
        {"%c", print_char},
        {"%%", print_percent},
        {"%i", print_integer},
        {"%d", print_decimal}
    };

    va_list args;
    int index = 0, array_size = 5, total_length = 0;

    va_start(args, format);
    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        return -1;

    while (format[index] != '\0')
    {
        int j = array_size - 1;
        while (j >= 0)
        {
            if (conversions[j].placeholder[0] == format[index] &&
                conversions[j].placeholder[1] == format[index + 1])
            {
                total_length += conversions[j].function(args);
                index = index + 2;
                goto ContinueLoop;
            }
            j--;
        }

        _putchar(format[index]);
        total_length++;
        index++;

    ContinueLoop:
        continue;
    }

    va_end(args);
    return total_length;
}

