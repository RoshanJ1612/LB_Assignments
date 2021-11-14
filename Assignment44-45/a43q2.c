/*2. Write a program which search last occurrence of particular element from 
singly linear linked list. 
Function should return position at which element is found..*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
	PNODE newn = NULL;
	 
	newn = (PNODE)malloc(sizeof(NODE));
	newn->data = no;
	newn->next = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else 
	{
		newn->next = *Head;
		*Head = newn;
	}
}

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("|%d|->",Head->data);
		Head = Head -> next;
	}
	printf("NULL\n");
}

int ChkLastOcc(PNODE Head, int no)
{
	int iCnt = 0;
	int Occ = 0;
	while(Head != NULL)
	{
		iCnt++;
		if((Head->data) == no)
		{
			Occ = iCnt;
		}
		Head = Head -> next;
	}
	return Occ;
}


int main()
{
	PNODE first = NULL;
	int iRet = 0, iChoice = 1,iValue = 0,iNo = 0;
	
	while(iChoice != 0)
	{
		printf("Enter the element to insert \n");
		scanf("%d",&iValue);
		
		InsertFirst(&first,iValue);
		
		printf("Do you want to continue(1/0)\n");
		scanf(" %d",&iChoice);
	}
	printf("Element of Linked List are : ");
	Display(first);
	printf("Enter the element for search\n");
	scanf("%d",&iNo);
	
	iRet = ChkLastOcc(first,iNo);
	printf("Last Occurance of given element is at position: %d\n",iRet);
	return 0;
}
	
	

