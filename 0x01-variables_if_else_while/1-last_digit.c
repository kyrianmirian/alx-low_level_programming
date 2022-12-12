#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
* main - This program will assign a random number
* to the variable n each time it is excuted
*
* Return: 0 When successful returns a
*/

int main(void)
{
int n, last digit;

srand(time(0));
n - rand() RAND_MAX / 2;
/* your code goes there */
last digit = n % 10;
if (last digit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
else if (last digit == 0)
printf("Last digit of %d is %d and is 0\n", n, last digit);
else if (last digit < 6 && last digit != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
return (0)
}
