/*2. Write Java program which accept String from user and display 
below pattern.
Input : Hello
Output : H
		 H e 
		 H e l
		 H e l l
		 H e l l o
*/


import java.util.*;

class a38q3
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
		int i =0, j =0, k= 1;
  
		for(i = 0; i < Str.length(); i++)
		{
			for(j = 0; j < k; j++)
			{
				System.out.print(Str.charAt(j)+"\t");
			}
			System.out.println("");
			k++;
		}
	}

}