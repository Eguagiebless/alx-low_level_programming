#include <stdio.h>

/**
 * main - program that prints all possible
 * different combinations of two digits
 * Return: 0 success
 */

int main(void)
{
    int first_digit = '0';
    int second_digit;

    while (first_digit <= '8')
    {
        second_digit = first_digit + 1;
        while (second_digit <= '9')
        {
            putchar(first_digit);
            putchar(second_digit);
            if (first_digit != '8' || second_digit != '9')
            {
                putchar(',');
                putchar(' ');
            }
            second_digit++;
        }
        first_digit++;
    }
    putchar('\n');
    return (0);
}
