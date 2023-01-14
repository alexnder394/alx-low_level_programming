#include <stdio.h>
/**
 * _atoi - convert a string to an integer.
 * @s: Destination string
 * Return: integer
 */
int _atoi(char *s)
{
unsigned int res;
int sign;
int i;

res = 0;
sign = 1;
i = 0;

do {
if (s[i] == '-')
sign *= -1;

else if (s[i] >= '0' && s[i] <= '9')
res = res * 10 + (s[i] - '0');

else if (res > 0)
break;
} while (s[i++]);

return (res *sign);
}
