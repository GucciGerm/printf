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
char *_printchar(va_list gas)
{
	char *p;
	int length = 1; /*equal to 1 because char is 1*/

	p[0] = va_arg(gas, int);
	return (p);
/**	write(1, &p, length);
	return (length);
*/
}
/**
 * _printstring - prints string
 * @gas: va_list
 * Return: length of string
 */
char *_printstring(va_list gas)
{
	char *g;
	int a;

	g = va_arg(gas, char *);

	if (g == NULL)
		g = "(null)";
	return (g);
/**	write(1, g, a);
	return (a);
*/
}

char *_printint(va_list gas)
{
	int num;
	char *s;
	num = va_arg(gas, int);

	s = _itoa(num);
	return (s);
/**	count = _strlen(s);
	write(1, s, count);
	return (count);
*/
}
