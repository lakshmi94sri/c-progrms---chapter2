#include <stdio.h>
unsigned setbits(int x,int p,int n,int y)
{
	return ((~(~0<<n) &y) <<(p+1-n) | (~(~(~0<<n) <<(p+1-n))&x));
}
int main()
{
	int x=100;
	int y=12;
	int p=4;
	int n=4;
	printf("%u\n",setbits(x,y,p,n));
	return 0;
}
