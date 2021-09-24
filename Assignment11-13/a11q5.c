//Accept the nuber of rows and coloumns from the user and print below pattern 

// Input:- Row=4   Coloumn=4
// Output:- 
//A       B       C       D
//A       B       C       D
//A       B       C       D
//A       B       C       D


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
		int i = 0, j = 0;
		int iNo = 1;
		
		for(i=1;i<=iRow;i++)
		{
			for(j=1;j<=iCol;j++,iNo++)
			{
				printf("%d\t",iNo);
			}
			printf("\n");
		}
		
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter the number of rows\n");
	scanf("%d",&iValue1);
	
	printf("Enter the number of coloumns\n");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}