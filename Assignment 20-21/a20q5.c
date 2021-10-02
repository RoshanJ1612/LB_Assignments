/*5. Accept division of student from user and depends on the division 
display exam timing. There are 4 divisions in school as A,B,C,D. Exam 
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. 
(Application should be case insensitive)
Input : C
Output : Your exam at 9.20 AM
Input : d
Output : Your exam at 10.30 AM*/

#include<stdio.h>

void DisplaySchedule(char Div)
{
	if(Div=='A'||Div=='a')
	{
		printf("Your exam at 7 AM");
	}
	
	else if(Div=='B'||Div=='b')
	{
		printf("Your exam at 8.30 AM");
	}
	
	else if(Div=='C'||Div=='c')
	{
		printf("Your exam at 9.20 AM");
	}
	
	else if(Div=='D'||Div=='d')
	{
		printf("Your exam at 10.30 AM");
	}
	
	else
	{
		printf("No record found");
	}
	
}

int main()
{
	char ch='\0';
	
	printf("Enter the Divison\n");
	scanf("%c",&ch);
	
	DisplaySchedule(ch);
	
	return 0;
}