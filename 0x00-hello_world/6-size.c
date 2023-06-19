#include <stdio.h>

/**
 * main - main funtion
 *
 * Return: 0 on success
 */

int main(void)
	long int num;
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int (4 bytes): %lu byte(s)\n", sizeof((int32_t)num));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
