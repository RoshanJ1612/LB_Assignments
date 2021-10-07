/*5. Write a program which accept string from user reverse that string
in place.
Input : “abcd”
Output : “dcba”
Input : “abba”
Output : “abba”*/

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


int main()
{
	char Arr[50];
	printf("Enter  the string\n");
	scanf("%[^'\n']s",Arr);
	
	StrRevX(Arr);
	printf("%s",Arr);
	return 0;
}