/*5. Write java program which accept N numbers from user and return 
product of all odd elements.
Input : N : 6
Elements :15 66 3 70 10 88
Output : 45
Input : N : 6
Elements :44 66 72 70 10 88
Output : 0*/

import java.util.*;
public class a34q5
{
	public static void main(String[] args)
	{
		Scanner sObj = new Scanner(System.in);
		Number nobj = new Number();

		int n = 0,iCnt = 0;
		int iRet = 0;


		System.out.println("Enter the Size of Array");
		n = sObj.nextInt();
		
		int [] Arr =new int[n];

		System.out.println("Enter the element of Array");
		for(iCnt = 0; iCnt < n; iCnt++)
		{
			Arr[iCnt]=sObj.nextInt();
		}

		iRet = nobj.Product(Arr);

		System.out.println("Product is "+iRet);




		
	}
}

class Number
{
	public int Product(int Brr[])
	{
		int iCnt = 0,iProduct = 1,iCount = 0;
		for (iCnt = 0;iCnt < Brr.length; iCnt++ )
		{
			if((Brr[iCnt]%2) != 0)
			{
				iProduct = iProduct * Brr[iCnt];
				iCount++;
			}

			
			
		}

	

		if(iCount ==0)
		{
		return 0;
		}
		else
		{
		return iProduct;
		}

	}
}