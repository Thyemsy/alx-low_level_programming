#include "main.h"

/**
 * print_most_numbers - print number  bweteen 0 and 9 exclude 2 & 4
 * return: 0
 */
void print_numbers(void)
{
	int i;

	while (i < 10)
	{
		for (i = 0; i != 2 && i = 4; i++)
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
	return (0);
}
