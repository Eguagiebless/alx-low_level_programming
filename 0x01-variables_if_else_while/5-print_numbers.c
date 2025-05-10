#include <stdio.h>

/**
 * main - prints all single digit of base 10
 * Return: 0 success
 */

int main(void)
{
	int base_ten = 0;

	while (base_ten < 10)
	{
		putchar(base_ten);
		base_ten++;
	}
	putchar('\n');
	return (0);
}
