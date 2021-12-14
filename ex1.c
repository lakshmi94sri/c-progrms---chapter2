#include <stdio.h>
void unsignedrange(size_t bytes)
{
	int bits = 8 * bytes;
	
	unsigned int end = ((1 << (bits -1))-1) + (1<<(bits-1));

	printf("%u to %u\n", 0,end);
}
void signedrange(size_t bytes)
{
        int bits = 8 * bytes;

        int start = -(1<<(bits-1));
        int end = 1 << (bits -1);

        printf("%d to %d\n", start,end);
}


	
	
	int main()
{
	signedrange(sizeof(char));
	printf("signed range of char\n");
	unsignedrange(sizeof(unsigned char));
        printf("unsigned range of char:\n ");

	 signedrange(sizeof(short int));
        printf("signed range of short int:\n ");
        unsignedrange(sizeof(unsigned short int));
        printf("unsigned range of short int:\n ");

	signedrange(sizeof(int));
        printf("signed range of  int:\n ");
        unsignedrange(sizeof(unsigned  int));
        printf("unsigned range of  int:\n ");

	signedrange(sizeof(long int));
        printf("signed range of long int:\n ");
        unsignedrange(sizeof(unsigned long int));
        printf("unsigned range of long  int:\n ");

	return 0;
}




