#include <stdio.h>


void first(void) __attribute__ ((constructor));


/**
* first - prints a sentence prior to the main function
* function has been  executed
*/

void first(void)

{

	printf("You're beat! and yet, you must allow,\n");

	printf("I bore my house upon my back!\n");
}
