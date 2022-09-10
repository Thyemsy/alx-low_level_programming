#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (i = 'a'; 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
			
