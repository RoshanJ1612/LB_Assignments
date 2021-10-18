/*2. Write Java program which accept N numbers from user and display 
all such elements which are divisible by 5.
Input : N : 6
Elements :85 66 3 80 93 88
Output : 85 80*/

import java.util.*;
public class a32q2
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
			System.out.println("The number which is divisible by five are:");
		dAobj.Display(Arr);
	}
}

class ArrayDemo
{
	public void Display(int Brr[])
	{
		for(int iCnt = 0;iCnt < Brr.length; iCnt++)
		{
			if(Brr[iCnt] % 5 == 0)
			{
				System.out.print(Brr[iCnt]);
				System.out.print("\t");
			}


		}


	}

}