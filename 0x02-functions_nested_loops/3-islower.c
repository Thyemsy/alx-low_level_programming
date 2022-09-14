#include "main.h"

/**
 * _islower - check if charater c is in lowercase and return the 1 else  return 0
 * Return: Always return the value of 0
 */
int _islower(int c)
{
	if (c <= 97 && c <= 122)
	{
		return(1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
