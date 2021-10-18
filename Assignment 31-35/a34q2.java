/*2. Write java program which accept N numbers from user and accept 
one another number as NO , return index of first occurrence of that 
NO.
Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : 1
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : -1*/

import java.util.*;
public class a34q2
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);
		Number nobj = new Number();

		int n = 0,iCnt = 0,iValue = 0;
		int iRet = 0;


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

		iRet = nobj.firstOcc(Arr,iValue);


		System.out.println("First occourance of given number is "+iRet);




		
	}
}

class Number
{
	public int firstOcc(int Brr[],int iNo)
	{
		int iCnt = 0,iRet =-1;
		for (iCnt = 0;iCnt < Brr.length;iCnt++ )
		{
			if(Brr[iCnt] == iNo)
			{
				iRet = iCnt;
				break;
			}
		
			}

		
		return iRet;

	}
}