#include "main.h"

/**
* _isdigit - Returns 1 if c is number, 0 otherwise
* @c: character
* Return: 0 or 1
*/

int _isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	return (1);
}
