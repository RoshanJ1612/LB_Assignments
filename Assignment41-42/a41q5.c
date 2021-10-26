/*4. Write application which accept file name from user and display size of file.
Input : Demo.txt
Output : File size is 56 bytes.*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	int fd = 0, iLength = 0;
	char Arr[100];
	char fname[10];
	
	printf("Enter the name of file\n");
	scanf("%s",fname);
	
	printf("Enter the String\n");
	scanf(" %s",Arr);
	
	fd = open(fname,O_RDWR | O_APPEND);
	
	
	if(fd == -1)
	{
		printf("Unable to open file\n");
	}
	write(fd,Arr,strlen(Arr));
	
	close(fd);
	
	return 0;
}