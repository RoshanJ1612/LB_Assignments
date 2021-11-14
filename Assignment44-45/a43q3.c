/*3. Write a program which returns addition of all element from singly linear 
linked list.*/

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

int Addition(PNODE Head)
{
	int iRes = 0;
	while(Head != NULL)
	{
		iRes = iRes + Head->data;
		Head = Head -> next;
	}
	return iRes;
}


int main()
{
	PNODE first = NULL;
	int iRet = 0, iChoice = 1,iValue = 0;
	
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
	
	iRet = Addition(first);
	printf("Addition of elements of Linked list are: %d\n",iRet);
	return 0;
}
	
	

