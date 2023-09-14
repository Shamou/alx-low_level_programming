#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: The integer to be printed
*/

void print_number(int n)
{
	unsigned int n1;

	/*first check if its negative*/
	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}

	/*print the first few digit*/
	if (n1 / 10)
		print_number(n1 / 10);

	/*print the last digit*/
	_putchar((n1 % 10) + '0');
}
