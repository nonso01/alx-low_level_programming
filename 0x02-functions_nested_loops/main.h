
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
/**
*_l_alpha- lower case letters
*Return: abc...
*/
void _l_alpha(void)
{
char start = 'a';
char end = 'z';
for (; start <= end; start++)
_putchar(start);
}
