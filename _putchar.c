#include "main.h"
/**
 * _putchar - writes character c to stdout
 * @c: the characteristic to print
 * Return: on sucess 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
