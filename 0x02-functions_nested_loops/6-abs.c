#include <unistd.h>
#include "main.h"

/**
 * _abs - finds absloute val of a number
 *
 * @n: an integer number
 *
 * Return: 1 and print + if > 0, 0 if n = 0 and -1 if n < 0
 *
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
