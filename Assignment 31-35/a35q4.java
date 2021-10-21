/*
  4. Accept sing from user and reverse the contents of that string 
by toggling the case.
Input :"aCBdef"
Output :"FEDcbA"
*/

import java.util.*;

class a35q4
{
	public static void main(String arg[])
	{
		
		String s;

		StringDemo obj = new StringDemo();
		obj.Accept();
		obj.Display();
		s = obj.StrRevTogX();
		System.out.println("Modefied string is :"+s);

	}
 
}
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
	public String StrRevTogX()
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
			for(int iCnt = 0; iCnt < Arr.length; iCnt++)
			{
				if(Arr[iCnt] >='a' && Arr[iCnt] <= 'z')
				{
						Arr[iCnt] = (char)(Arr[iCnt] - 32);
				}
				else
				{
					Arr[iCnt] = (char)(Arr[iCnt] + 32);

				}




			}
			
		return new String(Arr);
			

	}
}