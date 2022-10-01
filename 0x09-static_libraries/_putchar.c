#include <unistd.h>
/**
 * _putchar - print function
 *
 * return: 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
