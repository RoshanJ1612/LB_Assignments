//Accept the n number from the user and return the frequncy of 11 present in it. 
/*Input: N: 7
		Elements: 85	66	3	80	11	88 11
  Output: 2
  
*/


#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iLength)
{
	
	int iCnt = 0, iCount = 0;
	for(iCnt = 0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==11)
		{
			iCount++;
		}
		
	}
		
		return iCount;
}

int main()
{
	int iSize= 0,iCnt=0,iRet=0;
	int *p =NULL;
	
	printf("Enter the size of array\n");
	scanf("%d",&iSize);
	
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
	iRet=Frequency(p,iSize);
	
	printf("Frequency is %d",iRet);
	free(p);
	return 0;
}
		
		