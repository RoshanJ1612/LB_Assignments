/*4.Write a program which accept number from user and return 
multiplication of all digits.
Input : 2395 
Output : 270
Input : 1018
Output : 8
Input : 9440
Output : 144
Input : 922432
Output : 864*/

import java.util.*;

 class a33q4
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);
		Digit dObj = new Digit();

		int iValue = 0;
		int iRet = 0;

		System.out.println("Enter the number");
		iValue = sObj.nextInt();

		iRet = dObj.Multiply(iValue);

		System.out.println("Multiplication is "+iRet);

	}
}

class Digit
{
	public int Multiply(int iNo)
	{
		int iDigit = 0, iMul = 1;
		while(iNo != 0)
		{
			iDigit = iNo % 10;


			if(iDigit != 0)
			{
				iMul = iMul * iDigit;
			}
			iNo = iNo / 10;
		}

		return iMul;
	}
}
