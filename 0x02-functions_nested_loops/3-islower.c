#include <unistd.h>
#include "main.h"

/**
 * _islower - checks if character c is lowercase
 *
 * @c: an integer value of a character
 *
 * Return: 1 if true, 0 if false
 *
 */
int _islower(int c)
{
	if (c >= 97)
		return (1);
	return (0);
}
