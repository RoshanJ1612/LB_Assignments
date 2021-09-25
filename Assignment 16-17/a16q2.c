/* Accept the N number from the user and display all such elements which are divisible by 5

Input: N	: 6
	 Elements: 85	66	3	93	88	90
Output: 85	90
*/


#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
	int iCnt =0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%5)==0)
		{
			printf("%d\t",Arr[iCnt]);
	}
	}
}
int main()
{
	int iSize=0,iCnt=0;
	int *p=NULL;
	
	printf("Enter the size of array\n");
	scanf("%d",&iSize);
	
	if(iSize<0)										//Updator
	{
		iSize=-iSize;
	}
	
	p=(int*)malloc(iSize * sizeof(int));
	if(p==NULL)
	{
		printf("Unable to allocate the memory\n");
		return -1;
	}
	
	printf("Enter the elements of the array\n");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("enter the element%d\t",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	Display(p,iSize);
	free(p);
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
