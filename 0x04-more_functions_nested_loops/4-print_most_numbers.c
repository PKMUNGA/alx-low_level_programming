#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print num exept 2 and 4
 *
 * Return: returns nothing
 */

void print_most_numbers(void)
{
	int n;

	for (n = 40; n <= 50; n++)
        {
		if ((n == 50 || (n == 52))
		{
                       continue;		
		}
		putchar(n);
	}
	putchar(10);
}
