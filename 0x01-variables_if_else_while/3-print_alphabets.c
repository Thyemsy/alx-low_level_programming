#include <stdio.h>
/**
 * main - Entry point
 * Return: Always return 0
 */

int main(void)
{
	char a ='a';

	while (a <= 'z')
	{
		putcher(a);
		a++;
	}
	a =  'A';
	while (a <= 'Z')
	{
		putcher(a);
		a++;
	}
	putcher('\n');
	return (0);

}
