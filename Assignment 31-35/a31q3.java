/*3. Write a java program which accept string from user and return 
 difference between frequency of small characters and frequency 
 of capital characters.
Input :  "MarvellouS"
 Output :  6  (8-2)
*/

import java.util.*;
 class a31q3
{
    public static void main(String Str[]) 
    {

        Scanner sObj = new Scanner(System.in);
        StringDemo sDObj =new StringDemo();

        int iRet = 0;

        System.out.println("Enter the string");
        String input = sObj.nextLine();

        iRet = sDObj.ChkDiff(input);
        System.out.println("Difference between the frequency of small and capital Characters is "+iRet);



        
    }
}
class StringDemo
{
    public int ChkDiff(String Str)
    {
        int iSmallCnt = 0, iCapitalCnt = 0;
        int iDiff = 0;
        iSmallCnt = chkSmall(Str);
        iCapitalCnt = chkCapital(Str);

        iDiff = iSmallCnt - iCapitalCnt;

        if(iDiff < 0)
        {
            iDiff = -iDiff;
        }

        return iDiff;

    }

    private int chkSmall(String Str)
    {
        int iCnt = 0, iCount = 0;
        for(iCnt = 0; iCnt < Str.length(); iCnt++)
        {
            if(Str.charAt(iCnt) >= 97 && Str.charAt(iCnt) <= 122)
            {
                iCount++;
            }
        }
        return iCount;
    }
    private int chkCapital(String Str)
    {
        int iCnt = 0, iCount = 0;
        for(iCnt = 0; iCnt < Str.length(); iCnt++)
        {
            if(Str.charAt(iCnt) >= 65 && Str.charAt(iCnt) <= 90)
            {
                iCount++;
            }
        }
        return iCount;
    }

}
