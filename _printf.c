#include "main.h"

/**
 * _printf - selects the correct function based on the format specifier
 * @format: identifier to look for
 * Return: the length of the resulting string
 */
int _printf(const char * const format, ...)
{
    convert conversions[] = {
        {"%s", print_s},
        {"%c", print_c},
        {"%%", print_percent},
        {"%i", print_i},
        {"%d", print_d}
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

