/* Write a program which accept string from user and copy that 
characters of that string into another string in reverse order.
Input : “Marvellous Python”
Output : “nohtyP suollevraM”
*/
#include<stdio.h>
void StrRevX(char *str)
{
	
	char *crr;
	crr=str;
	while(*crr!='\0')
	{
		crr++;
	}
	crr--;
	char temp;
	
	

	
	while(str<=crr)
	{
		temp=*str;
		*str=*crr;
		*crr=temp;
		
		crr--;
		str++;
	}
	
	
	
}
void StrCpyRev(char *src, char *dest)
{
	
StrRevX(src);
while(*src != '\0')
{
	
*dest=*src;
src++;
dest++;
}
*dest='\0';
}



int main()
{
char arr[30] = "Marvellous Python";
char brr[30]; // Empty string

StrCpyRev(arr,brr);
printf("%s",brr);
return 0;
}