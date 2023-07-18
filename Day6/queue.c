#include<stdio.h>
#include<stdlib.h>
#define SIZE 50
void insert();
void delet();
void display();
int queue[SIZE];
int rear = - 1;
int front = - 1;
int main()
{
int choice;
while (1)
{
printf("\n1.Insert element to queue ");
printf("\n2.Delete element from queue ");
printf("\n3.Display all elements of queue ");
printf("\n4.Quit ");
printf("\nEnter your choice : ");
scanf("%d", &choice);
switch(choice)
{
case 1:
insert();
break;
case 2:
delet();
break;
case 3:
display();
break;
case 4:
exit(1);
default:
printf("\nTry another choice ");
}
}
}
void insert()
{
int item;
if(rear == SIZE - 1)
printf("\nQueue overflow ");
else
{
if(front== - 1)
front = 0;
printf("\nElement to insert in queue : ");
scanf("%d", &item);
rear = rear + 1;
queue[rear] = item;
}
}
void delet()
{
if(front == - 1 || front > rear)
{
printf("\nQueue underflow ");
return;
}
else
{
printf("\nElement deleted from queue is : %d", queue[front]);
front = front + 1;
}
}
void display()
{
int i;
if(front == - 1)
printf("\nQueue is empty ");
else
{
printf("\nQueue is : ");
for(i = front; i <= rear; i++)
printf("\n%d ", queue[i]);
printf("n");
}
}
