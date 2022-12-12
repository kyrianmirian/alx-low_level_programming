#include <stdio.h>

/**
 * main - prints the hexadesimal numbers
 *
 * Return: return a status code
 */
int main(void)
{
char letter = 'a';
int num = 0;
for (; num < 10; num++)
putchar(num + '0');
for (; letter <= 'f'; letter++)
putchar(letter);

putchar('\n');
return (0);
}
