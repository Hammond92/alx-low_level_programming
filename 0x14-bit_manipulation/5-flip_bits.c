#include "main.h"


/**
* flip_bits - a function that returns the number of bits you would need to 
* flip to get from one number to another.
* to get from one number to another
* @n: the begining of the number
* @m: the next number
* Return: bits to be changed
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{

	int a, count = 0;

	unsigned long int current;

	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;

		if (current & 1)
			count++;
	}
	return (count);
}
