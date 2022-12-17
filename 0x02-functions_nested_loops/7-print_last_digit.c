#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - print last digit of a number
 *
 * @n: an integer number
 *
 * Return: 1 and print + if > 0, 0 if n = 0 and -1 if n < 0
 *
 */
int print_last_digit(int n)
{
	if (n % 10 < 0)
	{
		_putchar((n % 10)*-1 + '0');
		return ((n % 10) * -1);
	}
	_putchar((n % 10) + '0');

		return (n % 10);
}
