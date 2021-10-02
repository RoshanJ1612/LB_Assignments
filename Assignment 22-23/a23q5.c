/*5. Write a program which accept string from user and count number of 
white spaces
Input : “MarvellouS”
Output : 0
Input : “MarvellouS Infosystems”
Output : 1
Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
Output : 5
*/

#include<stdio.h>
int  Count(char *str)
{
	int iCnt=0;
	while(*str!='\0')
	{
		if(*str==' ')
		{
			iCnt++;
			
		}
		str++;
	}
	return iCnt;
}


int main()
{
	char arr[50];
	int iRet=0;
	printf("Enter the string\n");
	scanf("%[^\n]s",&arr);
	iRet=Count(arr);
	printf("No of white spaces are %d",iRet);
	return 0;
}