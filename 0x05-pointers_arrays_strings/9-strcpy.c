#include <stdio.h>
/**
 * _strcpy - copy whole string from src to dest
 * @dest: Destination string
 * @src: Source string
 * Return: dest
 */
char *_strcpy(char *dest, const char *src)
{
int i;

i = 0;
while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
