/*1.Write a program which accept string from user and accept one 
character. Check whether that character is present in string or not.
Input : “Marvellous Multi OS”
e
Output : TRUE
Input : “Marvellous Multi OS”
W
Output : FALSE*/

#include<stdio.h>
#include<stdbool.h>

bool Check(char *,char );

int main()
{
	char ch = '\0';
	char Arr[20];
	bool bRet = false;
	int i = 0;
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr); 
	
	printf("Enter character\n");
	scanf(" %c",&ch); 
	
	bRet = Check(Arr,ch);
	if(bRet==true)
	{
		printf("Present ");
	}
	else
	{
		printf("Not present");
	}
	return 0;	
}
bool Check(char *Brr,char c)
{
	while(*Brr!='\0')
	{
		if(*Brr==c)
		{
			return true;
		}
		Brr++;
	}
	return false;
}