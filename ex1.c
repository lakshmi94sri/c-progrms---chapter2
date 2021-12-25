#include <stdio.h>

int unsignedrange(size_t bytes)
{
        int bits = 8 * bytes;
	unsigned int end = ((1<<(bits-1))-1) + (1<<(bits-1));
	printf("%u to %u\n",0,end);
}

int signedrange(size_t bytes)
{
        int bits = 8 * bytes;
        int start  = -(1<<(bits-1));
	int end = (1<<(bits-1))-1;
        printf("%d to %d\n",start,end);
}

int main()
{
        signedrange(sizeof(char));
	printf("signed rangeof char\n",signedrange);
       unsignedrange(sizeof(unsigned char));
        printf("unsigned rangeof char\n",unsignedrange);
        signedrange(sizeof(short int));
        printf("signed rangeof shortint\n",signedrange);
       unsignedrange(sizeof(unsigned short int));
        printf("unsigned rangeof shortint\n",unsignedrange);
	signedrange(sizeof(int));
        printf("signed rangeof int\n",signedrange);
       unsignedrange(sizeof(unsigned int));
        printf("unsigned rangeof int\n",unsignedrange);
	signedrange(sizeof(long int));
        printf("signed rangeof longint\n",signedrange);
       unsignedrange(sizeof(unsigned long int));
        printf("unsigned rangeof longint\n",unsignedrange);





	return 0;
}
