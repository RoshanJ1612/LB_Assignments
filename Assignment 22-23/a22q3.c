/*3. Write a program which accept string from user and return 
difference between frequency of small characters and frequency of 
capital characters.
Input : “MarvellouS”
Output : 6 (8-2)*/

#include<stdio.h>


int Count(char *Str)
{
	int icCnt=0;
	int isCnt=0;
	while(*Str!='\0')
	{
		if(*Str>='a' && *Str<='z')
		{	
			isCnt++;
		}
		else if(*Str>='A' && *Str<='Z')
		{	
			icCnt++;
		}
	Str++;
}
	return isCnt-icCnt;
}


int main()
{
	char Arr[50];
	int iRet=0;
	
	printf("Enter the string\n");
	scanf("%[^\n]s",&Arr);
	
	iRet=Count(Arr);
	if(iRet<0)
	{
		iRet=-iRet;
	}
	
	
	printf("Difference is %d\n",iRet);
	return 0;
	}