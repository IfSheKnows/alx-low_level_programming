#include "main.h"

/**
* largest_number- will return the largest of 3 integers
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
	else if (b > c && b > a)
	{
		largest = b;
	}
	else if (c > b)
	{
		largest = c;
	}
	else
	{
		largest = b;
	}
return (largest);
}
