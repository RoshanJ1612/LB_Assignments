/*1.Write a program which accept string from user and count number of 
capital characters.
Input : “Marvellous Multi OS”
Output : 4
*/

#include<stdio.h>


int ChkCapital(char *Str)
{
	int iCnt=0;
	while(*Str!='\0')
	{
		if(*Str>='A' && *Str<='Z')
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
	
	iRet=ChkCapital(Arr);
	
	
	printf("Count of capital is %d\n",iRet);
	return 0;
	}