/*2. Write a program which accept two numbers from user and display position 
of common ON bits from that two numbers.
Input : 10 15 (1010 1111)
Output : 2 4*/

#include<stdio.h>

typedef unsigned int UINT;

void DisplayPos(UINT iNo1,UINT iNo2)
{
	
	UINT iNo= 0;
	UINT iBit=0;
	UINT iCount = 0;

	
	iNo = iNo1 & iNo2;
	printf("Common bits are at : ");
	while(iNo != 0)
	{
		iBit= iNo & 1;
		
		iCount++;
		if(iBit == 1)
		{
			printf("%d \t",iCount);
		}
		iNo=iNo >> 1;
	}
	
}

int main()
{
	UINT iValue1 = 0;
	UINT iValue2 = 0;
	UINT iRet = 0;
	
	printf("Enter the first number\n");
	scanf("%d",&iValue1);
	
	printf("Enter the second number\n");
	scanf("%d",&iValue2);
	
	DisplayPos(iValue1,iValue2);
	
	
	
	
	
	return 0;
}
	