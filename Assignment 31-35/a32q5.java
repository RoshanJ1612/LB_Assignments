/*5. Write Java program which accept N numbers from user and display 
all such elements which are multiples of 11.
Input : N : 6
Elements :85 66 3 55 93 88
Output : 66 55 88*/

import java.util.*;

 class a32q5
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
		
		System.out.println("Elements which are multiples of 11:" );
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
		{	if(Arr[iCnt] % 11 == 0)
			{
				System.out.println(Arr[iCnt]);
			}
			
		}
		

	}

}
