#include <stdio.h>

/**
 * main - Entry point
 * Description - Write a program that prints the alphabet in lowercase,but without e and q
 *Return: always return 0
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
