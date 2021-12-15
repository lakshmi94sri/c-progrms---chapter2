#include <stdio.h>
#include <string.h>
int main()
{
	char str1[100]="priya";
	char str2[100]="sriram";
	char *getloc;
	getloc=strpbrk(str1,str2);
	if(getloc)
	{
		printf("first location character is %c\n",*getloc);
	}
	else 
	{
		printf("nothing");
	}
	return(0);
}
