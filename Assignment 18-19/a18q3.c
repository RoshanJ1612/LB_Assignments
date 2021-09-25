//Accept the n number from the user and accept one another number as NO,return the last occurance of the number.
/*Input: N: 7
		No: 66
		Elements: 85	66	3	66	11	88 11
  Output: 3  
*/


#include<stdio.h>
#include<stdlib.h>

int Occurance(int Arr[],int iLength,int iNumber)
{
	
	int iCnt = 0, iCount = 0;
	
	for(iCnt = iLength;iCnt>0;iCnt--)
	{
		if(Arr[iCnt]==iNumber)
		{
			return iCnt;
		}
		
	}
		
		return -1;
}

int main()
{
	int iSize= 0,iCnt=0,iRet=0,iNo=0;
	int *p =NULL;
	
	
	printf("Enter the size of array\n");
	scanf("%d",&iSize);
	
	printf("Enter the Number\n");
	scanf("%d",&iNo);
	
	
	p=(int*)malloc(iSize * sizeof(int));
	
	if(p==NULL)
	{
		printf("Unable to allocate the memory\n");
		return -1;
	}
	
	printf("Enter the elements\n");
	for(iCnt = 0;iCnt<iSize;iCnt++)
	{
		printf("Enter the element%d\t",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	iRet=Occurance(p,iSize,iNo);
	if(iRet==-1)
	{
		printf("There is no such number");
	}
	else
	{
		printf("last Occurance of number is %d",iRet);
	}
	free(p);
	return 0;
}
		
		