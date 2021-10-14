/*3. Write a program which accept one number from user and toggle 7th bit of 
that number. Return the modified number.
 
Input = 137
Output = 201
*/


#include<stdio.h>
typedef unsigned int UINT;

UINT ToogleBit(int iNo)
{
	UINT iMask = 0;
	UINT iResult = 0;
	
	iMask=0x00000040;
	iResult= iNo ^ iMask;
	
	return iResult;
}
	
int main()
{
	UINT iValue = 0;
	UINT iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet = ToogleBit(iValue);
	printf("Modified number is %d",iRet);
	
	return 0;
}