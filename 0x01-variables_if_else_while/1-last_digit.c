#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - print the last digit of int n
*Return: 0
*/
int main(void)
{
int n, lastNum;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastNum = n % 10;

int six = 6, five = 5 , zero = 0;
if (n == zero)
printf("Last digit of %d is %d and is %d\n", n, lastNum, zero);
else
if (n > 5)
printf("Last digit of %d is %d and is greater than %d\n", n, lastNum, five);
else
if (n < 6)
printf("Last digit of %d is %d and is less than %d and not %d\n", n, lastNum, six, zero);
else
return (0);
}