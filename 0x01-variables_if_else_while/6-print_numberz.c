#include <stdio.h>

/**
 * main - prints all single digit numbers
 * of base 10
 * Return: 0 success
 */

int main(void)
{
	int base_ten = 48;

	while (base_ten <= 57)
	{
		putchar(base_ten);
		base_ten++;
	}
	putchar('\n');
	return (0);
}
