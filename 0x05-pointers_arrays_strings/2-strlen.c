#include "main.h"

/**
 * _strlen - swaps the values of two integers
 * @s: string
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
int len;
for (len = 0; *s != '\0'; len++)
{
s++;
}
return (len);
}
