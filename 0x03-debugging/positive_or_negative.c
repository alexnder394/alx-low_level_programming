#include <stdio.h>
#include "main.h"

/**
* postitive_or_negative - check if num is psve or ngve
* @n: integer to be tested
*/
void positive_or_negative(int n)
{

if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
}

