#include <stdio.h>

int  inv(int x, int p, int n)
{

	int  inv = (~(~0 << p)) ^ ~(~0 << p-n);
	return ((x & ~inv) | (~x & inv));
}

int main()
{
	int x=59;
	int p=2;
	int n=3;
	printf("%d\n", inv(x, p, n));
	return 0;
}
