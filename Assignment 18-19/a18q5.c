//Accept the n number from the user and return the product  of odd numbers
/*Input : N : 6
Elements :15 66 3 70 10 88
Output : 45

Input : N : 6
Elements :44 66 72 70 10 88
Output : 0
*/


#include<stdio.h>
#include<stdlib.h>
int OddProduct(int Arr[],int iLength)
{
	
	int iCnt = 0, iProduct = 1,iCount=0;
	for(iCnt = 0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2!=0)
		{
			iProduct=iProduct * Arr[iCnt];
		}
		else
		{
			iCount++;
		
		}
	}
		if(iCount==iLength)
		{
			return 0;
		}
		else 
		{
		return iProduct;
	}}

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
	iRet=OddProduct(p,iSize);
	printf("Product of odd number is %d",iRet);
	free(p);
	return 0;
}
		
		