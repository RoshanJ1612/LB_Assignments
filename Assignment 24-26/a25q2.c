/*2. Write a program which accept string from user and copy the
contents of that string into another string. (Implement strncpy()
function)
Input : “Marvellous Multi OS”
10
Output : “Marvellous
Note : If third parameter is greater than the size of source string then
copy whole string into destination.
*/
#include<stdio.h>
void StrncpyX(char *src, char *dest,int iCnt)
{
	

while((*src != '\0') &&  (iCnt != 0))
{
	
*dest=*src;
src++;
dest++;
iCnt--;

}
*dest='\0';
}



int main()
{
char arr[30];
printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
char brr[30];
int iValue = 0;

printf("Enter the number of charcter that you want to copy\n");
scanf("%d",&iValue);
StrncpyX(arr,brr,iValue);
	printf("Copied string is %s",brr);
return 0;
}