#include "main.h"

/**
 * _strcat - concatenation function.
 *@s1: first param to compare with.
 *@s2: second param. to compare with.
 * Return: int.
 */

int _strcmp(char *s1, char *s2)
{
    int n, i;

    for (i = 0; i < s1[i], s1[i] != '\0'; ++i)
    {
        for (n = 0; n < s2[n], s2[n] != '\0'; ++n)
        {
            if (s1[i] > s2[n])
                return (1);
            else if (s1[i] < s2[n])
                return (-1);
            else
                return (0);

        }
    }

    return (0);
}
