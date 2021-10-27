/*5. Write Java program which accept number of rows and number of columns 
from user and display below pattern.
Input : iRow = 3 iCol = 4
Output : 1 2  3  4
	 5 6  7  8 
	 9 10 11 12
	 */

import java.util.*;

class a36q5
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
		int iNo = 1;
		for(i = 0; i < iRow; i++)
		{
			
			for(j = 0; j < iCol; j++)
			{
				System.out.print(iNo+"\t");
				iNo++;
			
			}
			System.out.println("");
		}
	}
}
