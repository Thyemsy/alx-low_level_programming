#include "main.h"

/**
 * more_numbers- function that print 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int j = 0;

	while (j <= 10)
	{
		for (int i = 0; i < 14; i++)
		{
			_putchar(i);
		}
		j++;
	}
	_putchar('\n');
}
