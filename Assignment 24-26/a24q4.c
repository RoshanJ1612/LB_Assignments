/*4.Write a program which accept string from user and accept one
character. Return index of last occurrence of that character.
Input : “Marvellous Multi OS”
M
Output : 11
Input : “Marvellous Multi OS”
W
Output : -1
Input : “Marvellous Multi OS”
e
Output : 4*/

#include<stdio.h>
int LastChar(char *str,char ch)
{
	int iLength=0;
	int iRes=0;
	
	
	while(*str != '\0')
	{
		iLength++;
		str++;
	}
	
	for(int iCnt=iLength;iCnt>0;iCnt--)
	{
		
	
		if(*str==ch)
		{
			iRes=iCnt;
			break;
		}
		
		str--;
	}
return (iRes);	
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
	 iRet=LastChar(Arr,ch);
	printf("Last occurance of Input charcter is at index %d",iRet);
	return 0;
}