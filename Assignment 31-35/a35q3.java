/*;2. Write a program which 2 strings from user and check whether 
contents of two strings are equal or not.
Input : "Marvellous Infosystems"
"Marvellous Infosystems"
Output : TRUE"*/

import java.util.*;

class a35q3
{
	public static void main(String[] args)
	{

		boolean bRet = false;
		int iValue = 0;
		Marvellous mobj = new Marvellous();


		mobj.Accept();
		mobj.Display();

			Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the destination upto which you want to check");
		iValue= sobj.nextInt();


		bRet = mobj.StrCmpX(iValue);
		if(bRet == true)
		{
			System.out.println("String are equal");
		}
		else
		{
			System.out.println("Strings are not equal");
		}
		
	}
}

class StringX
{
	public String Src;
	public String Des;
	


	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the first string");
		Src = sobj.nextLine();
	
		System.out.println("Enter the Second string");
		Des = sobj.nextLine();
	}
	public void Display()
	{
		System.out.println("First string is: "+Src);
		System.out.println("Second String is: "+Des);
	}
	

}

class Marvellous extends StringX
{

	public boolean StrCmpX(int iNo)
	{
		if(iNo> Des.length())
		{
			iNo = Des.length();
		}
		else if(iNo > Src.length())
		{
			iNo = Src.length();
		}

		
		boolean bRet = true;
		char Arr[] = Src.toCharArray();
		char Brr[] = Des.toCharArray();
		int iCnt = 0;
		for(iCnt = 0; iCnt < iNo; iCnt++)
			{
				if(Arr[iCnt] != Brr[iCnt])
				{
					bRet = false;
				}
			}
		
		return bRet;
	}
}


