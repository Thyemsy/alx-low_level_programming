#include "main.h"

/**
 * more_numbers- function that print 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int i, j;

	j = 0;

	while (j < 11)
	{
		for (i = 0; i < 14; i++)
		{
			_putchar(i);
		}
	}
	j++;
	_putchar('\n');
}
