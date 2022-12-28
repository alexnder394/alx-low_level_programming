#include "main.h"

/**
 * _isupper - Returns 1 if c is uppercase, 0 otherwise
 * @c: character
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c < 65 || c > 90)
		return (0);
	return (1);

}
