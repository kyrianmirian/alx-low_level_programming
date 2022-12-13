#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - the ls if it is alphabetic
 * @c: takes the char to analyse
 * Return: return value
 */
int _isalpha(int c)
{
int value;

if (isalpha(c))
{
value = 1;
}
else
{
value = 0;
}
return(value);
}
