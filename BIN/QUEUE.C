#include<stdio.h>
#include<conio.h>
struct queue
{
  int que[10];
  int front;
  int rear;
}q;
void rear_insert()
{
  int val;
  if(q.rear==10)
  {
    printf("\n\tQueue is Full ! Insertion not possible ..");
    return;
  }
  printf("\n\tEnter the element to be inserted in the Queue : ");
  scanf("%d",&val);
  q.que[q.rear]=val;
  q.rear++;
  printf("\n\tElement %d added in the queue !",val);
}
void front_del()
{
  int val;
  if(q.front==q.rear)
  {
    printf("\n\tQueue is Empty ! Deletion not possible ..");
    return;
  }
  val=q.que[q.front];
  q.front++;
  printf("\n\tElement %d deleted from the queue !",val);
}
void disp_queue()
{
  int i;
  if(q.front==q.rear)
  {
    printf("\n\tQueue is Empty !");
    return;
  }
  printf("\n\tThe Queue is => \n\n");
  for(i=q.front;i<q.rear;i++)
    printf("%d\t",q.que[i]);
}
void main()
{
  int ch;
  clrscr();
  q.front=q.rear=0;
  printf("\n\t\t\tSTATIC QUEUE OPERATIONS");
  while(1)
  {
  printf("\n\n\t1. Insert an element in the Queue\n\t2. Delete the Queue element\n\t3. Traverse the Queue\n\t4. Exit");
  printf("\n\n\t\tEnter your choice (1-4) : ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:rear_insert();
	   break;
    case 2:front_del();
	   break;
    case 3:getch();
	   disp_queue();
	   break;
    case 4:return;
	   break;
    default:printf("\n\tInvalid Choice !");
	    break;
  }
  }
  getch();
}

