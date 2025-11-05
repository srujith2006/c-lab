#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
typedef struct Node node;
node *head=NULL;
node *create()
{
	node *temp=(node*)malloc(sizeof(node));
	printf("enter data:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	return temp;
}
void insertatbegin()
{
	node *temp=create();
	if(head==NULL)
	head=temp;
	else
	{
		temp->next=head;
		head=temp;
	}
}
void insertatend()
{
	node *temp=create(),*t;
	if(head==NULL)
	head=temp;
	else
	{
		t=head;
		while(t->next!=NULL)
		t=t->next;
		t->next=temp;
	}
}
void insertatanywhere()
{
	node *temp=create(),*t,*pre;
	int l=0,p;
	printf("enter position :");
	scanf("%d",&p);
	if(p==1)
	insertatbegin();
	else if(p==size()+1)
	insertatend();
	else if(p>size())
	printf("no such position exist........\n");
	else{
		t=pre=head;
		while(t->next!=NULL)
		{
			l++;
			if(l==p)
			break;
			pre=t;
			t=t->next;
		}
		pre->next=temp;
		temp->next=t;
	}
}
int size()
{
	node *temp=head;
	int l=0;
	while(temp!=NULL)
	{
		l++;
		temp=temp->next;
	}
	return 1;
}
void traverse()
{
	node *temp=head;
	if(head==NULL)
	printf("list is empty\n");
	else
	{
		while(temp!=NULL)
		{
			printf("->%d",temp->data);
			temp=temp->next;
		}
	}
}
void deleteatbegin()
{
	node *temp;
	if(head==NULL)
	printf("list is empty...........\n");
	else
	{
		temp=head;
		head=head->next;
		free(temp);
	}
}
void deleteatend()
{
	if(head==NULL)
	printf("list is empty...........\n");
	else
	{
		node *temp,*t=head;
		while(t->next!=NULL)
		{
			temp=t;
			t=t->next;
		}
		temp->next=NULL;
		free(t);
	}
}
void deleteatanywhere()
{
	node *temp,*t,*pre;
	int l=0,p;
	printf("enter position:");
	scanf("%d",&p);
	if(head==NULL)
	printf("list is empty.......\n");
	else if(p==1)
	deleteatbegin();
	else if(p==size())
	deleteatend();
	else if(p>size())
	printf("no such position exist...\n");
	else
	{
		t=head;
		while(t->next!=NULL)
		{
			l++;
			if(l==p)
			break;
			pre=t;
			t=t->next;
		}
		printf("%d is removed",t->data);
		pre->next=t->next;
		free(t);
	}
}
int main()
{
	int ch;
	do
	{
		printf("\nINSERTION(1.begin 2.end 3.anywhere)  4.TRAVERSE DELETION(5.begin 6.end 7.anywhere)\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insertatbegin();break;
			case 2:insertatend();break;
			case 3:insertatanywhere();break;
			case 4:traverse();break;
			case 5:deleteatbegin();break;
			case 6:deleteatend();break;
			case 7:deleteatanywhere();break;
			default:exit(0);
		}
	}
	while(1);
return 0;
}
