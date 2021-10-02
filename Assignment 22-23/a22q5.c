/*3. Write a program which accept string from user and display it inn 
reverse order.
Input : “MarvellouS”
Output : “SuollevraM”
*/

#include<stdio.h>

void reverse(char *str)
{
	char *crr;
	crr=str;
	crr--;
	while(*str!='\0')
	{
		str++;
	}
	str--;
	
	
	//printf("%d",iLength);
	
	while(*str!=*crr)
	{
		printf("%c",*str);
		str--;
	}
	
	
	
}


int main()
{
	char Arr[50];
	printf("Enrer the string\n");
	scanf("%[^'\n']s",Arr);
	
	reverse(Arr);
	return 0;
}