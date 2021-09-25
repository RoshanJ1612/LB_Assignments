/*
4. Accept N numbers from user and display all such numbers which contains
3 digits in it.
Input : N : 6
Elements :8225 665 3 76 953 858

Output : 665 953 858
*/


#include<stdio.h>
#include<stdlib.h>
void Digits(int Arr[],int iLength)
{
	
	int iTemp = 0;
	int iCnt = 0;
	for(iCnt = 0;iCnt<iLength;iCnt++)
	{
		int iDigit = 0;
		iTemp = Arr[iCnt];
		while(Arr[iCnt]!=0)
		{
			iDigit++;
		Arr[iCnt]=Arr[iCnt]/10;
		}
		if(iDigit==3)
		{
			printf("%d\t",iTemp);
		}	
	}
	
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
	Digits(p,iSize);
	
	free(p);
	return 0;
}
		
		