/*Write a program which accept one number and position from user and 
check whether bit at that position is on or off. If bit is one return TURE 
otherwise return FALSE.
Input : 10 2
Output : TRUE*/

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool ChkBit(UINT iNo, UINT iPos)
{
	if((iPos<1)||(iPos>32))
	{
		return false;
	}
	

	UINT iResult = 0;
	
	UINT iMask=0x00000001;
	iMask= iMask<<(iPos-1);
	
	iResult = iNo&iMask;

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
	UINT iBit = 0;
	bool bRet = false;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	printf("Enter the Position\n");
	scanf("%d",&iBit);
	
	bRet=ChkBit(iValue,iBit);
	if(bRet==true)
	{
		printf("Bit is ON\n");
	}
	else
	{
		printf("Bit is OFF\n");
	}
	return 0;
}
	