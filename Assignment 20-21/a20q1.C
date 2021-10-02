/*1. Accept Character from user and check whether it is alphabet or not 
(A-Z a-z).
Input : F
Output : TRUE
Input : &
Output : FALSE
*/


#include<stdio.h>
#include<stdbool.h>

bool ChkAlphabet(char ch)
{
	
	if((ch>='a'&&ch<='z')||(ch>='A' && ch<='Z'))
	{
		return true;
	}
	return false;
		

}

int main()
{
	char ch='\0';
	bool bRet=false;
	
	printf("Enter the charcter\n");
	scanf("%c",&ch);
	
	bRet=ChkAlphabet(ch);
	
	if(bRet==true)
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}
	return 0;
}