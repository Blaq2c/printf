#include "main.h"
/**
 * _strlen - finds the legnth of a string
 * @str: string
 * Return: intager
 */
int _strlen(char *str)
{
	int ch;
	/*loop through each character of the string*/
	for (ch = 0; str[ch] != '\0'; ch++)
		;
	return (ch);
}
/**
 * _strlenc - finds legth of a string but for constant characters
 * @str: string
 * Return: intager
 */
int _strlenc(const char *str)
{
	int ch;

	for (ch = 0; str[ch] != '\0'; ch++)
		;
	return (ch);
}
