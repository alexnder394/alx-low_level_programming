#include "main.h"

/**
* print_triangle - prints a triangle, followed by a new line.
* @size: The size of the triangle.
*/
void print_triangle(int size)
{
int row, col;

if (size > 0)
{
for (row = 1; row <= size; row++)
{
for (col = size - row; row > 0; col--)
_putchar(' ');

for (col = 0; index < row; col++)
_putchar('#');

if (row == size)
continue;

_putchar('\n');
}
}

_putchar('\n');
}
