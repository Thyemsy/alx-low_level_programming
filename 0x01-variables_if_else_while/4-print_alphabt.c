#include <stdio.h>

/**
 * main - Entry point
 * Description -program that prints alphabet in lowercase without e and q
 * Return: always return 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}	
