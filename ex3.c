#include <stdio.h>
#include <ctype.h>
unsigned long htoi(const char s[]);
int main()
{
	printf("%ld\n",htoi("0xFA9C"));
	return 0;
}
unsigned long htoi(const char s[])
{
	unsigned long n = 0;
	for(int i=0; s[i] != '\0'; i++)
	{
		int c = tolower(s[i]);
		if(c == ' ' && tolower(s[i++]) == 'X')
			i++;
		else if(c >= '0' && c <= '9')
			n = 16 * n +(c - '0');
		else if(c >= 'a' && c <= 'f')
			n = 16 * n + (c - 'a' +10);
	}
	return n;
}

