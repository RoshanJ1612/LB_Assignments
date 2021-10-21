/*2. Write java program which accept N numbers from user and accept 
one another number as NO , return index of first occurrence of that 
NO.
Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : 1
Input: n : 6
NO: 12
Elements :85 11 3 15 11 111
Output : -1*/

import java.util.*;

class a34q2
{
	public static void main(String[] args) 
	{
		Scanner sObj = new Scanner(System.in);
		int iLength = 0;
		int iRet = 0 , iInput = 0;

		System.out.println("Enter the Number of elements");
		iLength = sObj.nextInt();

		Marvellous mObj = new Marvellous(iLength);
		mObj.Accept();
		mObj.Display();

		System.out.println("Enter the element for the search");
		iInput = sObj.nextInt();
		
		iRet = mObj.FirstOcc(iInput);
		
		System.out.println("First occurance of the number is: "+iRet);
			
	}
}

class ArrayX
{
	public int Arr[];
	public int iNo;

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
	public int  FirstOcc(int iNo)
	{
		int iRes = -1;
		int iCnt = 0;
		for(iCnt = 0; iCnt  < Arr.length; iCnt++)
		{	if(Arr[iCnt] == iNo)
			{
				iRes = iCnt;
				break;
			}
			
		}
		
		return iRes;

	}

}
