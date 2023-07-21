#include "main.h"

/**
 * _isdigit - Checks for any digit
 * @c: The character that will be checked
 * Return: If digit character return 1, if not 0 will be returned
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
