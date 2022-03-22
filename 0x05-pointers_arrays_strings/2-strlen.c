#include "main.h"

/**
 * _strlen - Enter point
 * @s: character that will be calculeted
 * Return: size of s
 */

int _strlen(char *s)
{
	int i = 0;
	int leng = 0;

	while (s[i] != '\0')
	{
		leng += 1;
		i++;
	}
	return (leng);
}
