#include <stdio.h>
#define lim 100
int main()
{
	int  i=0,c;
	char s[lim];
         while(i<lim-1)
	 {
              if((c=getchar()) != '\n') 
	      {
                   if(c != EOF) 
		   {
                         s[i] = c;
                   }
              }
              i++;
         }
}
