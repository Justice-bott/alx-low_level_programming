#include <unistd.h>

/**
* _putchar - write the character c to stdout
* @c: The character to print
* Return: On success 1.
* on error, -1 is returned, and errno is set appropraitely
*/

int _putchar(char c)

{
	return (write(1, &c, 1));
}
