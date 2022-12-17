#include <stdio.h>
/**
 * main - Entry Point
 *  a program that prints all single digit numbers of base 10 from 0
 *
 * using only 'putchar', and end by a new line
 *
 * Return: Always 0. (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
