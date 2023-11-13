#include "main.h"

/**
 * _strlen - finds the length of a string
 * @str: string
 * Return: integer representing the length of the string
 */
int _strlen(char *str)
{
	int length;
    /* Loop through each character of the string */
	for (length = 0; str[length] != '\0'; length++)
		;
	return (length);
}

/**
 * _strlenc - finds the length of a string (constant characters)
 * @str: string
 * Return: integer representing the length of the string
 */
int _strlenc(const char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;

	return (length);
}

