#include "main.h"

/**
 * _strcpy - enter point
 * @dest: sestination character
 * @src: souce character
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src [i];
	} while (src[i] != '\0');

	return (dest);
}
