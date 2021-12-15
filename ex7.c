#include <stdio.h>
unsigned invert(int x,int p,int n)
{
	int inv=(~(~0<<p)) ^ ~(~0<<p-n);
	return ((x  & ~inv) | (~x & inv));
}
int main()
{
	int x = 90;
	int p= 4;
	int n=3;
	printf("%d\n",invert(x,p,n));
	return 0;
}
