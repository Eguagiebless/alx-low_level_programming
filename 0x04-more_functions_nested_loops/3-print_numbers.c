#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    print_numbers();
    return (0);
}
void print_numbers(void)
{
    char digit;

    for (digit = '0'; digit <= '9'; digit++)
    {
        _putchar(digit);
    }
    _putchar('\n');
}

