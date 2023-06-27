#include "main.h"

/**
 * print_array - function that print n elements of an array
 * @a: array
 * @n: is the number
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); 1++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}

