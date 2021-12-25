#include <stdio.h>
int rightrot(int x,int n)
{
       for (; n > 0; n--)
	
	return (x >> 1) | ~(~0U >> (x & 1));
}
int main()
{
	int x=12;
	int n=5;
	printf("%d\n",rightrot(8,5));
	return 0;
}
