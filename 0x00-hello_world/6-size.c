#include <stdio.h>
#include <inttypes.h>
/**
 * main - Prints the size of various type based onthe computer it is compiled
 * Return: Always 0.
 */

int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of float: %lu byte(s)\n", sizeof(float));

	return (0);
}
