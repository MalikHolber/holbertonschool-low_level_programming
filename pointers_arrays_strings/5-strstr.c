#include <stdio.h>

/**
 * _strstr - Write a function that locates a substring.
 *
 * @haystack: This is the input string
 * @needle: This is a find to locate in the string
 *
 * Return: a pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
    // Return NULL if needle is an empty string
    if (*needle == '\0')
        return haystack;

    while (*haystack)
    {
        char *temp_haystack = haystack;
        char *temp_needle = needle;

        // Compare characters one by one
        while (*temp_needle && *temp_haystack == *temp_needle)
        {
            temp_haystack++;
            temp_needle++;
        }

        // If we have reached the end of needle, it means we found the substring
        if (*temp_needle == '\0')
            return haystack;

        haystack++;  // Move to the next character in haystack
    }
    return NULL;  // Return NULL if no match is found
}
