#include <unistd.h>
#include "main.h"
/**
 * main - Entry Point
 *
 * Void
 */
void print_alphabet(void);
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        _putchar(c);
    }
    _putchar('\n');

    return;
}