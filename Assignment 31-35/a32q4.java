/*4. Write Java program which accept N numbers from user and display 
all such elements which are divisible by 3 and 5.
Input : N : 6
	    Elements :85 66 3 15 93 88
Output : 15
*/

import java.util.*;
public class a32q4
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);
		ArrayDemo aDobj = new ArrayDemo();

		int n = 0, iCnt = 0;

		System.out.println("Enter the size of Array");
		n = sObj.nextInt();

		int [] Arr =new int[n];
		System.out.println("Enter the element of Array");

		for(iCnt = 0; iCnt <n; iCnt++)
		{
			Arr[iCnt] = sObj.nextInt();
		}

		System.out.println("The number which is divisible by 5 and 3 are:");
		aDobj.Display(Arr);
	}
}

class ArrayDemo
{
	public void Display(int Brr[])
	{
		int iCnt = 0;
		for(iCnt = 0; iCnt < Brr.length; iCnt++)
		{
			if((Brr[iCnt] % 3 == 0) && (Brr[iCnt] % 5 == 0))
			{
				System.out.println(Brr[iCnt]);
				System.out.println("\t");
			}

		}

	}
}