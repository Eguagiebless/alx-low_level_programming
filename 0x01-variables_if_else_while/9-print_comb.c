#include <stdio.h>

/**
 * main - prints all possible combination
 * of a single digit followed by a comma and space
 */

int main(void)
{
	int numbers = '0';

	while (numbers <= '9')
	{
		putchar(numbers);
		putchar(',');
		putchar(' ');
		numbers++;
	}
	putchar('\n');
	return (0);
}
