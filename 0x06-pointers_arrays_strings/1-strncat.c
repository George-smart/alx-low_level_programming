#include "main.h"

/**
 * _strncat - concatenation function.
 *@dest: destination parameter.
 *@src: source text.
 *@n: number of char to concatenate.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
    int dlen = 0, i;

    while (dest[dlen])
        dlen++;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[dlen] = src[i];
        dlen++;
    }

    dest[dlen + n + 1] = '\0';
    return dest;
}
