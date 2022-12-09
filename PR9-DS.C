#include<conio.h>
#include<stdio.h>
struct node
{
int no;
struct node *next;
};
typedef struct node ll;
void main()
{
int ch;
ll *root, *p, *newnode;
root=NULL;
clrscr();
while(ch<5)
{
printf("press 1 to create link list \n");
printf("press 2 to insert newnode at begining \n");
printf("press 3 to insert newnode at end \n");
printf("press 4 to display link list \n");
printf("enter choice :");
scanf("%d",&ch);

switch(ch)
{
case 1:
	{
	newnode=(ll * )malloc(sizeof(ll));
	printf("enter number :");
	scanf("%d",&newnode->no);
	newnode->next=NULL;
	if(root!=NULL)
	{
	root=newnode;
	}
	else
	{
	newnode->next=root;
	root=newnode;
	}
	break;
case 2:
{
	newnode=(ll*)malloc(sizeof(ll));
	scanf("%d",&newnode->no);
	newnode->next=root;
	root=newnode;
}
break;

case 3:
{
newnode=(ll *)malloc(sizeof(ll));
scanf("%d",&newnode->no);
newnode->next=NULL;
p=root;
while(p->next!=NULL)
{
p=p->next;
}
p->next=newnode;
}
break;

case 4:
{
p=root;
while(p!=NULL)
{
printf("newnode %d \n",p->no);
p=p->next;
}
break;

default:
printf("thank you");
getch();
}
}
}

}}


