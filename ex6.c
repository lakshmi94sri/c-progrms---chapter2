#include <stdio.h>
unsigned setbits(int x,int p,int n,int y);
int main()
{
	int x =89;
	int y=12;
	int n=4;
	int p=4;
	printf("%d\n",setbits(x,p,n,y);
	return 0;
}
unsigned setbits(int x,int p,int n,int y)
{
	return ((~(~0 << n) & y) << (p + 1 - n) | (~(~(~ 0 << n) << (p + 1 - n)) & x));
}
