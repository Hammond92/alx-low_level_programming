#include "main.h"

/**
 * print_sign - print sign of numbers
 * Return: 1 for positive num, -1 for negative number or zero for anythin else
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
	return (0);
}
