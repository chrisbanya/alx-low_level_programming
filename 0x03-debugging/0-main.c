#include "main.h"
#include <stdio.h>

/**
 * main - tests function that prints if integer is positive or negative
 * @n: the integer to check
 * Return: void
 */
void positive_or_negative(int n)
{
	if (n > 0)
	printf("%d is positive\n", n);
	else if (n < 0)
	printf("%d is negative\n", n);
	else
	printf("%d is zero\n", n);
}

int main(void)

{
	int i;

	i = 0;
	positive_or_negative(i);
	return (0);
}
