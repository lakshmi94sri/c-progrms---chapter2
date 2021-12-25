#include <stdio.h>
#include <string.h>
int main()
{
	char s1[100] = "sri";
	char s2[100] = "ram";
        char *  getloc;
	getloc = strpbrk(s1,s2);
	if(getloc)
	{
		printf("%c\n",*getloc);
	}
	return(0);
}
