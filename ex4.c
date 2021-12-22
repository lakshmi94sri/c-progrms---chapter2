#include <stdio.h>
#include <string.h>
void squeez(char str1, char  str2);
int main()
{
	char str1[100]="priya";
	 char  str2[100]  ="sriram";
	printf("before squeezing %s\n",str1);
	squeez(str1,str2);
	printf("after squeezing %s\n",str1);
}
void squeez(char  str1, char  str2)
{
	int i,j,l=0;
	int len1=strlen(str1);
	int len2=strlen(str2);
	
	for(i=0;i<len1;i++)
	{
		for(j=0;j<len2;j++)
		{
			if(str1[i] == str2[j])
			{
				break;
			}
		}
		if(j == strlen(str2))
		{
			str1[l++] = str1[i];
		}
	}
	str1[l]='\0';
}
