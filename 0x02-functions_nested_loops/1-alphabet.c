#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Entry point
 * Description: a function that prints alphabet in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');

}
