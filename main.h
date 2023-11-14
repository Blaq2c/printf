#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct format - conveting to printf
 * @ph: type char pointer of the specifier
 * @function: function for thr conversion
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int _putchar(char c);
int _printf(const char *format, ...);
int print_str(va_list arg);
int print_c(va_list val);
int print_37(void);
int _strlenc(const char *str);
int _strlen(char *str);
int print_bin(va_list val);
int print_i(va_list args);
int print_d(va_list args);
int print_s(va_list val);



#endif
