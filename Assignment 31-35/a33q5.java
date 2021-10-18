/*5.Write a program which accept number from user and return 
difference between summation of even digits and summation of odd 
digits.
Input : 2395 
Output : -15 (2 - 17)
Input : 1018
Output : 6 (8 - 2)
Input : 8440
Output : 16 (16 - 0)
Input : 5733
Output : -18 (0 - 18)
*/

import java.util.*;

 public class a33q5
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);
		Digit dObj = new Digit();

		int iValue = 0;
		int iRet = 0;

		System.out.println("Enter the number");
		iValue = sObj.nextInt();

		iRet = dObj.CountDiff(iValue);

		System.out.println("Diffrence between summation of even and odd digits is "+iRet);

	}
}

class Digit
{
	public int CountDiff(int iNo)
	{
		int iDigit = 0, iOddsum = 0, iEvenSum = 0, iDiff = 0;
		while(iNo != 0)
		{
			iDigit = iNo % 10;

			if(iDigit %2 == 0)
			{
				iEvenSum = iEvenSum + iDigit;
			}
			else
			{
				iOddsum = iOddsum + iDigit;
			}
			iNo = iNo / 10;
		}
		iDiff = iEvenSum - iOddsum;




		return iDiff;
	}
}
