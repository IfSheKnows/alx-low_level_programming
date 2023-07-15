#include <stdio.h>
/**
 * main - Begin code
 * Return: 0 (Successful)
 */

int main(void)
{
	char m;

	m = 'a';
	while
		(m <= 'z') {
			if (m != 'q' && m != 'e')
				putchar(m);
			m++;
		}
	putchar('\n');
	return (0);
}
