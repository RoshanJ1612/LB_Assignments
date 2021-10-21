/*
  Write a java program which accept string from user and count
  number of small characters.
  Input  : Marvellous 
  Output : 9
*/

import java.util.*;

class StringX
{
	public String str;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter String:");
		str = sobj.nextLine();
  }

  public void Display()
  {
  	System.out.println("Entered String is: "+str);
  }
}


class StringDemo extends StringX
{
	
	public int CountSmall()
	{
		char Arr[] = str.toCharArray();
		int i = 0, iCnt = 0;
		for(i = 0; i < Arr.length; i++)
		{
			if((Arr[i] <= 'z') && (Arr[i] >= 'a'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

class a31q2
{
	public static void main(String arg [])
	{

		int iRet = 0;

		StringDemo obj = new StringDemo();
		obj.Accept();
		obj.Display();
		iRet = obj.CountSmall();
		System.out.println("Count of small latters are : "+iRet);



	}
}

