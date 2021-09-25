//Accept the nuber of rows and coloumns from the user and print below pattern 

// Input:- Row=6   Coloumn=6
// Output:- 
//1       2       3       4       5       6
//1       2                               6
//1               3                       6
//1                       4               6
//1                               5       6
//1       2       3       4       5       6


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	
	if(iRow!=iCol)
	{
		printf("Invalid input\n");
		return;
	}
	int i = 0, j =0;
		for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i==1 || i==iRow || j==1||j==iCol||i==j)
			{
				printf("%d\t",j);
			}
				else
				{
					printf("\t");
				}
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