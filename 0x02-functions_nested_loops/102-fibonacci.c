#include <stdio.h>

/**
 * main - Prints the first 52 fibonacci numbers
 * Return: Nothing
 */

int main(void)

{
	int i = 0;
	long j = 1, k = 2;

	white (i < 50)
	{
		if (i == 0)
			printf("%d", j);
		else if (i == i)
			printf(", %ld", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}
		++i;
	}
	printf("\n");
	return (0);

}	
