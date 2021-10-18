/*1. Write java program which accept N numbers from user and accept 
one another number as NO , check whether NO is present or not.
Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : TRUE
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : FALSE*/

import java.util.*;
public class a34q1
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);
		Number nobj = new Number();

		int n = 0,iCnt = 0, iValue = 0 ;
		boolean bRet = false;


		System.out.println("Enter the Size of Array");
		n = sObj.nextInt();
		
		int [] Arr =new int[n];

		System.out.println("Enter the element of Array");
		for(iCnt = 0; iCnt < n; iCnt++)
		{
			Arr[iCnt]=sObj.nextInt();
		}
		System.out.println("Enter the element to search");
		iValue = sObj.nextInt();

		bRet = nobj.Check(Arr,iValue);

		if(bRet==true)
		{
			System.out.println("Number is present");
		}
		else
		{
			System.out.println("Number is absent");
		}
			
	}
}

class Number
{
	public boolean Check(int Brr[],int iNo)
	{
		int iCnt = 0;
		boolean bRes = false;
		for (iCnt = 0;iCnt < Brr.length;iCnt++ )
		{
			if(Brr[iCnt] == iNo)
			{
				bRes = true;
				break;
			}

			
		}

		return bRes;

	}
}