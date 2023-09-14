#include "main.h"

/**
 * print_square - print a square, followed by new line;
 *
 * @size: is the size of the square
 *
 * Return: Always 0 (Success)
*/

void print_square(int size)
{
	if(size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_Putchar('#');
			}
			_putchar('\n');
		}
	}
}
