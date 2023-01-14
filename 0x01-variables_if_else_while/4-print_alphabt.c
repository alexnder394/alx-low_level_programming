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
	char letter;

	for (letter = 97; letter < 123; letter++)
	{
		if (letter == 101 || letter == 113)
			continue;
		else
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
