/*2. Write Java program which accept N numbers from user and display 
all such elements which are multiple of 11.
Input : N : 6
Elements :85 66 3 88 93 85
Output :66 88*/

import java.util.*;
public class a32q5
{

	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);
		ArrayDemo dAobj = new ArrayDemo();
		int n = 0;
		
		System.out.println("Enter the size of array");
		n = sObj.nextInt();

		int [] Arr = new int[n];
		System.out.println("Enter the element of the Array");

		for (int iCnt = 0;iCnt < n; iCnt++)
			{
				Arr[iCnt]=sObj.nextInt();
			}

			System.out.println("The number which is Multiple of 11 are:");
		dAobj.Display(Arr);
	}
}

class ArrayDemo
{
	public void Display(int Brr[])
	{

		for(int iCnt = 0;iCnt < Brr.length; iCnt++)
		{
			if(Brr[iCnt] % 11 == 0)
			{
				System.out.print(Brr[iCnt]);
				System.out.print("\t");
			}


		}


	}

}