#include <stdio.h>

/**
 * main - print the lower case alphabet
 * in reverse
 * Return: 0 success
 */

int main(void)
{
	int lower_case = 'z';

	while(lower_case >= 'a')
	{
		putchar(lower_case);
		lower_case--;
	}
	putchar('\n');
	return (0);
}
