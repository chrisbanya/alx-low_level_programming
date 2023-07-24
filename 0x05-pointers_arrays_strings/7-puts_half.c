#include "main.h"

/**
 * puts_half - Prints the second  half of a string
 * @str: The input string
 *
 * Description: This function prints the second half of the string 'str'
 * If length of the string is odd, print the last n characters,
 * where n = (length_of_string - 1) / 2.
 *
 * Return; void
 */
void puts_half(char *str)

{
	int j = 0;
	int k;

	while (str[j] != '\0')
	{
	j++;
	}
	if (j % 2 == 1)
	{
	k = (j - 1) / 2;
	k += 1;
	}
	else
	{
	k = j / 2;
	}

	for (; k < j; k++)
	{
	_putchar(str[k]);
	}
	_putchar('\n');
}
