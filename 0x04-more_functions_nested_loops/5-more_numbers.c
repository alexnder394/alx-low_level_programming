#include "main.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14
* Return: nothing
*/
void more_numbers(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		int i;

		i = 0;
		while (i < 15)
		{
			if (i < 10)
				_putchar(i + '0');
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			i++;
		}
	_putchar('\n');
	}
}
