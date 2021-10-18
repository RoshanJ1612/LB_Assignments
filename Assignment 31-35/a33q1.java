/*1.Write a java program which accept number from user and return the 
count of even digits.
Input : 2395 
Output : 1
Input : 1018
Output : 2
Input : -1018
Output : 2
Input : 8462
Output : 4
*/

import java.util.*;

public class a33q1
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);
		Digit dObj = new Digit();

		int iValue = 0;
		int iRet = 0;

		System.out.println("Enter the number");
		iValue = sObj.nextInt();

		iRet = dObj.CountEven(iValue);

		System.out.println("Count of even digits is "+iRet);

	}
}

class Digit
{
	public int CountEven(int iNo)
	{
		int iDigit = 0, iCount = 0;
		while(iNo != 0)
		{
			iDigit = iNo % 10;

			if(iDigit %2 == 0)
			{
				iCount++;
			}
			iNo = iNo / 10;
		}

		return iCount;
	}
}
