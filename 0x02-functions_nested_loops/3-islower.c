#include "main.h"


/**
 * _islower - Check for lowercase character
 * @c: The character to be check3d
 * Return: 1 for lowercase character or 0 for anything else
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{

		return (1);
	}
	return (0);
}
