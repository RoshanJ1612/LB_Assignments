/*Write a program which accept the number from the user and off
   the 7 th and 10th bit  of that number if it is on.Return the modified number.
 
Input = 577
Output = 1
*/


#include<stdio.h>
typedef unsigned int UINT;

UINT OffBit(int iNo)
{
	UINT iMask = 0;
	UINT iResult = 0;
	
	iMask=0xfffffdbf;
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