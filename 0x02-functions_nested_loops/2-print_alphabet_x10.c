#include "main.h"

/**
 * void print_alphabet_x10 - print all alphabet times te
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)

{
	char letter;
	int i;
	i = 0;
	while (i < 10)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
         _putchar(letter);
	}
	_putchar('\n');
	}

	return (0);
}
