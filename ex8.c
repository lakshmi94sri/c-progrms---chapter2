#include <stdio.h>
unsigned rightrot(int x,int n)
{
	for(n=0;n>=0;n--)
		return ((x>>1) | ~(~0U >> (x & 1)));
					}
	int main()
{
	int x=67;
	int n=4;
	printf("%d\n", rightrot(x,n));
	return 0;
}
