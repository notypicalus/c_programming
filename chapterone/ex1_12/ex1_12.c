#include <stdio.h>

/* Write a program that prints its input one word per line */

int main()
{
    int c;
    c = getchar();
    while (c != EOF)
    {
	if (c == ' ' )
	{
	    putchar('\n');
	}
	else
	{
	    putchar(c);
	}
	c = getchar();
    }
}
