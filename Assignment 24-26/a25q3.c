/*13. Write a program which accept string from user and copy capital
characters of that string into another string.
Input : “Marvellous Multi OS”
Output : “MMOS”
*/
#include<stdio.h>
void StrCpyCap(char *src, char *dest)
{
	

while(*src != '\0')
{
	if(*src>='A' && *src<='Z')
	{
*dest=*src;
dest++;
	}
src++;

}
*dest='\0';
}



int main()
{
char arr[30];
char brr[30]; 
printf("Enter the string\n");
	scanf("%[^'\n']s",arr);

StrCpyCap(arr,brr);
	printf("Copied string is %s",brr);
return 0;
}