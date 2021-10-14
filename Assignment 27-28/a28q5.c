/*5. Write a program which accept one number from user and on its first 4 
bits. Return modified number.
Input : 73
Output : 79

*/


#include<stdio.h>
typedef unsigned int UINT;

UINT OnBit(int iNo)
{
	UINT iMask = 0;
	UINT iResult = 0;
	
	iMask=0x0000000f;
	iResult= iNo | iMask;
	
	return iResult;
}
	
int main()
{
	UINT iValue = 0;
	UINT iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet = OnBit(iValue);
	printf("Modified number is %d",iRet);
	
	return 0;
}