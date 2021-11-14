/*4. Write a program which return second maximum element from singly linear 
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


int SecondMax(PNODE Head)
{
	PNODE temp = Head;
	PNODE temp2 = Head;
	int iMax = temp->data;
	int SMax = temp2->data;
	
	while(temp != NULL)
	{
		if(iMax < temp->data)
		{
			iMax = temp->data;
		}
		temp = temp->next;
	}
	
	while( temp2 != NULL)
	{
		if((SMax > temp2->data) && ( temp2->data != iMax))
		{
			SMax =  temp2->data;
		}
		 temp2 = temp2->next;
	}
	return SMax;
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
	
	iRet = SecondMax(first);
	printf("Second Maximum element from the Linked list is: %d\n",iRet);
	return 0;
}
	
	

