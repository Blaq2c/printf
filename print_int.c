#include "main.h"

/**
 * print_i - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_i(va_list args)

{
	int num = va_arg(args, int);
	int digit, expn = 1, j = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		j++;
	}

	int temp = num;

	while (temp / 10 != 0)
	{
		expn *= 10;
		temp /= 10;
	}

	while (expn >= 1)
	{
		digit = num / expn;
		_putchar(digit + '0');
		num %= expn;
		expn /= 10;
		j++;
	}

	return (j);
}

/**
 * print_d - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */
int print_d(va_list args)

{
	int num = va_arg(args, int);
	int digit, expn = 1, j = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		j++;
	}

	int temp = num;

	while (temp / 10 != 0)
	{
		expn *= 10;
		temp /= 10;
	}

	while (expn >= 1)
	{
		digit = num / expn;
		_putchar(digit + '0');
		num %= expn;
		expn /= 10;
		j++;
	}

	return (j);
}

