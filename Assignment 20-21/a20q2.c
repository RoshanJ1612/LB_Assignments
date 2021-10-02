/*2. Accept Character from user and check whether it is capital or not 
(A-Z).
Input : F
Output : TRUE
Input : d
Output : FALSE
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char ch)
{

	if(ch>='A' && ch<='Z')
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
	
	bRet=ChkCapital(ch);
	
	if(bRet==true)
	{
		printf("It is Capital\n");
	}
	else
	{
		printf("It is not capital\n");
	}
	return 0;
}