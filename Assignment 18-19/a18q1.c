//Accept the n number from the user and accept one another number as NO,check whether NO is present in it or not.
/*Input: N: 7
		No: 66
		Elements: 85	66	3	80	11	88 11
  Output: Number is present
*/


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Frequency(int Arr[],int iLength,int iNumber)
{
	
	int iCnt = 0, iCount = 0;
	
	for(iCnt = 0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNumber)
		{
			return true;
		}
		
	}
		
		return false;
}

int main()
{
	int iSize= 0,iCnt=0,iRet=0,iNo=0;
	int *p =NULL;
	bool bRet=false;
	
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
	
	bRet=Frequency(p,iSize,iNo);
	if(bRet==true)
	{
	printf("Number is present");
	}
	else
	{
		printf("number is absent");
	}
	free(p);
	return 0;
}
		
		