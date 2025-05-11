#include <stdio.h>

/**
 * main - print all hexadecimal digit(0-9 and A-F)
 * Return: 0 success
 */

int main(void)
{
	char numbers = '0';
	char alphabet = 'A';

	while (numbers <= '9')
	{
		putchar(numbers);
		numbers++;
	}
	while (alphabet <= 'F')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}

