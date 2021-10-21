/*4. Write java program which accept N numbers from user and accept 
Range, Display all elements from that range
Input : N : 6
Start: 60
End : 90
Elements :85 66 3 76 93 88
Output :85 66 76 88
Input : N : 6
Start: 30
End : 50
Elements :85 66 3 76 93 88
Output :*/

import java.util.*;

class a34q4
{
	public static void main(String[] args) 
	{
		Scanner sObj = new Scanner(System.in);
		int iLength = 0, iStart = 0 ,iEnd = 0;
	

		System.out.println("Enter the Number of elements");
		iLength = sObj.nextInt();

		Marvellous mObj = new Marvellous(iLength);
		mObj.Accept();
		mObj.Display();
		
		System.out.println("Enter the starting point");
		iStart = sObj.nextInt();
		System.out.println("Enter the Ending point");
		iEnd = sObj.nextInt();
		
		mObj.DisplayRange(iStart,iEnd);
		
			
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
	public void DisplayRange(int iStart,int iEnd)
	{
		
		int iCnt = 0;

		System.out.println("Elements between the range are :");
		for(iCnt = 0;iCnt < Arr.length; iCnt++)
		{
			if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
			{
				System.out.print(Arr[iCnt]);
				System.out.print("\t");
			}
		}
		
	

	}

}
