/*4. Write a program which accept string from user and copy that 
characters of that string into another string by converting all capital 
characters into small case.
Input : “Marvellous Python 2”
Output : “marvellous python 2””
*/
#include<stdio.h>
void StrCpyX(char *src, char *dest)
{
	

while(*src != '\0')
{
	if((*src>='A' && *src<='Z'))
	{
*dest=*src+32;

	}
	
	else
	{
		*dest=*src;
	}
	dest++;
src++;

}
*dest='\0';
}



int main()
{
char arr[30];
char brr[30]; // Empty string

	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
StrCpyX(arr,brr);
printf("Modified string is %s",brr); 
return 0;
}