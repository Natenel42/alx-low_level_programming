#include <stdio.h>
#include "main.h"
/**
 * print_array - Enter point
 * @a: integeret character
 * @n: another integer character
 */
void print_aray(int @a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
		}
	}
	printf("\n");
}
