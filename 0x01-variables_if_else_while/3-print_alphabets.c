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
		putchar(letter);

	for (letter = 65; letter < 91; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
