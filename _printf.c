#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _printf - prints character and format
 * @format: string to be formatted
 * Return: length of string
 */

int _printf(const char *format, ...)
{
	int c, b, tmp, count_ch = 0;
	va_list _arg;
	ope t_format[] = {
		{"c", _printchar},
		{"s", _printstring},
		{NULL, NULL}
	};
	va_start(_arg, format);
	for (c = 0; format != NULL && format[c] != '\0'; c++)
	{
		if (format[c] == '%' && format[c + 1] == '%')
		{
			_putchar('%'); count_ch++; c++;
		}
		else if (format[c] == '%')
		{
			for (b = 0; t_format[b].j != NULL; b++)
			{
				if (format[c] == '%')
					format++;
				if (format[c] == *t_format[b].j)
				{
					tmp = t_format[b].func(_arg);
					count_ch += tmp;
				}
			}
		}
		else
		{
			_putchar(format[c]);
			count_ch++;
		}
	}
	va_end(_arg);
	return (count_ch);
}
