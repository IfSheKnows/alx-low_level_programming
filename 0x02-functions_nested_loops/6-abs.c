#include "main.h"

/**
 * _abs - Calculate the absolute value of an integer
 * @c: The number that will be calculated
 * Return: Abssolute value of number or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
