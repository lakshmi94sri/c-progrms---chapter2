#include <stdio.h>
int bitcount(int x)
{
	int c = 0;
	if(x != 0)
	{
		x &= (x-1);
	       c++;
}
    return c;
    }

int main()
{
printf("%d\n",bitcount(38));
return 0;
		}
