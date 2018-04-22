#ifndef Rezz
#define Rezz
#define buffer 1024
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct operations - Here
 * @j: pointer to character
 * @func: pointer to a function
 */

typedef struct operations
{
	char *j;
	char *(*func)(va_list printafun);
} ope;

int _printf(const char *format, ...);
char *_printchar(va_list gas);
char *_printstring(va_list gas);
int _printmodo(va_list gas);
int _strlen(char *s);
int _putchar(char c);
char *_printint(va_list gas);
char *_itoa(int num);
#endif
