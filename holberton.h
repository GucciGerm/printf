#ifndef Rezz
#define Rezz
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
 * struct operations - Here
 * @j: pointer to character
 * @func: pointer to a function
 */

typedef struct operations
{
	char *j;
	int (*func)(va_list printafun);
} ope;

int _printf(const char *format, ...);
int _printchar(va_list gas);
int _printstring(va_list gas);
int _printmodo(va_list gas);
int _strlen(char *s);
int _putchar(char c);
#endif
