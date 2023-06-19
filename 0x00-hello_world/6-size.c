#include <stdio.h>
/**
 * main - prints "programme that prints the size of various types on the computer"
 *Return: Always 0.
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %zu", sizeof(a));
	printf("\nSize of an int: %zu", sizeof(b));
	printf("\nSize of a long int: %zu", sizeof(c));
	printf("\nSize of a long long int: %zu", sizeof(d));
	printf("\nSize of a float: %zu", sizeof(f));

	return (0);
}
