/*3. Write java program which accept N numbers from user and accept 
one another number as NO , return index of last occurrence of that NO.
Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : 3
Input : N : 6
NO: 93
Elements :85 66 3 66 93 88
Output : 4
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : -1*/

import java.util.*;

 class a34q3
{
	public static void main(String[] args) 
	{
		Scanner sObj = new Scanner(System.in);
		int iLength = 0;
		int iRet = 0,iInput =0;

		System.out.println("Enter the Number of elements");
		iLength = sObj.nextInt();

		Marvellous mObj = new Marvellous(iLength);
		mObj.Accept();
		mObj.Display();
		
		System.out.println("Enter the element for the search");
		iInput = sObj.nextInt();

		iRet = mObj.LastOcc(iInput);
		System.out.println("Last occurance of the number is : "+iRet);
			
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
	public void AcceptNo()
	{
		
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
	public int  LastOcc(int iNo)
	{
		int iRes = -1;
		int iCnt = 0;
		for(iCnt = Arr.length-1; iCnt  >= 0; iCnt--)
		{	if(Arr[iCnt] == iNo)
			{
				iRes = iCnt;
				break;
			}
			
		}
		
		return iRes;

	}

}
