#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _atoi - a functionthat convert aschii to integer
 * @s: the string to be converted to integer
 * Return: intger
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
