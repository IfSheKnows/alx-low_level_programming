#include "main.h"

#include "main.h"

/**
 * reverse_array - reverse the array of intgers
 * @a: the input value
 * @n: the input value
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
