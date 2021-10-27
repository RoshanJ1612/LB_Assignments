/*2. Write Java program which accept number of rows and number of 
columns from user and display below pattern.
Input : iRow = 4 iCol = 3
Output : 1 2 3
	 1 2 3
	 1 2 3 
	 1 2 3
*/

import java.util.*;

class a37q2
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		int iValue1 = 0, iValue2 = 0;

		System.out.println("Enter the number of rows");
		iValue1 = sobj.nextInt();

		System.out.println("Enter the number of coloumns");
		iValue2 = sobj.nextInt();

		Pattern pobj = new Pattern();

		pobj.DisplayPattern(iValue1,iValue2);

		
	}

}

class Pattern
{
	public void DisplayPattern(int iRow, int iCol)
	{
		int i = 0, j = 0;
		for(i = 0; i < iRow; i++)
		{
			for(j= 1; j <= iCol; j++)
			{
				System.out.print(j+" ");
			}
			System.out.println("");
		}	
	}

}
