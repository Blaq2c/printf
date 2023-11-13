#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct conversion_pair - structure for converting printf specifiers
 * @placeholder: specifier string
 * @function: corresponding conversion function
 */
typedef struct conversion_pair
{
    char *placeholder;
    int (*function)(va_list);
} conversion_pair;

int _putchar(char c);
int _printf(const char *format, ...);
int print_str(va_list arg);
int print_char(va_list val);
int print_percent(void);
int _strlenc(const char *str);
int _strlen(char *str);
int print_bin(va_list val);
int print_integer(va_list args);
int print_decimal(va_list args);
int print_string(va_list val);

#endif /* MAIN_H */

