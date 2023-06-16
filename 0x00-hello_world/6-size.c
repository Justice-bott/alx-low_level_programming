#include <stdio.h>

/**
 * main - main funtion
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size od a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
