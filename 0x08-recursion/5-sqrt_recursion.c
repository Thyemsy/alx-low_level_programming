#include "main.h"

/**
 * _sqrt - _sqrt_recursion                                                                                                           
 * @n: integer paramtr                                                                                                                             
 * @i: integer parameter                                                                                                                           
 * Return: sqrt                                                                                                                                    
 */

int sqrt_check(int n, int i)                                                                                                                       
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_check(n, i + 1));
}

/**
 * _sqrt_recursion - a function returns the natural square root of a number
 * @n: int n
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (sqrt_check(n, 1));
}
