#include <stdio.h>

int main(){
    int c, nl, nw, nc, state;

    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
	if (c == '\n')
	    ++nl;
    printf("%d\n", nl);
}
