#include "main.h"

/**
 * print_d - print decimal
 * @args :decimal argument
 * Return:number
 */

int print_d(va_list args)
{
	int noz = va_arg(args, int);
	int ini;
	int keep_count = 1;
	int number = 0;

	if (noz == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		_putchar('1');
		_putchar('4');
		_putchar('7');
		_putchar('4');
		_putchar('8');
		_putchar('3');
		_putchar('6');
		_putchar('4');
		_putchar('8');
		return (11);
	}
	if (noz < 0)
	{
		noz = (noz * -1);
		number += _putchar('-');
	}
	ini = noz;
	while (ini > 9)
	{
		ini /= 10;
		keep_count *= 10;
	}
	while (keep_count >= 1)
	{
		number += _putchar(((noz / keep_count) % 10) + '0');
		keep_count /= 10;
	}
	return (number);
}

/**
 * print_i -prints integer
 * @args:integer argument
 * Return: function
 */
int print_i(va_list args)
{
	return (print_d(args));
}
