/*
  Write a java program which accept string from user and return
  difference between frequency of small characters and frequency
  of capital characters.
  Input  : MarvellouS 
  Output : 6 (8 - 2)
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
	
	public int CountDiff()
	{
		char Arr[] = str.toCharArray();
		int i = 0, iCapCnt = 0, iSmlCnt = 0, iDiff = 0;
		for(i = 0; i < Arr.length; i++)
		{
			if((Arr[i] <= 'Z') && (Arr[i] >= 'A'))
			{
				iCapCnt++;
			}
			else if((Arr[i] <= 'z') && (Arr[i] >= 'a'))
			{
				iSmlCnt++;
			}
		}
		iDiff = iSmlCnt - iCapCnt;
		return iDiff;
	}
}

class a31q3
{
	public static void main(String arg [])
	{

		int iRet = 0;

		StringDemo obj = new StringDemo();
		obj.Accept();
		obj.Display();

		iRet = obj.CountDiff();
		System.out.println("Difference is : "+iRet);



	}
}

