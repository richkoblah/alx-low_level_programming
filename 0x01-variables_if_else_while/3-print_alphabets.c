#include <stdio.h>
/**
 *main- Serves as the entry point for the program
 *
 *Return: By default returns 0 if successful
*/


int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);
	putchar('\n');

	return (0);
}
