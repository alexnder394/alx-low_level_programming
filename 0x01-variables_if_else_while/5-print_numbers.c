#include <stdio.h>
/**
 * main - Entry Point
 *  a program that prints all single digit numbers of base 10 from 0
 *
 * end by a new line
 *
 * Return: Always 0. (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);

	putchar('\n');

	return (0);
}
