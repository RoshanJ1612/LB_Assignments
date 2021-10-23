/*1. Write Java program which accept String from user and display 
below pattern.
Input : Hello
Output : h
h       e
h       e       l
h       e       l       l
h       e       l       l       o
h       e       l       l
h       e       l
h       e
h
*/

import java.util.*;

class a38q5
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
		int i = 0, j = 0, n = 0,k =1;
		int m = (2*(Str.length())-1);

		for(i = 0; i < m; i++)
		{
			if(i==Str.length()+n)
			{
				n++;
				k=j-1;
			}
			for(j = 0; j < k && j < Str.length(); j++)
			{
				System.out.print(Str.charAt(j)+"\t");
			}
			System.out.println("");
			k++;
			
		};
	}
}