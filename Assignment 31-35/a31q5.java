/*5. Write a java program which accept string from user and display 
it in reverse order.
Input : "MarvellouS"
Output : "SuollevraM"*/

import java.util.*;
public class a31q5
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);
		StringDemo sDObj = new StringDemo();

		System.out.println("Enter the string");
		String Input = sObj.nextLine();

		sDObj.DisplayRev(Input);

	}

}

class StringDemo
{
	public void DisplayRev(String Str)
	{
		int iCnt = 0;
		{
			for(iCnt = Str.length()-1; iCnt >= 0 ; iCnt--)
			{
				System.out.print(Str.charAt(iCnt));
			}
		}

	}
}