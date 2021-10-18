/*4. Write a java program which accept string from user and check 
whether it contains vowels in it or not.
Input : "marvellous"
Output : TRUE
Input : "Demo"
Output : TRUE
Input : "xyz"
Output : FALSE
*/

import java.util.*;
public class a31q4
{
	public static void main(String[] args)
	{

		Scanner sObj = new Scanner(System.in);
		StringDemo sDobj = new StringDemo();

		Boolean bRet = false;
		System.out.println("Enter the string");
		String Input = sObj.nextLine();

		bRet = sDobj.ChkVowel(Input);

		if(bRet==true)
		{
			System.out.println("Given string contains Vowels");
		}
		else
		{
			System.out.println("Given string does not contains Vowels");
		}
	}
}

class StringDemo
{
	public boolean ChkVowel(String Str)
	{
		boolean bRes = false;
		int iCnt = 0;

		for(iCnt = 0; iCnt < Str.length(); iCnt++)
		{
			if(Str.charAt(iCnt) == 'A'||Str.charAt(iCnt) == 'E'||Str.charAt(iCnt) == 'I'||Str.charAt(iCnt) == 'O'||Str.charAt(iCnt) == 'U'||
				Str.charAt(iCnt) == 'a'||Str.charAt(iCnt) == 'e'||Str.charAt(iCnt) == 'i'||Str.charAt(iCnt) == 'o'||Str.charAt(iCnt) == 'u')
			{
				bRes = true;
				break;
			}
		}
		return bRes; 
	}

}
