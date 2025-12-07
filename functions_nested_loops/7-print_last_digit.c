#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        while (n <= 98)
        {
            _putchar('0' + n % 10); // sadə versiya
            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
            n++;
        }
    }
    else
    {
        while (n >= 98)
        {
            _putchar('0' + n % 10);
            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
            n--;
        }
    }
    _putchar('\n');
}
