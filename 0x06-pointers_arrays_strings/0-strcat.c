#include "main.h"
/**
 * *_strcat - concatenation string
 *@*dest: copying destination.
 *@*src: copying item.
 * Return: char item
 */

 char *_strcat(char *dest, char *src)
 {
    int n = 0, i;

    while (dest[n])
        n++;

    for (i = 0; src[i] != 0; i++)
    {
        dest[n] = src[i];
        n++;
    }

    dest[n] = '\0';
    return (dest);
 }
