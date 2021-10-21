/*4. Write Java program which accept N numbers from user and display 
all such elements which are divisible by 3 and 5.
Input : N : 6
Elements :85 66 3 15 93 88
Output : 15*/

import java.util.*;

 class a32q4
{
	public static void main(String[] args) 
	{
		Scanner sObj = new Scanner(System.in);
		int iLength = 0, iRet = 0;

		System.out.println("Enter the Number of elements");
		iLength = sObj.nextInt();

		Marvellous mObj = new Marvellous(iLength);
		mObj.Accept();
		mObj.Display();
		
		System.out.println("Elements divided by 3 and 5 are:" );
		mObj.DisplayElement();
	}
}

class ArrayX
{
	public int Arr[];

	public ArrayX(int iSize)
	{
		Arr = new int[iSize];
	}

	public void Accept()
	{
		Scanner sObj = new Scanner(System.in);
		int iCnt = 0;
		System.out.println("Enter the elements");
		for(iCnt = 0; iCnt  < Arr.length; iCnt++)
		{
			Arr[iCnt] = sObj.nextInt();
		}


	}

	public void Display()
	{
		int iCnt = 0;
		System.out.println("Elements are: ");
		for(iCnt = 0; iCnt  < Arr.length; iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}
	}

}

class Marvellous extends ArrayX
{
	public Marvellous(int iValue)
	{
		super(iValue);
	}
	public void DisplayElement()
	{
		int iCnt = 0, iEvensum = 0, iOddsum = 0;
		for(iCnt = 0; iCnt  < Arr.length; iCnt++)
		{	if((Arr[iCnt] % 3 == 0) && (Arr[iCnt] %5 == 0))
			{
				System.out.println(Arr[iCnt]);
			}
			
		}
		

	}

}
