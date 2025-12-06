#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase,
 * followed by a new line after each sequence.
 *
 * This function uses a nested loop structure:
 * - The outer loop iterates 10 times (for the 10 repetitions).
 * - The inner loop iterates from 'a' to 'z' to print the alphabet.
 * - The _putchar('\n') is used once at the end of the inner loop to
 * print the required newline character.
 */
void print_alphabet_x10(void)
{
    int count;
    char letter;

    // Outer loop: Repeats the alphabet printing 10 times
    for (count = 0; count < 10; count++)
    {
        // Inner loop: Prints the alphabet from 'a' to 'z'
        for (letter = 'a'; letter <= 'z'; letter++)
        {
            // First use of _putchar: Prints the current letter
            _putchar(letter);
        }
        // Second use of _putchar: Prints a newline character after each repetition
        _putchar('\n');
    }
}
