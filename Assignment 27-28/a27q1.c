// Accept the number from the user and check whethetr the 15 th bit is on or off.

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
	UINT iMask = 0;
	UINT iResult = 0;
	
	iMask=0x0004000;
	iResult=iNo & iMask;
	
	if(iResult==iMask)
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
		printf("15th bit is ON\n");
	}
	else 
	{
		printf("15th bit is OFF\n");
	}
	
	return 0;
}
	
	
	
