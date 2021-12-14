#include <stdio.h>
int main()
{
	char str[100];
	int c,i,lim = 100;
	while((1<lim-1))
	{
		if((c=getchar()) == EOF)
			break;
		else if(c == '\n')
			str[i++]=c;
	}
	str[i]='\0';
	return 0;
}
