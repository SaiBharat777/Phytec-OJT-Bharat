#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct node
{
int info;
struct node *next;
}node;




void push(node **head,int num)
{
	node *temp=NULL;
	temp=malloc(sizeof(node));
	temp->info=num;
	temp->next=NULL;
	if(*head == NULL)
	{
		*head=temp;
	}
	else
	{
		temp->next=*head;
		*head=temp;
	}
}

void traverse_stack(node **head)
{
node *p;
p=*head;
while(p!=NULL)
{
printf("%d ==> ",p->info);
p=p->next;
}
printf("NULL\n");
}


int size(node **head)
{
	int count=0;
	node *p;
	p=*head;
	while(p!=NULL)
	{
		count++;
		p=p->next;

	}
	return count;
}


int pop(node **head)
{
	node *p;
	p=*head;
	if(*head == NULL)
	{
		return 0;
	}
	else if(p->next == NULL)//1
	{
		*head=NULL;
		int num = p->info;
		free(p);
		return num;
	}
	else//2,3,4
	{		
		*head=p->next;
		int num=p->info;
		free(p);
		return num;
	}
}


void clean_up(node **head)
{
node *p,*p1;

p=*head;
while(p!=NULL)
{
p1=p;
p=p->next;
free(p1);
}
}


int main()
{
node *start=NULL;
int choice,num,pos,dval;
while(1)
{
printf("1 :: Push element to Stack\n");
printf("2 :: Traversing stack\n");
printf("3 :: Pop stack\n");
printf("4 :: Size\n");
printf("0 :: Exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
	printf("Enter Element to Push :: ");
	scanf("%d",&num);//16
	push(&start,num);
	break;
case 2:
	traverse_stack(&start);
	break;
case 3:
	if(dval=pop(&start))
		printf("popped element is  %d\n",dval);
	else
		printf("Stack is empty\n");
		
	break;
case 4:
	printf("Size of stack = %d\n",size(&start));
	break;
case 0:
	printf("Exiting Application\n");
	clean_up(&start);
	exit(0);
default:
	printf("Wrong choice\n");
	printf("Please check the ment and enter accordingly\n");
}
}
}
