/*2. Write a java program which accept string from user and count 
 number of small characters.
 Input :  "Marvellous"
 Output :  9*/

import java.util.*;
public class a31q2
{
public static void main(String Str[])
{
	Scanner sObj = new Scanner(System.in);
		StringDemo sDObj = new StringDemo();

	int iRet = 0;
	
	System.out.println("Enter the String");
	String Input = sObj.nextLine();

	iRet = sDObj.ChkSmall(Input);
 
	System.out.println("Count of small Charcter is "+iRet);
	
}
}

class StringDemo
{
	public int ChkSmall(String Str)
	{
		int iCnt = 0, iCount = 0;

		for(iCnt = 0; iCnt < Str.length(); iCnt++)
		{
			if(Str.charAt(iCnt) >= 97 && Str.charAt(iCnt) <= 122)
			{
				iCount++;
			}
		}
		return iCount;
	}
}