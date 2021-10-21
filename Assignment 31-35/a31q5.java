/*
  Write a java program which accept string from user and display
  it in reverse order.
  Input  : MarvellouS 
  Output : SuollevraM
*/

import java.util.*;

class StringX
{
	public String str;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter String: ");
		str = sobj.nextLine();
	}

	public void Display()
	{
		System.out.println("Entered String: "+str);
	}
}

class StringDemo extends StringX
{
	public String ReverseX()
	{
			char Arr[] = str.toCharArray();
			int i = 0, iStart = 0, iEnd = Arr.length - 1;
			char cTemp;

			while(iStart < iEnd)
			{
				cTemp = Arr[iStart];
				Arr[iStart] = Arr[iEnd];
				Arr[iEnd] = cTemp;

				iStart++;
				iEnd--;
			}

			return new String(Arr);
			

	}
}
	
 class a31q5
{
	public static void main(String arg[])
	{
		
		String s;

		StringDemo obj = new StringDemo();
		obj.Accept();
		obj.Display();
		s = obj.ReverseX();
		System.out.println("Reverse is:"+s);

	}
 
}
