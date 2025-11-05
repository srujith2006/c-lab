#include<stdio.h>
#include<stdlib.h>
typedef struct NODE
{
	struct NODE *prev;
	int data;
	struct NODE *next;
}node;
node *head=NULL;
node *create();
void insertatbegin();
void insertatend();
void insertatanywhere();
void deleteatbegin();
void deleteatend();
void deleteatanywhere();
void traverse();
void reverse(node*);
int size=0;
node *create()
{
	node *temp=(node*)malloc(sizeof(node));
	printf("\nenter data:\n");
	scanf("%d",&temp->data);
	temp->prev=NULL;
	temp->next=NULL;
	size++;
	return temp;
}
void inseratbegin()
{
	node *temp=create();
	if(head==NULL)
	head=temp;
	else
	{
		temp->next=head;
		head->prev=temp;
		head=temp;
	}
}
void insertatend()
{
	node *New=create(),*temp;
	if(head==NULL)
	head=New;
	else
	{
		temp=head;
		while(temp->next!=NULL)
		temp=temp->next;
		temp->next=New;
		New->prev=t;
	}
}
void insertatanywhere()
{
	int p,loc=0;
	printf("enter position to insert:");
	scanf("%d",&p);
	if(head==NULL)
	printf("no such position\n");
	else if
	{
		node *New,*t,*pr;
		New=create();
		t=pr=head;
		while(t->next!=NULL)
		{
			loc++;
			if(loc==p)
			break;
			pr=t;
			t=t->next;
		}
		New->prev=t->prev;
		t->prev=New;
		pr->next=New;
	}
}
