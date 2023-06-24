#include "main.h"

/**
 * _isdigit - checks for a gigit
 *
 * Return: 1 for a digit character or 0 for anything else
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
