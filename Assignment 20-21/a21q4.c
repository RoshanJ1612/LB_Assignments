/*4. Accept Character from user and check whether it is special symbol 
or not (!, @, #, $, %, ^, &, *).
Input : %
Output : TRUE
Input : d
Output : FALSE
*/

#include<stdio.h>
#include<stdbool.h>

bool  ChkSymbol(char ch)
{
	
	if((ch>='0' && ch<='9')||(ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
	{
		return false;
	}
	else
	{
		return true;
	}
		

}

int main()
{
	char ch='\0';
	bool bRet=false;
	
	printf("Enter the input\n");
	scanf("%c",&ch);
	
	bRet=ChkSymbol(ch);
	
	if(bRet==true)
	{
		printf("It is special charcter\n");
	}
	else
	{
		printf("It is not special charcter\n");
	}
	return 0;
}