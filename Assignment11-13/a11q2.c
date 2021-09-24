//Accept the nuber of rows and coloumns from the user and print below pattern 

// Input:- Row=4   Coloumn=4
//Output: A       B       C       D
//		  a       b       c       d
//		  A       B       C       D
// 		  a       b       c       d

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int i = 0, j = 0;
	char Ch1  ='\0';
	char Ch2 ='\0';
	for(i = 1;i<=iRow;i++)
	{
		for(j = 1,Ch1='A',Ch2='a';j<=iCol;j++)
			if((i%2)==0)
			{
				printf("%c\t",Ch2);
				Ch2++;
			}
			else
			{
				printf("%c\t",Ch1);
				Ch1++;
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