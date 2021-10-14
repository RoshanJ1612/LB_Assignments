/*1. Write a program which accept one number from user and off 7th bit of 
that number. Return the modified number.
 
Input = 79
Output = 15
*/


#include<stdio.h>
typedef unsigned int UINT;

UINT OffBit(int iNo)
{
	UINT iMask = 0;
	UINT iResult = 0;
	
	iMask=0xffffffbf;
	iResult= iNo & iMask;
	
	return iResult;
}
	
int main()
{
	UINT iValue = 0;
	UINT iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet = OffBit(iValue);
	printf("Modified number is %d",iRet);
	
	return 0;
}