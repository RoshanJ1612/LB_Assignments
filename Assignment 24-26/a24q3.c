/*4.Write a program which accept string from user and accept one
character. Return index of last occurrence of that character.
Input : “Marvellous Multi OS”
M
Output : 0
Input : “Marvellous Multi OS”
W
Output : -1
Input : “Marvellous Multi OS”
e
Output : 4*/

#include<stdio.h>
int FirstChar(char *str,char ch)
{
	int iCount=0;
	int iRes=0;
	
	
	
	while(*str!='\0')
	{
		iCount++;
		if(*str==ch)
		{
			iRes=iCount;
			break;
		}
		
		str++;
		
	}
	
	
return (iRes-1);	
}


int main()
{
	char Arr[50];
	int iRet=0;
	char ch='\0';
	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr); 
	
	printf("Enter character\n");
	scanf(" %c",&ch);
	
	 iRet=FirstChar(Arr,ch);
	 
	printf("First occurance of Input charcter is at index %d",iRet);
	return 0;
}