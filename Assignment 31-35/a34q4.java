/*4. Write java program which accept N numbers from user and accept 
Range, Display all elements from that range
Input : N : 6
Start: 60
End : 90
Elements :85 66 3 76 93 88
Output : 66 76 88
Input : N : 6
Start: 30
End : 50
Elements :85 66 3 76 93 88*/

import java.util.*;
public class a34q4
{

	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);
		ArrayDemo dAobj = new ArrayDemo();
		int n = 0, iValue1 = 0 , iValue2 = 0;
		
		System.out.println("Enter the size of array");
		n = sObj.nextInt();

		int [] Arr = new int[n];
		System.out.println("Enter the element of the Array");

		for (int iCnt = 0;iCnt < n; iCnt++)
			{
				Arr[iCnt]=sObj.nextInt();
			}

		System.out.println("Enter the Starting point");
		iValue1 = sObj.nextInt();

	
		System.out.println("Enter the Ending point");
		iValue2 = sObj.nextInt();

			System.out.println("The number between the given range  are:");
		dAobj.Display(Arr,iValue1,iValue2);
	}
}

class ArrayDemo
{
	public void Display(int Brr[],int iStart,int iEnd)
	{
		for(int iCnt = 0;iCnt < Brr.length; iCnt++)
		{
			if((Brr[iCnt] > iStart) && (Brr[iCnt] < iEnd))
			{
				System.out.print(Brr[iCnt]);
				System.out.print("\t");
			}


		}


	}

}