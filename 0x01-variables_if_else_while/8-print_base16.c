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

	for (letter = 48; letter <= 57; letter++)
		putchar(letter);

	for (letter = 97; letter <= 102; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
