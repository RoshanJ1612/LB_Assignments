/*1. Write a program which displays ASCII table. Table contains symbol, 
Decimal, Hexadecimal and Octal representation of every member from 
0 to 255.*/


#include<stdio.h>
void Display()
{
	printf("ASCII Table\n");
	printf("-----------------------------------------\n");
	printf("Decimal\tHexadecimal\tOctal\tcharacter\n");
	printf("-----------------------------------------\n");
	
	for(int i=0;i<=255;i++)
	{
		printf("%d\t%x\t%o\t%c\n",i,i,i,i);
	}
}

int main()
{
	Display();
	
	return 0;
}