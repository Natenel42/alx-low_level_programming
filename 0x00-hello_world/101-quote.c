#include <studio.h>
#include <stdlib.h>
/**
 * main -Entry point
 * Return: Always 1 (Succes)
 */
int main(void)
{
	Write(STUDOUT_FILENO, "and that piece of art is useful \" - Dora Korpar, 2015-10-19\n", 59);
	return(1);
}
