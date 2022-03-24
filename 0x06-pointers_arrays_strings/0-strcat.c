#include "main.h"

/**
 * _strcat - concatenates tow strings
 *
 * @dest: resualting string
 * @src: source string
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, n;

	n = string_length(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[n + i] = src[i];
	}
	dest[n + i] = '\0';
	return (dest);
}

/**
 * sring_length - finds the length of a string
 * Retur: length of c
 * @pointer: pointer
 */
int string_length(char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
	{
		c++;
	}
	return (c);
}
