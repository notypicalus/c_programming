/* Histogram of Frequency of different characters in input */
#include <stdio.h>
#define TNOCHAR 128

int main(void)
{
	int c, i, j;

	int character[TNOCHAR];

	for(i = 0; i < TNOCHAR; i++)
	{
	while((c = getchar()) != EOF)
		++character[c];
	for(i = 0; i < TNOCHAR; i++)
	{
		putchar(i);
		for(j = 0; j < character[i]; i++)
			putchar('*');
		putchar('\n');
	}

	}
	return (0);
}
