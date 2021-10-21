/*5. Accept string from user and check whether the string is 
palindrome or not without considering its case.
Input : "1abccBA1"
Output : TRUE*/









import java.util.*;

class a35q5
{
	public static void main(String[] args)
	{

		Marvellous mobj = new Marvellous();
		boolean bRet=false;
		mobj.Accept();
		mobj.Display();
		bRet = mobj.CheckPallindrome();
		if(bRet==true)
		{
		System.out.println("String is Pallindrome");
		}
		else
		{
			System.out.println("String is not Pallindrome");
		}
	}
}

class StringX
{
	public String str;

	public void  Accept()
	{
		Scanner sobj = new Scanner(System.in);
	
		System.out.println("Enter the string");
		str = sobj.nextLine();
	}

	public void  Display()
	{
		
		System.out.println("string is : "+str);
		
	} 
} 

class Marvellous extends StringX
{
	
public boolean CheckPallindrome()
{
	char [] Arr = str.toCharArray();

	int iStart = 0,iEnd = Arr.length-1;
	char temp;

	while(iStart < iEnd)
	{
		temp = Arr[iStart];
		Arr[iStart] = Arr[iEnd];
		Arr[iEnd] = temp;
		iStart++;
		iEnd--;

	}
	String newStr = new String(Arr);

	/*if(str == newStr)
	{
		return true;
	}
	else
	{
		return false;
	}*/

	boolean bRet = newStr.equals(str);
	return bRet;

}



}


