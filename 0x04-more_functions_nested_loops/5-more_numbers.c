#include "main.h"

/**
 * more_numbers- function that print 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int j;
	int i;

	for (j = 0; <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
	}
	_putchar('\n');
}
