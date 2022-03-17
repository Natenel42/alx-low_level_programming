#include "main.h"

/**
 * main - prints_putchar, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *main = "_putchar";
	
	while (*main)
	{
		_putchar(*main);
		main++;
	}
	_putchar('\n');
	return (0);
}
