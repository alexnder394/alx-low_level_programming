#include <stdio.h>

/**
 * main - Entry Point
 * a program that prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 48; num1 <= 56; num1++)
	{
		for (num2 = 49; num2 <= 57; num2++)
		{
			if (num1 != num2 && num2 > num1)
			{
				putchar(num1);
				putchar(num2);
				if (num1 < 56 || num2 < 57)
				{
					putchar(44);
					putchar(' ');
				}
			}
		}

	}

	putchar('\n');

	return (0);
}
