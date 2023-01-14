#include <stdio.h>
/**
 * _strcpy - copy whole string from src to dest
 * @dest: Destination string
 * @src: Source string
 * Return: dest
 */
char *_strcpy(char *dest, const char *src)
{
while (*src)
*dest++ = *src++;
*dest = '\0';
return (dest);
}
