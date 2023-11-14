#include "main.h"

/**
 * _printf - selects correct function
 * @format:identifier to look for
 * Return:the length of string
 */

int _printf(const char * const format, ...)
{
	convert p[] = {
		{"%s", print_s},
		{"%c", print_c},
		{"%%", print_37},
		{"%i", print_i},
		{"%d", print_d} };

	va_list args;
	int in = 0, j, Tlen = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[in] != '\0')
	{
		j = 4;
		while (j >= 0)
		{
			if (p[j].ph[0] == format[in] && p[j].ph[1] == format[in + 1])
			{
				Tlen += p[j].function(args);
				in = in + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[in]);
		Tlen++;
		in++;
	}
	va_end(args);
	return (Tlen);
}
