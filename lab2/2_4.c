#include <stdio.h>

struct pkt 
	{
    	char ch1;
    	char ch2[3];  
    	char ch3;
	};

int main() 
	{
    	struct pkt myStruct;

    	printf("Enter a number: ");
    	scanf(" %c%2s%c", &myStruct.ch1, myStruct.ch2, &myStruct.ch3);

    	printf("Content of each member of the structure:\n");
    	printf("ch1: %c\n", myStruct.ch1);
    	printf("ch2: %s\n", myStruct.ch2);
    	printf("ch3: %c\n", myStruct.ch3);

    	printf("Original number: %c%s%c\n", myStruct.ch1, myStruct.ch2, myStruct.ch3);

    	return 0;
	}

