/* Accept N numbers from user and return the largest number.
Input : N : 6

Elements :85 66 3 66 93 88

Output : 93
*/


#include<stdio.h>
#include<stdlib.h>
int MaxElement(int Arr[],int iLength)
{
	int iMax=0;
	iMax=Arr[0];
	
	int iCnt = 0;
	for(iCnt = 0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]>iMax)
		{
			iMax=Arr[iCnt];
		
		}
	}
		return iMax;
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
	iRet=MaxElement(p,iSize);
	printf("Maximum number is %d",iRet);
	free(p);
	return 0;
}
		
		