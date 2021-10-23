/*1. Write Java program which accept String from user and display 
below pattern.
Input : Hello
Output : H e l l o 
		 H e l l o 
		 H e l l o 
		 H e l l o
*/

import java.util.*;

class a38q1
{
	public static void main(String[] args)
	{

		Scanner sobj = new Scanner(	System.in);
		String Input;

		System.out.println("Enter the string");
		Input =sobj.nextLine();

		Pattern pobj = new Pattern();

		pobj.DisplayPattern(Input);
	}
}

class Pattern
{
	public void DisplayPattern(String Str)
	{
		int i = 0, j = 0;

		for(i = 0; i < (Str.length()-1); i++)
		{
			for(j = 0; j < Str.length(); j++)
			{
				System.out.print(Str.charAt(j)+"\t");
			}
			System.out.println("");
		}
	}










}