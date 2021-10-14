/*3. Write a program which accept one number from user and check whether 
9th or 12th bit is on or off.
Input : 257
Output : TRUE
*/
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
	
	
	UINT iMask1=0x00000100;
	UINT iMask2=0x00000800;
	
	UINT iResult1=iNo & iMask1;
	UINT iResult2=iNo & iMask2;


	
	if(iResult1==iMask1||iResult1==iMask2)
	{
		return true;
	}
	else 
	{
		return false;
	}
}






int main()
{
	UINT iValue = 0;
	bool bRet = false;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	bRet=ChkBit(iValue);
	
	if(bRet==true)
	{
		printf("True\n");
	}
	else 
	{
		printf("false\n");
	}
	
	return 0;
}
	