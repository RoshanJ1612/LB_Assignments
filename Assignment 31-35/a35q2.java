/*2. Write a program which 2 strings from user and check whether 
contents of two strings are equal or not.
Input : "Marvellous Infosystems"
"Marvellous Infosystems"
Output : TRUE"*/

import java.util.*;

class a35q2
{
	public static void main(String[] args)
	{

		boolean bRet = false;
		Marvellous mobj = new Marvellous();


		mobj.Accept();
		mobj.Display();

		bRet = mobj.StrCmpX();
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

	public boolean StrCmpX()
	{
		

		if((Src.length() != Des.length()))
		{
			return false;
		}
		boolean bRet = true;
		char Arr[] = Src.toCharArray();
		char Brr[] = Des.toCharArray();
		int iCnt = 0;
		for(iCnt = 0; iCnt < Src.length(); iCnt++)
			{
				if(Arr[iCnt] != Brr[iCnt])
				{
					bRet = false;
				}
			}
		
		return bRet;
	}
}


