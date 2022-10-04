#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a
 * parameter.
 * @str: An input pointer of the string to copy.
 * Return: Apointer to new string or NULL if it str is NULL
 */

char *_strdup(char *str)
{
    if (str == NULL)
        return (NULL);
        
    char *nstr; 
    nstr = malloc(sizeof(char) * 10);

    if (sizeof(nstr) != sizeof(str))
        return (NULL);
    else
    {
        nstr = str;
    }
    return (nstr);
}
