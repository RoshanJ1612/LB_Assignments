/*2. Write Java program which accept String from user and display 
below pattern.
Input : Hello
Output : H e l l o
 		 H e l l
 		 H e l 
 		 H e
 		 H
*/


import java.util.*;

class a38q2
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
		int i =0, j =0, k= Str.length();

		for(i = 0; i < Str.length(); i++)
		{
			for(j = 0; j < k; j++)
			{
				System.out.print(Str.charAt(j)+"\t");
			}
			System.out.println("");
			k--;
		}
	}

}