#include "holberton.h"

/**
 * _strlen - length of string
 * @s: takes string
 * Return: string length
 */
int _strlen(char *s)
{
	int m;

	for (m = 0; s[m] != '\0'; m++)
		;
	return (m);
}


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
	{
		write(1, "(null)", 6);
		return (-1);
	}

	a = _strlen(g);
	write(1, g, a);
	return (a);
}
