#include "main.h"

/**
 * more_numbers - more numbers
 *
 * Return: void
 */

void more_numbers(void)
{
	char c;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
		_putchar(i);
		_putchar (j % 10 = '0');
		}
	}
	_putchar("\n");
}
