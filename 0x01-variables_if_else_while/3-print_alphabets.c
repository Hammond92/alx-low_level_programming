#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and UPPERCASE
 *
 * Return: Always 0.
 */

int main(void)
{
	char c;
	char b;

	c = 'a';
	b = 'A';
	while
		(c <= 'z')
		{
			putchar(c);
			c++;
		}
	while
		(b <= 'Z')
		{
			putchar(b);
			b++;
		}
	putchar ('\n');

	return (0);
}
