#include <stdio.h>
/**
 * puts_half - prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
int i;
int len;

i = 0;
len = 0;
while (str[i++])
len++;

for (i = len / 2; i < len; i++)
putchar(str[i]);
putchar('\n');
}
