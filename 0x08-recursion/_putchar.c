#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: The charactar to print
 *
 * Return: On success 1.
 * O error, -1 is returned, and erron is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
