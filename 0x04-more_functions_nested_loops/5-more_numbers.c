#include "main.h"

/**
 * more_numbers- function that print 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int j;

	j = 0;

	while (j <= 10)
	{
		int i;

		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		j++;
	}
	_putchar('\n');
}
