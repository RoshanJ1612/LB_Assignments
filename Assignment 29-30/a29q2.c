/* Write a program which accept one number and position from user and off 
that bit. Return modified number.
Input : 10 2
Output : 8*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
	if((iPos<1)||(iPos>32))
	{
		return -1;
	}
	

	UINT iResult = 0;
	
	UINT iMask=0x00000001;
	iMask= ~(iMask<<(iPos-1));
	
	iResult = iNo & iMask;

	
		return iResult;
	
}
	
int main()
{
	UINT iValue = 0;
	UINT iBit = 0;
	UINT iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	printf("Enter the Position\n");
	scanf("%d",&iBit);
	
	iRet=OffBit(iValue,iBit);
	if(iRet==-1)
	{
		printf("Please give the correct position\n");
	}
	else
	{
		printf("Modified value is %d\n",iRet);
	}
	return 0;
}
	