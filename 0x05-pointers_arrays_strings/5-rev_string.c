#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
int len;
int i;
char tmp;

len = 0;
i = 0;
while (s[i++])
len++;

for (i = len - 1; i >= len / 2; i--)
{
tmp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = tmp;
}
}
