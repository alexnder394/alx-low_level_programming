#include <stdio.h>
#include "main.h"

/**
* postitive_or_negative - check if num is psve or ngve
* @n: integer to be tested
*/
void positive_or_negative(int i)
{

if (i > 0)
printf("%d is positive\n", i);
else if (i == 0)
printf("%d is zero\n", i);
else
printf("%d is negative\n", i);
}

