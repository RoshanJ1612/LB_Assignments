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
char arr[40] = "Marvellous Infosystems";
char brr[30] = "Logic Building";

StrCpyX(arr,brr);
printf("%s",arr); // Marvellous Multi OS
return 0;
}