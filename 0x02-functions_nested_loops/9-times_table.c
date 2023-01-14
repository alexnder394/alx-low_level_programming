#include <unistd.h>
#include "main.h"

/**
 * times_table - print the 9 time table
 *
 *
 *
 * Return: void
 *
 */
void times_table(void)
{
	int h, m, res;

	for (h = 0; h <= 9; h++)
	{
		_putchar('0');

		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');
			res = h * m;
			if (res <= 9)
				_putchar(' ');
			else
				_putchar((res / 10) + '0');

			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}
