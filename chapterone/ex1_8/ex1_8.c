#include <stdio.h>

int main(){
    int c, nl, nt, ns;

    nl = nt = ns = 0;
    while ((c = getchar() != EOF)){
	if (c == '\n')
	    ++nl;
	if (c == '\t')
	    ++nt;
	if (c == ' ')
	    ++ns;
    }
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", ns, nt, nl);
}
