/*1. Write a program which accepts file name from user and count number of 
capital characters from that file.
Input : Demo.txt
Output : Number of capital characters are 23*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int CountCapital(char fName[])
{
	int fd = 0, iCnt = 0, iRet = 0,i = 0;
	char Buffer[5];
	
	fd =open(fName,O_RDONLY);
		
	if(fd==-1)
	{
		printf("Unable to  open file\n");
		return -1;
	}
	
	while((iRet = read(fd,Buffer,5))!=0)
	{
		for(i = 0; i < iRet ;i++)
		{
			if(Buffer[i] >= 'A'&& Buffer[i] <='Z')
			{
				iCnt++;
			}
		}
	}
	return iCnt;
	close(fd);
}

int main()
{
	 
	char Name[30];
	int iAns = 0;

	
	printf("Enter the file name\n");
	scanf("%s",Name);
	
	
	iAns = CountCapital(Name);
	printf("Count of Capital Letters is : %d",iAns);
	return 0;
}