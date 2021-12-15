#include <stdio.h>
int bitsc(int x)
{
	int c=0;
	while(x != 0)
	{
		x &= (x-1);
	c++;
	}
	return c;
}
	int main()
{
	printf("%d\n",bitsc(10));
	return 0;
}
