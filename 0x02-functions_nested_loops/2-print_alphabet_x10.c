#include "main.h"

/**
 * void print_alphabet_x10 - printing alphabet x10
 * Return:Always return 0
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	while (j < 10)
	{
		for (i ='a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
                j++;
		_putchar('\n');
	}

}

