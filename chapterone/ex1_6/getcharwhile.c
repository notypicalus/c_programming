#include <stdio.h>

int main()
{
    char ch;

    while (ch != '\n')
    {
	putchar(ch);

	ch = getchar();
    }
    putchar(ch);
    return (0);
}
