#include "holberton.h"
#include "stdlib.h"

/**
 * _itoa - convert int to string
 * @num: takes an int
 * Return: string or Null if failed
 */
char *_itoa(int num)
{
	int cp_num = num, neg_chk = num, count = 0;
	char *ret;

	if (neg_chk < 0)
	{
		cp_num *= -1;
		num *= -1;
		count++;
	}
	while (cp_num != 0)
	{
		cp_num /= 10;
		count++;
	}
	ret = malloc(count * sizeof(char));
	if (ret == NULL)
		return (NULL);
	ret[count] == '\0';
	count--;
	while (count > 0)
	{
		ret[count] = num % 10 + '0';
		num /= 10;
		count--;
	}
	if (neg_chk < 0)
		ret[0] = '0';
	else
		ret[0] = num % 10;
	ret[count] = '-';
	return (ret);
}
