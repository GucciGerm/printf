#include "holberton.h"

/**
 * _printchar - prints character
 * @gas: va_list
 * Return: return length
 */
int _printchar(va_list gas)
{
	char p;
	int length = 1; /*equal to 1 because char is 1*/

	p = va_arg(gas, int);
	write(1, &p, length);
	return (length);
}
/**
 * _printstring - prints string
 * @gas: va_list
 * Return: length of string
 */
int _printstring(va_list gas)
{
	char *g;
	int a;

	g = va_arg(gas, char *);

	if (g == NULL)
		return (-1);

	a = strlen(g);
	write(1, g, a);
	return (a);
}

ope t_format[] = {
	{"c", _printchar},
	{"s", _printstring},
	{NULL, NULL}
};
