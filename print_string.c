#include "main.h"
/**
 * print_s - prints arguments
 * @val:argument
 * Return:length:the length of string
 */

int print_s(va_list val)
{
	char *str;
	int j, length;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (j = 0 ; j < length ; j++)
			_putchar(str[j]);
	}
	else
	{
		length = _strlen(str);
		for (j = 0; j < length; j++)
			_putchar(str[j]);
	}
	return (length);

}
