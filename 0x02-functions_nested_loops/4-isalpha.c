#include "main.h"

/**
 * _isalpha - Check for an alphabetic character
 * @c: The character that will be checked
 * Return: Any alphabetical character,1, if not, 0
 */
int _isalpha(int c)
{

if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
