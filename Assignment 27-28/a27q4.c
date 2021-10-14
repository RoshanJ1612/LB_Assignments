//Write a program and and check whether 7th, 8th, and 9th bit is on or off.


#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool ChkBit(int iNo)
{
	UINT iMask = 0;
	UINT iResult = 0;
	
	iMask =0x000001c0;
	
	iResult = iNo & iMask;
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

	bRet = ChkBit(iValue);
	
	if(bRet==true)
	{
		printf("7th, 8th and 9th bits are ON\n");
	}
	else
	{
		printf("Bits are OFF\n");
	}
	
	return 0;
}
	 