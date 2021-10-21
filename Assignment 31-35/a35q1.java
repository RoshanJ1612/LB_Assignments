/*1. Write a java program which accepts 2 strings from user and 
concat N characters of second string after first string.Value of N 
should be accepted from user.
Note : If third parameter is greater than the size of second string 
then concat whole string after first string.
Input : "Marvellous Infosystems"
"Logic Building"
5
Output : "Marvellous Infosystems Logic"*/

import java.util.*;

class a35q1
{
	public static void main(String[] args)
	{

		String Ret;
		int iValue = 0;
		Marvellous mobj = new Marvellous();
		Scanner sobj = new Scanner(System.in);


		mobj.Accept();
		
		mobj.Display();

		System.out.println("Enter the destination upto which you want to copy");
		iValue = sobj.nextInt();

		Ret = mobj.StrNCatX(iValue);
		System.out.println("Modified string is: "+Ret);
		
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
	
		System.out.println("Enter the second string");
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

	public String StrNCatX(int iNo)
	{
		String Res;
		char Arr[] = Des.toCharArray();
		char Brr[] = new char[iNo];
		int iCnt = 0;
		if(iNo > Des.length())
		{
		 Res =Src + " " + Des;
		}
		else
		{
			for(iCnt = 0; iCnt < iNo ; iCnt++)
			{
				Brr[iCnt] = Arr[iCnt];
			}
		String newDes = new String(Brr);

		Res =Src + " " + newDes;
		}

		return Res;
	}


}