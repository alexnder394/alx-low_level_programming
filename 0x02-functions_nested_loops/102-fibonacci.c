#include <stdio.h>

/**
* main -print the first 50 Fibonacci numbers, starting with 1 & 2
*
* Return: Always 0.
*/
int main(void)
{
	int count;
	int num1, num2, sum;

	num1 = 0;
	num2 = 0;
	for (count = 0; count < 50; count++)
	{
		sum = num1 + num2;
		printf("%lu", sum);
		num1 = num2;
		num2 = sum;
		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

return (0);
}
