/*1. Write Java program which accept N numbers from user and return 
difference between summation of even elements and summation of 
odd elements.
Input : N : 6
Elements :85 66 3 80 93 88
Output : 53 (234 - 181)*/

import java.util.*;
public class a32q1
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);
		ArrayDemo aDobj = new ArrayDemo();

		int n = 0,iCnt = 0;
		int iRet = 0;


		System.out.println("Enter the Size of Array");
		n = sObj.nextInt();
		
		int [] Arr =new int[n];

		System.out.println("Enter the element of Array");
		for(iCnt = 0; iCnt < n; iCnt++)
		{
			Arr[iCnt]=sObj.nextInt();
		}

		iRet = aDobj.Difference(Arr);

		System.out.println("Difference is "+iRet);




		
	}
}

class ArrayDemo
{
	public int Difference(int Brr[])
	{
		int iCnt = 0,iEvenSum = 0, iOddSum = 0, iDiff = 0;
		for (iCnt = 0;iCnt < Brr.length;iCnt++ )
		{
			if((Brr[iCnt]%2)== 0)
			{
				iEvenSum = iEvenSum + Brr[iCnt];
			}

			else
			{
				iOddSum = iOddSum + Brr[iCnt];
			}
			
		}

		iDiff = iEvenSum - iOddSum;

		if(iDiff < 0)
		{
			iDiff = -iDiff;
		}

		return iDiff;

	}
}