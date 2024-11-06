#include <stdio.h>

int isLittleEndian() 
	{
    	unsigned int test = 1;
    	char *byte = (char*)&test;
    	return (byte[0] == 1);
	}


void printBytes(unsigned int number) 
	{
    	unsigned char *byte = (unsigned char*)&number;
    	for (int i = 0; i < sizeof(number); i++) 
    		{
        	printf("Byte %d: 0x%02X\n", i, byte[i]);
    		}
	}

unsigned int convertEndianness(unsigned int number) 
	{
    	return ((number >> 24) & 0xFF) |
    		((number >> 8) & 0xFF00) |
    		((number << 8) & 0xFF0000) |
    		((number << 24) & 0xFF000000);
	}
int main() 
	{
    	if (isLittleEndian())
    		{
        	printf("The host machine is Little Endian.\n");
    		} 
    	else 
    		{
        	printf("The host machine is Big Endian.\n");
    		}

    	unsigned int number;
    	printf("Enter a 4-byte (32-bit) number: ");
    	scanf("%u", &number);

    	printf("Original number in memory:\n");
    	printBytes(number);

    
    	unsigned int convertedNumber = convertEndianness(number);

    	printf("Number after endianness conversion:\n");
    	printBytes(convertedNumber);

    	return 0;
	}

