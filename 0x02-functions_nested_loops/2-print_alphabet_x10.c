#include <unistd.h>
#include "main.h"
/**
 * main - Entry Point
 *
 * void
 */
void print_alphabet_x10(void);
{
    char c;
    int i = 10;

    while (i < 10)
    {
        for (c = 'a'; c <= 'z'; c++)
        {
            _putchar(c);
        }
        _putchar('\n');
    }

    return;
}