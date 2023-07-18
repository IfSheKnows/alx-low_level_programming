#include "main.h"

/**
 * print_alphabet_x10 - The alphabet will be x10 times
 * Return: Void
 */

void print_alphabet_x10(void)
{
char ch;
int a;
a = 0;
while (a < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
a++;
}

}
