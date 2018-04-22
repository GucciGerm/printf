#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"
#include <string.h>
#include <stdio.h>
/**
 * _printf - prints character and format
 * @format: string to be formatted
 * Return: length of string
 */

int _printf(const char *format, ...)
{
	int c = 0, b = 0, tmp, count_ch = 0;
	va_list _arg;
	char str[buffer];
	char *ret;
	printf("created an array\n");
	ope t_format[] = {
		{"c", _printchar},
		{"s", _printstring},
		{"d", _printint},
	};
	printf("initializing va_start\n");
	va_start(_arg, format);
	printf("Starting to Loop in Format\n");
	while (format != NULL && format[c] != '\0')
	{
		printf("Comaring if %c is a %%\n", format[c]);
		if (format[c + 1] == '%' && format[c] == '%')
		{
			strcpy(str, "%"); c += 2;
		}
		else if (format[c] == '%')
		{
			c++;
			printf("Searching for function: %c\n", format[c]);
			while (b < 4)
			{
				printf("comparing function with structure: char - %c\n", format[c]);
				if (format[c] == *t_format[b].j)
				{
					printf("found the function char - %c", format[c]);
					strcpy(str,t_format[b].func(_arg));
					break;
				}
				b++;
			}
		}
		else
		{
			strcpy(str, format);
			c++;
		}
	}
	count_ch = _strlen(str);
	write(1, str, count_ch);
	va_end(_arg);
	printf("\nlen is: %d\n", count_ch);
	return (count_ch);
}
