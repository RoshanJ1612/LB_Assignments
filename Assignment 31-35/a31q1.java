/*
  Write a Java program which accept string from user and count
  number of capital characters.
  Input  : Marvellous Multi OS 
  Output : 4
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
	
	public int CountCapital()
	{
		char Arr[] = str.toCharArray();
		int i = 0, iCnt = 0;
		for(i = 0; i < Arr.length; i++)
		{
			if((Arr[i] <= 'Z') && (Arr[i] >= 'A'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

class a31q1
{
	public static void main(String arg [])
	{

		int iRet = 0;

		StringDemo obj = new StringDemo();
		obj.Accept();
		obj.Display();

		iRet = obj.CountCapital();
		System.out.println("Count of capital capital latters are : "+iRet);



	}
}

