/*3.Write a program which accept number from user and return the 
count of digits in between 3 and 7.
Input : 2395 
Output : 1
Input : 1018
Output : 0
Input : 4521
Output : 2
Input : 9922
Output : 0*/

import java.util.*;

class a33q3
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);
		Digit dObj = new Digit();

		int iValue = 0;
		int iRet = 0;

		System.out.println("Enter the number");
		iValue = sObj.nextInt();

		iRet = dObj.CountRange(iValue);

		System.out.println("Count of digits between 3 and 7 is "+iRet);

	}
}

class Digit
{
	public int CountRange(int iNo)
	{
		int iDigit = 0, iCount = 0;
		while(iNo != 0)
		{
			iDigit = iNo % 10;

			if((iDigit > 3) && (iDigit < 7))
			{
				iCount++;
			}
			iNo = iNo / 10;
		}

		return iCount;
	}
}
