/*1.Write a program which accept one number from user and count number of 
ON (1) bits in it without using % and / operator.
Input : 11
Output : 3
*/

#include<stdio.h>
typedef unsigned int UINT;

UINT CntOne(int iNo)
{
		UINT iCount = 0;
		UINT iBit = 0;
	while(iNo != 0)
	{
		iBit=((iNo&1));
		iNo=iNo>>1;
		if(iBit==1)
		{
			iCount++;
	}
	}
	return iCount;
}

int main()
{
	UINT iValue = 0;
	UINT iResult = 0;
	
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	 
	iResult = CntOne(iValue);
	
	printf("Count of ON bits is %d",iResult);
	
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
