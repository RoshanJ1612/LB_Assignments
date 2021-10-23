    /*1. Write Java program which accept String from user and display 
below pattern.
Input : Hello
Output : 	H       #       #       #       #
			H       e       #       #       #
			H       e       l       #       #
			H       e       l       l       #
			H       e       l       l       o
			H       e       l       l       #
			H       e       l       #       #
			H       e       #       #       #
			H       #       #       #       #
		 
		 */

import java.util.*;

class a39q5
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		String Input;

		System.out.println("Enter the string");
		Input = sobj.nextLine();

		Pattern pobj = new Pattern();
		pobj.DisplayPattern(Input);
	}
}

class Pattern
{
	public void DisplayPattern(String Str)
	{
		int i = 0, j = 0,k = 1;
		int m = (2*Str.length())-1;
		int n = 0;
		
		int c = 0;

		for(i = 0; i < m; i++)
		{

			if(i ==Str.length()+n)
			{
				n++;
				k =c-1;
			}
			c=0;

			for(j = 0; j < Str.length(); j++)
			{

				
				if(j < k)
				{
					c++;
					System.out.print(Str.charAt(j)+"\t");
				}
				else
				{
					System.out.print("#\t");
				}
			}k++;

			System.out.println("");
		}
	}

}