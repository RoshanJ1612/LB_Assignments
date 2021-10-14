//Write the program which check whether the 5th and 18th bit is on or off.

#include<stdio.h>
#include<stdbool.h> 
typedef unsigned int UINT;

bool ChkBit(int iNo)
{
	UINT iMask = 0;
	UINT iResult = 0;
	iMask = 0x00020010;
	
	iResult = iNo & iMask;
	
	if(iResult == iMask)
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
		printf("5th and 18 th bit is ON\n");
	}
	else
	{
		printf("Bits are OFF\n");
	}
}
	