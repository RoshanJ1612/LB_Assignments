/*3. Accept Character from user and check whether it is digit or not 
(0-9).
Input : 7
Output : TRUE
Input : d
Output : FALSE*/


#include<stdio.h>
#include<stdbool.h>

bool  ChkDigit(char ch)
{
	
	if(ch>='0' && ch<='9')
	{
		return true;
	}
	return false;
		

} 

int main()
{
	char ch='\0';
	bool bRet=false;
	
	printf("Enter the input\n");
	scanf("%c",&ch);
	
	bRet=ChkDigit(ch);
	
	if(bRet==true)
	{
		printf("It is Digit\n");
	}
	else
	{
		printf("It is not Digit\n");
	}
	return 0;
}