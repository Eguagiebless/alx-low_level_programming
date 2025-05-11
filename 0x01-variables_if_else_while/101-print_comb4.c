#include <stdio.h>

/**
 * main - prints all possible different
 * combinations of three digits
 * Return: 0 success
 */

int main(void)
{
	int second_number, third_number;
	int first_number = '0';

	while (first_number <= '7')
	{
		second_number = first_number + 1;

		while (second_number <= '8')
		{
			third_number = second_number + 1;
			
			while (third_number <= '9')
			{
				putchar(first_number);
				putchar(second_number);
				putchar(third_number);
				
				if (first_number != '7' || second_number != '8' || third_number != '9')
				{
					putchar(',');
					putchar(' ');
				}
				third_number++;
			}
			second_number++;
		}
		first_number++;
	}
	putchar('\n');
	return (0);
}
