#include <stdio.h>
/**
 * puts2 - prints every other character of a string
 * @str: string
 */
void puts2(char *str)
{
int i;
int len;

i = 0;
len = 0;
while (str[i++])
{
len++;
}
for (i = 0; i < len; i++)
{
if (i % 2 == 0)
_putchar(str[i]);
}
}
