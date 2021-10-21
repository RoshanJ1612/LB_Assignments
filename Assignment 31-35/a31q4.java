/*
  Write a java program which accept string from user and check
  whether it contains vowels in it or not.
  Input  : MarvellouS 
  Output : True
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
	public boolean ChkVowel()
	{
			char Arr[] = str.toCharArray();
			int i = 0;
			boolean bFlag = false;
			for(i = 0; i  < Arr.length; i++)
			{
					if((Arr[i] == 'A') || (Arr[i] == 'E') || (Arr[i] == 'I') || (Arr[i] == 'O') || (Arr[i] == 'U') ||
						(Arr[i] == 'a') || (Arr[i] == 'e') || (Arr[i] == 'i') || (Arr[i] == 'o') || (Arr[i] == 'u'))
					{
						bFlag = true;
						break;
					}
			}
			return bFlag;

	}
}
	

class a31q4
{
	public static void main(String arg[])
	{
		
		boolean bRet = false;

		StringDemo obj = new StringDemo();
		obj.Accept();
		obj.Display();
		bRet = obj.ChkVowel();

		if(bRet == true)
		{
			System.out.println("Vowels are present!");

		}	
		else
		{
			System.out.println("Vowels are not present!");
		}
	}
 
}

