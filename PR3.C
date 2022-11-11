#include<stdio.h>
#include<conio.h>
#define MAX 2
void insert();
void delete();
void display();
int queue_array[MAX];
int rear=-1;
int front=-1;
main()
{
int choice;
clrscr();
while (1)
{
printf("1.insert\n");
printf("2.delete\n");
printf("3.display\n");
printf("4.exit\n");
printf("enter your choice :");
scanf("%d",&choice);
switch(choice)
{
case 1:
insert();
break;


case 2:
delete();
break;

case 3:
display();
break;

case 4:
exit(1);

default:
printf("wrong choice\n");
}
}
}
void insert()
{
int add_item;
if(rear==MAX-1)
printf("overflow");
else
{
if(front== -1)
front = 0;
printf("insert element in queue \n");
scanf("%d",&add_item);
rear = rear + 1;
queue_array[rear] = add_item;
}
}
void delete()
{
if(front == -1 || front> rear)
{
printf("queue underflow\n");
return ;
}
else
{
printf("element delete from queue is : %d",queue_array[front]);
front = front +1;
}
}
void display()
{
int i;
if(front == -1)
printf("queue is \n");
else
{
printf("queue is \n");
for (i=front; i<=rear; i++)
printf("%d",queue_array[i]);
printf("\n");
}
}



getch();