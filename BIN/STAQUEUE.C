#include<stdio.h>
#include<conio.h>
struct queue
{
  int que[10];
  int front;
  int rear;
}q;
struct queue
{
  int info;
  struct queue *next;
}node;
struct queue *root=NULL;
void dynamic_que_ins()
{
  struct queue *t,*temp;
  t=root;
  temp=(struct queue *)malloc(sizeof(node));
  temp->next=NULL;
  if(root==NULL)
  {
    printf("\n\tEnter the first element to be inserted : ");
    scanf("%d",&temp->info);
    root=temp;
    printf("\n\tFirst element added in the Queue !");
    return;
  }
  printf("\n\tEnter the first element to be inserted : ");
  scanf("%d",&temp->info);
  temp->next=root;
  root=temp;
  printf("\n\tNew element %d added in the Queue !",temp->info);
}
void dynamic_que_del()
{
  struct queue *t;
  t=root;
  if(root==NULL)
  {
    printf("\n\tQueue is Empty ! Deletion not possible !");
    return;
  }
  while(t->next->next!=NULL)
    t=t->next;
  t->next=NULL;
  printf("\n\tFirst Queue element deleted !");
}
void que_disp()
{
  struct queue *t;
  t=root;
  if(root==NULL)
  {
    printf("\n\tQueue does not exists !");
    return;
  }
  printf("\n\tQueue Status => \n\n");
  while(t!=NULL)
  {
    printf("%d\t",t->info);
    t=t->next;
  }
}
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
  printf("\n\t\t\tDYNAMIC QUEUE OPERATIONS");
  while(1)
  {
  printf("\n\n\t1. Insert an Element in Queue\n\t2. Delete the Queue element\n\t3. Traverse the Queue\n\t4. Exit");
  printf("\n\n\t\tEnter your choice (1-4) :");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:dynamic_que_ins();
	   break;
    case 2:dynamic_que_del();
	   break;
    case 3:getch();
	   que_disp();
	   break;
    case 4:return;
	   break;
    default:printf("\n\tInvalid Choice !");
	    break;
  }
  }
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

