#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct node
{
int info;
struct node *next;
}node;



node *start=NULL;

void push_back(int num)
{
	node *temp=NULL,*p=NULL;
	p=start;
	temp=malloc(sizeof(node));
	temp->info=num;
	temp->next=NULL;
	if(start == NULL)
	{
		start=temp;
	}
	else
	{
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=temp;
	}
	

}

void traverse_list()
{
node *p;
p=start;
while(p!=NULL)
{
printf("%d ==> ",p->info);
p=p->next;
}
printf("NULL\n");

}


int size()
{
	int count=0;
	node *p=start;
	while(p!=NULL)
	{
		count++;
		p=p->next;

	}
	return count;
}

int insert(int pos, int num)
{
	node *p,*temp;
	p=start;
	temp=malloc(sizeof(node));
	if(temp == NULL)
		return 0;
	else
	{
		temp->info=num;
		temp->next=NULL;
		if(p!=NULL)
		{
			if(pos == 1)
			{
				temp->next=start;
				start=temp;
				printf("Node inserted at the start\n");
				return 1;
			}
			else
			{
				for(int i=1;i<pos-1;i++)
					p=p->next;
				temp->next=p->next;
				p->next=temp;
				return 1;
			}
		}
		else
		{
		printf("Linked list is empty so can't insert element\n");
		return 0;
		}
	}
}

int deletenode(int dval)
{
	node *p,*prev;
	p=start;
	if(start->info == dval)
	{
		start=start->next;
		free(p);
		return 1;
	}
	else
	{
		while(p!=NULL)
		{
			if(p->info == dval)
			{
				prev->next=p->next;
				free(p);
				return 1;
			}
			else
			{
				prev=p;
				p=p->next;
			}
		}
	return 0;
}
}


void clean_up()
{
node *p,*p1;

p=start;
while(p!=NULL)
{
p1=p;
p=p->next;
free(p1);
}
}


int main()
{
int choice,num,pos,dval,res;
while(1)
{
printf("1 :: Add element to Linked List\n");
printf("2 :: Traversing Linked List\n");
printf("3 :: Insert element in Linked List\n");
printf("4 :: Delete element from Linked List\n");
printf("5 :: Size of linked List\n");
printf("0 :: Exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
	printf("Enter Element to add :: ");
	scanf("%d",&num);//16
	push_back(num);
	break;
case 2:
	traverse_list();
	break;
case 3:
	printf("Enter the position to insert :: ");
	scanf("%d",&pos);
	printf("Enter value to insert :: ");
	scanf("%d",&num);
	if(insert(pos,num))
	{
		printf("%d value inserted at %d position\n",num,pos);
	}
	else
	{
		printf("insertion failure\n");
	}
	break;
case 4:
	printf("Enter the value to delete :: ");
	scanf("%d",&dval);
	if(deletenode(dval))
		printf("Number %d found and deleted \n",dval);
	else
		printf("Number %d Not found\n",dval);
		
	break;
case 5:
	printf("Size of linked List = %d\n",size());
	break;
case 0:
	printf("Exiting Application\n");
	clean_up();
	exit(0);
default:
	printf("Wrong choice\n");
	printf("Please check the ment and enter accordingly\n");
}
}
}
