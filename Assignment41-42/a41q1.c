/*1. Write application which accept file name from user and open that file in read mode.
Input : Demo.txt
Output : File opened successfully.*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0;
	char fname[20];
	
	printf("Enter the file name\n");
	scanf("%s",fname);
	
	fd = open(fname,O_RDONLY);

	if(fd == -1)
	{
		printf("Unable to open the file\n");
	}
	else
	{
		printf("File successfully opened\n");
	}
		
	close(fd);
	
	return 0;
}