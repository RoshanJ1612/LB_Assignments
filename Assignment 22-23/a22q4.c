/*4. Write a program which accept string from user and check whether 
it contains vowels in it or not.
Input : “marvellous”
Output : TRUE
Input : “Demo”
Output : TRUE
Input : “xyz”
Output : FALSE
*/
#include<stdio.h>
#include<stdbool.h>
bool CountVowel(char *Str)
{
	bool bRet=false;
	
	while(*Str!='\0')
	{
		if(*Str=='a'||*Str=='A'||*Str=='e'||*Str=='E'||*Str=='i'||*Str=='I'||*Str=='o'||*Str=='O'||*Str=='u'||*Str=='U')
		{	
			bRet=true;
			break;
		}
		
	Str++;
}
	return bRet;
}


int main()
{
	char Arr[50];
	bool bRet=0;
	
	printf("Enter the string\n");
	scanf("%[^\n]s",&Arr);
	
	bRet=CountVowel(Arr);
	if(bRet==true)
	{
	printf("Vowel is present\n");
	}
	else
	{
		printf("Vowel is absent\n");
	}
	return 0;
	}