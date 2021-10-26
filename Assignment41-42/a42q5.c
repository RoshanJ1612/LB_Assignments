/*5. Write a program which accepts file name and one count from user and read 
that number of characters from starting position.
Input : Demo.txt 12
Output : Display first 12 characters from Demo.txt*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

void DisplayChar(char fName[],int iCnt)
{
	int fd = 0;
	int Arr[iCnt];
	
	
	fd =open(fName,O_RDONLY);
		
	if(fd==-1)
	{
		printf("Unable to  open file\n");
		return;
	}
	
	read(fd,Arr,iCnt);
	
	printf("Data from the file is: \n");
	write(1,Arr,iCnt);
	close(fd);
}

int main()
{
	 
	char Name[30];
	int iCount = 0;

	
	printf("Enter the file name\n");
	scanf("%s",Name);
	    
	printf("Enter the count\n");
	scanf(" %d",&iCount);
	
	
	 DisplayChar(Name,iCount);

	
	return 0;
}