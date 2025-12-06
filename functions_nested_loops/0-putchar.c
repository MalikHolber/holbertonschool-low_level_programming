#ifndef MAIN_H
#define MAIN_H

/* Prototype for _putchar, required for usage */
int _putchar(char c);

/* Prototype for your function */
void print_alphabet(void);

#endif /* MAIN_H */


#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet, followed by a new line.
 *
 * It uses a while loop and only calls _putchar twice: once inside the loop
 * to print each character, and once after the loop to print the newline.
 *
 * Prototype: void print_alphabet(void);
 */
void print_alphabet(void)
{
    char letter = 'a'; /* Initialize a character variable to the start of the alphabet */

    /* Loop from 'a' to 'z' */
    while (letter <= 'z')
    {
        /* First call to _putchar: prints the current letter */
        _putchar(letter);
        letter++;
    }

    /* Second call to _putchar: prints the newline character */
    _putchar('\n');
}
