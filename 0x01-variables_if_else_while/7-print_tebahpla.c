#include <stdio.h>

/**
 * main - Entrry point
 * Return:return 0
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		ptchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
