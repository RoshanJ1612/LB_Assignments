/*2. Write application which accept file name from user and create that file.
Input : Demo.txt
Output : File created successfully*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>

int main()
{
	int fd = 0;
	char fname[20];
	
	printf("Enter the file name\n");
	scanf("%s",fname);
	
	fd =creat(fname,0777);

	if(fd == -1)
	{
		printf("Unable to create the file\n");
	}
	else
	{
		printf("File successfully created\n");
	}
		
	
	return 0;
}