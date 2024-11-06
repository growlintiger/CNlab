#include <stdio.h>

int main() 
	{
    	int num;
    	printf("Enter the number:");
    	scanf("%d",&num);

    	char byte1 = (num & 0xFF);
    	char byte2 = ((num >> 8) & 0xFF);
    	char byte3 = ((num >> 16) & 0xFF);
    	char byte4 = ((num >> 24) & 0xFF);

    	printf("Byte 1: %x\n", byte1);
    	printf("Byte 2: %x\n", byte2);
    	printf("Byte 3: %x\n", byte3);
    	printf("Byte 4: %x\n", byte4);

    	return 0;
	}
