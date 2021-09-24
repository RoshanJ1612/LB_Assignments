//Accept the nuber of rows and coloumns from the user and print below pattern 

// Input:- Row=3   Coloumn=5
//Output: A       A       A       A       A
//		  B       B       B       B       B
//		  C       C       C       C       C

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int i = 0, j = 0;
	for(i=iRow;i>=1;i--)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%d\t",i);
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