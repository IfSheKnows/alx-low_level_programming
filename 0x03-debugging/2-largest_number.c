#include "main.h"

/**
* largets_number- will return the largest of 3 integers
* @a: 1st integer
* @b: 2nd integer
* @c: 3rd integer
* Return: largest integer
*/

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
return (largest);
}
