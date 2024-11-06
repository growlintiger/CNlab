#include<sys/socket.h>
#include<stdio.h>

int socket(int domain,int type,int protocol);

int main()
	{
	int sockfd1,sockfd2,sockfd3,sockfd4,sockfd5,sockfd6;
	
	sockfd1=socket(PF_INET,SOCK_STREAM,0);
	sockfd2=socket(PF_INET,SOCK_STREAM,0);
	sockfd3=socket(PF_INET,SOCK_STREAM,0);
	sockfd4=socket(PF_INET,SOCK_STREAM,0);
	sockfd5=socket(PF_INET,SOCK_STREAM,0);
	sockfd6=socket(PF_INET,SOCK_STREAM,0);
	
	printf("sockfd1:%d\n",sockfd1);
	printf("sockfd2:%d\n",sockfd2);
	printf("sockfd3:%d\n",sockfd3);
	printf("sockfd4:%d\n",sockfd4);
	printf("sockfd5:%d\n",sockfd5);
	printf("sockfd6:%d\n",sockfd6);
	}
