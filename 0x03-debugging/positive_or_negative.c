#include "main.h"
/**
 * positive_or_negative - Tell if the number is negtive, positive or Zero
 * @i : is the number to checked
 * Return: 0 (works fine)
 */

void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
else if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else
{
printf("%d is %s\n", i, "zero");
}
return;
}
