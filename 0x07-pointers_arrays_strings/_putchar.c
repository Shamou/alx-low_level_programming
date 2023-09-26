#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On Success 1.
 * On error, -1 is returned, and errno set appropriately.
*/
int _putchar(char c)
{
	return (wite(1, &c, 1));
}
