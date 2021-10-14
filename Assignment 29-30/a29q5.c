/*5. Write a program which accept one number from user and toggle contents 
of first and last nibble of the number. Return modified number. (Nibble is a 
group of four bits)*/
#include<stdio.h>

typedef unsigned int UINT;

UINT toggleBit(UINT iNo)
{
	
	

	UINT iResult = 0;
	
	 UINT iMask=0xf000000f;
	
	iResult = iNo ^ iMask;

	
		return iResult;
	
}
	
int main()
{
	UINT iValue = 0;
	
	UINT iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	

	iRet=toggleBit(iValue);
	
		printf("Modified value is %d\n",iRet);
	
	return 0;
}
	