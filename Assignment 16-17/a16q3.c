/*Acdept the N number from the user and display such number that are even and disible by 5

Input: N	:5
	Elements: 85	45	12	90	20
	
Output: 90	20
*/
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	int iCnt = 0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)==0 && (Arr[iCnt]%5)==0)
		{
			printf("%d\t",Arr[iCnt]);
		}	
		
	}
	
}
int main()
{
	int iSize = 0,iCnt=0;
	int *p =NULL;
	printf("Enter the size of array\n");
	scanf("%d",&iSize);
	
	p=(int*)malloc(iSize*sizeof(int));
	if(p==NULL)
	{
		printf("Unable to allocate the memory\n");
		return -1;
	}
	
	printf("Enter the element of the array\n");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter the element%d\t",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	Display(p,iSize);
	free(p);
	return 0;
}
