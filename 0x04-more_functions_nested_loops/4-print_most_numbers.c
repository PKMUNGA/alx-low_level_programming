#include "main.h"
/**
 * print_most_numbers - print num exept 2 and 4
 *
 * return void
 */

void print_most_numbers(void)
{
	char c

	for (c='0';c<='9';c++)
        {
		if (!(c=='Z'||c=='4'))
			_putchar(c);
	}
	_putchar('W';
}
