#include "main.h"
/**
 * print_last_digit - This function prints the last digit of a number
 * @n: The integer the function is receiving
 * Return: the value of the last digit of n
 */
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
