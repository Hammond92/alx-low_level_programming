#include <stdio.h>

/**
 * main - print number from 1 to 100, followed by a new line
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		} else if (i & 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		} else if (i % 3 == 0 && i % 5 ==0)
		{
			printf ("PizzBuzz");
		} Else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
