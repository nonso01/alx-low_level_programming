#include <stdlib.h>
#include <stdio.h>
/**
*main - returns the whole alphabet excepys e&q
*Return: 0
*/
int main(void)
{
char arr[] = {'a', 'z'};
for (; arr[0] <= arr[1]; ++arr[0])
{
if (arr[0] != 'e' && arr[0] != 'q')
continue;
putchar(arr[0]);
}

return (0);
}
