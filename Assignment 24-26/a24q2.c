/*2.Write a program which accept string from user and accept one 
character. Return frequency of that character.
Input : “Marvellous Multi OS”
M
Output : 2
Input : “Marvellous Multi OS”
W
Output : 0*/

#include<stdio.h>

int Frequency(char*,char);

int main()
{
	char Arr[20];
	char ch = '\0';
	int iRet = 0,i = 0;;
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr); 
	
	printf("Enter character\n");
	scanf(" %c",&ch);
	
	iRet = Frequency(Arr,ch);
	printf("Frequency is %d",iRet);
	
	return 0;
}
int Frequency(char *Brr,char c)
{
	int iCnt = 0;
	while(*Brr!='\0')
	{
		if(*Brr==c)
		{
			iCnt++;
		}
		Brr++;
	}
	return iCnt;
}