#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Begin the code
 * Return: 0 (then it works fine)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is a zero\n", n);
	else
		printf("%d will be negative\n", n);
	return (0);
}
