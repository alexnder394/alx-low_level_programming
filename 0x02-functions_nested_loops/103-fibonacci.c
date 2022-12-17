#include <stdio.h>

/**
* main -print the first 50 Fibonacci numbers, starting with 1 & 2
*
* Return: Always 0.
*/
int main(void)
{
	unsigned long num1, num2, sum;
	float Even_sum;

	num1 = 0;
	num2 = 1;

	while (1)
	{
		sum = num2 + num1;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			Even_sum += sum;

		num1 = num2;
		num2 = sum;
	}
	printf("%.0f\n", Even_sum);

return (0);
}
