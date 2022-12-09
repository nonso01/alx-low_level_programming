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

int six = 6;
int five = 5;
int zero = 0;
if (n == zero)
printf("Last digit of %d is %d and is %d\n", n, lastNum, zero);
else
if (n > 5)
printf("Last digit of %d is %d and is greater than %d\n", n, lastNum, five);
else
if (n < 6)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNum);
else
return (0);
}
