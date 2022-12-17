#include <stdio.h>

/**
 * main - Entry Point
 * a program that prints all possible different combinations
 * of three digits,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 48; num1 <= 55; num1++)
	{
		for (num2 = 49; num2 <= 56; num2++)
		{
			for (num3 = 50; num3 <= 57; num3++)
			{
				if (num1 != num2 && num2 > num1 && num1 != num3 && num3 > num2)
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);
					if (num1 < 55 || num2 < 56 || num3 < 57)
					{
						putchar(44);
						putchar(' ');
					}
				}
			}
		}
	}


	putchar('\n');

	return (0);
}
