#include "main.h"
#include <stdio.h>
/**
* print_rev - Prints a string in reverse.
* @s: The string to be printed.
*/
void print_rev(char *s)
{
int len;
int index;

len = 0;
index = 0;
while (s[index++])
len++;

for (index = len - 1; index >= 0; index--)
putchar(s[index]);

putchar('\n');
}
