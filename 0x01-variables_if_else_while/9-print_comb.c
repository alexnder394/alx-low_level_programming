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
	int letter;

	for (letter = 48; letter <= 57; letter++)
	{
		putchar(letter);
		if (letter != 57)
		{
			putchar(44);
			putchar(' ');
		}

	}

	putchar('\n');

	return (0);
}
