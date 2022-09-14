#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natural number up to 98
 * @n: the last nutural number
 * Return: return 0
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (98 <= n)
		{
			printf("%d", n);
			n--;
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}


