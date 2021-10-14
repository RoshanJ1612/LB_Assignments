/*5. Write a program which accept one number from user and range of 
positions from user. Toggle all bits from that range.
Input : 897 9 13
Toggle all bits from position 9 to 13 of input number ie 879.*/
  
  #include<stdio.h>

typedef unsigned int UINT;

UINT toggleBit(UINT iNo, UINT iStart,UINT iEnd)
{
	if(((iStart<1)||(iStart>32))&&((iEnd<1)||(iEnd>32)))
	{
		return -1;
	}
	

	UINT iResult = 0;
	int i = 0;
	UINT iMask=0x00000000;
	
	
	for(i=iStart;i<=iEnd;i++)
	{
		UINT iTemp=0x00000001;
		iMask=iMask|iTemp<<(i-1);
	}
	
	iResult = iNo ^ iMask;

	
		return iResult;
	
}
	
int main()
{
	UINT iValue = 0;
	UINT iBit1 = 0;
	UINT iBit2 = 0;
	UINT iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	printf("Enter the Position\n");
	scanf("%d",&iBit1);
	
		
	printf("Enter the Position\n");
	scanf("%d",&iBit2);
	
	iRet=toggleBit(iValue,iBit1,iBit2);
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
	