#include "main.h"

/**
 * swap_int - Entry Point
 * @a: charachter that points to a n int
 * @b: charachter that points to a n int
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
