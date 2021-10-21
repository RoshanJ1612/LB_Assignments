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

 class a34q1
{
	public static void main(String[] args) 
	{
		Scanner sObj = new Scanner(System.in);
		int iLength = 0,iInput = 0;
		boolean bRet = false;

		System.out.println("Enter the Number of elements");
		iLength = sObj.nextInt();

		Marvellous mObj = new Marvellous(iLength);
		mObj.Accept();
		mObj.Display();
		
		System.out.println("Enter the element for the search");
		iInput = sObj.nextInt();
	
		bRet = mObj.Check(iInput);
		if(bRet == true)
		{
		System.out.println("No is Present");
		}
		else
		{
			System.out.println("No is absent");
		}	
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
	public boolean Check(int iNo)
	{
		boolean bRes = false;
		int iCnt = 0;
		for(iCnt = 0; iCnt  < Arr.length; iCnt++)
		{	if(Arr[iCnt] == iNo)
			{
				bRes = true;
				break;
			}
			
		}
		
		return bRes;

	}

}
