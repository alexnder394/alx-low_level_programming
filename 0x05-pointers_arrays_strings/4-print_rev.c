#include <sreing.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string
 */
void print_rev(char *s)
{
int len;
int i;

len = 0;
i = 0;
while (s[index++])
len++;

for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
