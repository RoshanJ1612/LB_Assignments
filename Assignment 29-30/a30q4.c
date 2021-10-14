/*4. Write a program which accept one number , two positions from user and 
check whether bit at first or bit at second position is ON or OFF.
Input : 10 3 7
Output : TRUE*/
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool ChkBit(UINT iNo,UINT iPos1,UINT iPos2)
{
if(((iStart<1)||(iStart>32))&&((iEnd<1)||(iEnd>32)))
	{
		return -1;
	}
	
	UINT iMask1=0x00000001;
	UINT iMask2=0x00000001;
	iMask1= ((iMask1)<<(iPos1-1));
	iMask2= ((iMask2)<<(iPos2-1));
	UINT iResult1=iNo & iMask1;
	UINT iResult2=iNo & iMask2;


	
	if(iResult1==iMask1||iResult1==iMask2)
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
	UINT iBit1 = 0;
	UINT iBit2 = 0;
	bool bRet = false;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	
	printf("Enter the first Position\n");
	scanf("%d",&iBit1);
	
	printf("Enter the second Position\n");
	scanf("%d",&iBit2);
	
	bRet=ChkBit(iValue,iBit1,iBit2);
	
	if(bRet==true)
	{
		printf("True\n");
	}
	else 
	{
		printf("false\n");
	}
	
	return 0;
}
