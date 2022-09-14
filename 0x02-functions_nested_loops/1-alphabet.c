#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Entry point
 * Description: a funtion that prints all alphabet in lower case
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
