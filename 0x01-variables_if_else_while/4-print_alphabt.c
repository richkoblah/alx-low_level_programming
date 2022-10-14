#include <stdio.h>
/**
 *main- Serves as the entry point for the program
 *
 *Return: By default returns 0 if successful
*/

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
