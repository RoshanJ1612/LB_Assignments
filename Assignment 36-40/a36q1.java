/*1. Write Java program which accept number of rows and number of columns 
from user and display below pattern.
Input : iRow = 4 iCol = 4
Output : A B C D
 		 A B C D
 		 A B C D
 		 A B C D*/

import java.util.*;

class a36q1
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		int iValue1 = 0, iValue2 = 0;

		System.out.println("Enter the number of rows");
		iValue1 = sobj.nextInt();

		System.out.println("Enter the number of Coloumns");
		iValue2 = sobj.nextInt();

		pattern pobj = new pattern();

		pobj.DisplayPattern(iValue1, iValue2);


		
	}
}

class pattern
{
	public void DisplayPattern(int iRow, int iCol)
	{
		int i = 0, j = 0;
		for(i = 0; i < iRow; i++)
		{
			char ch ='A';
			for(j = 0; j < iCol; j++)
			{
				System.out.print(ch+"\t");
				ch ++;
			}
			System.out.println("");
		}
	}
}