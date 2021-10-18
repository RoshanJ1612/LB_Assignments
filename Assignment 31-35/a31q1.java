/*1.Write a Java program which accept string from user and count 
number of capital characters.
Input : "Marvellous Multi OS"
Output : 4*/

import java.util.*;

public class a31q1
{
	public static void main(String str[])
	{
		Scanner sObj = new Scanner(System.in);

		int iRet = 0;

		System.out.println("Enter the string");
		String Str =  sObj.nextLine();

		StringDemo sDObj = new StringDemo();

		iRet = sDObj.ChkCapital(Str);

		System.out.println("The count of capital letter is "+iRet);

	}
}

class StringDemo
{
	public int ChkCapital(String Str)
	{
		int iCnt = 0, iCount = 0;
		for(iCnt = 0; iCnt < Str.length(); iCnt++)
		{
			if(Str.charAt(iCnt) >= 65 && Str.charAt(iCnt) <= 90)
			{
				iCount++;
			}
		}
		return iCount;
	}
}