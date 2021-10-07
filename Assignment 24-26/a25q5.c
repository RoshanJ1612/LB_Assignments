/*5. Write a program which 2 strings from user and concat second string
after first string. (Implement strcat() function).
Input : “Marvellous Infosystems”
“Logic Building”
Output : “Marvellous Infosystems Logic Building”
*/
#include<stdio.h>
void StrCpyX(char *src, char *dest)
{
	

while(*src != '\0')
{
	src++;
}
*src =' ';
src++;



while(*dest !='\0')
{
*src=*dest;
src++;
dest++;
}
*dest='\0';
}



int main()
{
char arr[40];
char brr[30];
	printf("Enter the first string\n");
	scanf("%[^'\n']s",arr);
	printf("Enter the second string\n");
	scanf(" %[^'\n']s",brr);

StrCpyX(arr,brr);
	printf("Modified string is %s",arr); 
return 0;
}