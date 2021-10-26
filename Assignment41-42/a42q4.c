/*3. Write a program which accepts file name from user and count number of 
white spaces from that file.
Input : Demo.txt
Output : Number of white spaces are 13*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int  CountChar(char fName[],char ch)
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
			if(Buffer[i] == ch)
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
	char cValue;

	
	printf("Enter the file name\n");
	scanf("%s",Name);
	    
	printf("Enter the character\n");
	scanf(" %c",&cValue);
	
	
	iAns =  CountChar(Name,cValue);
	printf("Frequency of %c is : %d",cValue,iAns);
	
	return 0;
}