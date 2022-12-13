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
*print_alphabet- lower case letters
*Return: abc...
*/
void print_alphabet(void);
{
char start[] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
for (; start[i] != '\0'; ++i)
_putchar(start[i]);

_putchar('\n');
}


/**
* print_alphabet_x10 - bla bla
*Return: 0
*/
void print_alphabet_x10(void)
{
char str[] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
int j = 0;
while (i < 10)
{
i++
while (str[j] != '\0')
{
_putchar(str[j]);
j++
}

}
_putchar('\n');
}

