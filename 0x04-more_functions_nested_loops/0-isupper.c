#include "main.h"

/**
 * _isupper - Checks for lowercase character
 * @c: The character that will be checked
 * Return: if uppercase character, 1, if not, 0 then
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
