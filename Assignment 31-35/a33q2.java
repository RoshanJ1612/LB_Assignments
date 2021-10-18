/*2.Write a program which accept number from user and return the 
count of odd digits.
Input : 2395 
Output : 3
Input : 1018
Output : 2
Input : -1018
Output : 2
Input : 8462
Output : 0*/

import java.util.*;

public class a33q2
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);
		Digit dObj = new Digit();

		int iValue = 0;
		int iRet = 0;

		System.out.println("Enter the number");
		iValue = sObj.nextInt();

		iRet = dObj.CountOdd(iValue);

		System.out.println("Count of Odd digits is "+iRet);

	}
}

class Digit
{
	public int CountOdd(int iNo)
	{
		int iDigit = 0, iCount = 0;
		while(iNo != 0)
		{
			iDigit = iNo % 10;

			if(iDigit %2 != 0)
			{
				iCount++;
			}
			iNo = iNo / 10;
		}

		return iCount;
	}
}
