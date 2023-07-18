#include "main.h"

/**
 * print_last_digit - Prints out the last digit of a number
 * @k: The number that will be used
 * Return: The value of teh last digit of the number
 */

int print_last_digit(int k)
{
	int lastnum;

	lastnum = k % 10;
	if (lastnum < 0)
	{
	lastnum = lastnum * -1;
	}
	_putchar(lastnum + '0');
	return (lastnum);
}
