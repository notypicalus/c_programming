/* Write a program to remove the trailing blanks and tabs from each input line
 * and to delete entirely blank lines
 */

#include <stdio.h>
#define MAXLINE 1000

int main(void)
{
	int len;
	char line[MAXLINE];

	while((len = mgetline(line, MAXLINE)) > 0)
		if(removetail(line) > 0)
			printf("%s", line);
	return (0);
}

int mgetline(char s[], int lim)
{
	int i, c;

	for(i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	if(c == '\n')
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return i;
}

/* To remove trailing blanks, tabs. Go to end and proceed backwards removing */

int removetrail(char s[])
{
	int i;

	for(i = 0; s[i] != '\n'; i++)
	;
	i--;

	for(i > 0; ((s[i] == ' ' ) || (s[i] == '\t')); --i)
	; /* Removing the trailing blanks and tabs */
	if(i > 0) /* Non Empty Line */
	{
		i++;
		s[i] = '\n';
		i++;
		s[i] = '\0';
	}
	return i;
}
