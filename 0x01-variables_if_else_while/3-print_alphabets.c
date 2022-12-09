#include <stdio.h>
/**
*main -  lowercase uppercase
*Return: 0
*/
int main(void)
{
char a = 'a';
char z = 'z';
char A = 'A';
char Z = 'Z';
for (; a <= z; ++a)
putchar(a);
for (; A <= Z; ++A)
putchar(A);
printf("\n");
return (0);
}
