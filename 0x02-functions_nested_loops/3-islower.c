#include "main.h"

/**
 * _islower -if char c is in lowercase and return the 1 else  return 0
 * Return: Always return the value of 0
 * @c: The character to check
 */
int _islower(int c)
{
	if (c <= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
