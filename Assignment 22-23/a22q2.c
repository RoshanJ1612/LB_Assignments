/*2. Write a program which accept string from user and count number of 
small characters.
Input : “Marvellous”
Output : 9*/

#include<stdio.h>


int ChkSmall(char *Str)
{
	int iCnt=0;
	while(*Str!='\0')
	{
		if(*Str>='a' && *Str<='z')
		{	
			iCnt++;
		}
	Str++;
}
	return iCnt;
}


int main()
{
	char Arr[50];
	int iRet=0;
	
	printf("Enter the string\n");
	scanf("%[^\n]s",&Arr);
	
	iRet=ChkSmall(Arr);
	
	
	printf("Count of small letters is %d\n",iRet);
	return 0;
	}