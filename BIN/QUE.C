#include<stdio.h>
#include<conio.h>
struct que
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
int ctr=0;
void dynamic_que_ins()
{
  struct queue *temp;
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
void dynamic_circular_ins()
{
  struct queue *t,*temp;
  t=root;
  temp=(struct queue *)malloc(sizeof(node));
  if(root==NULL)
  {
    printf("\n\tEnter the first element to be inserted : ");
    scanf("%d",&temp->info);
    root=temp;
    temp->next=root;
    printf("\n\tFirst Element added in the Queue !");
    return;
  }
  printf("\n\tEnter the new element to be inserted : ");
  scanf("%d",&temp->info);
  temp->next=root;
  while(t->next!=root)
    t=t->next;
  t->next=temp;
  root=temp;
  printf("\n\tNew element %d added !",temp->info);
}
void DEqueue_dynamic_inp_res_reardel()
{
  struct queue *t;
  t=root;
  if(root==NULL)
  {
    printf("\n\tQueue is Empty ! Deletion not possible ..");
    return;
  }
  root=root->next;
  free(t);
  printf("\n\tElement deleted from rear !");
}
void DEqueue_dynamic_out_res_frontins()
{
  struct queue *t,*temp;
  t=root;
  if(root==NULL)
  {
    printf("\n\tQueue does not exists !");
    return;
  }
  temp=(struct queue *)malloc(sizeof(node));
  printf("\n\tEnter the element to be inserted : ");
  scanf("%d",&temp->info);
  temp->next=NULL;
  while(t->next!=NULL)
    t=t->next;
  t->next=temp;
  printf("\n\tElement inserted in the queue !");
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
void dynamic_circular_del()
{
  struct queue *t;
  t=root;
  if(root==NULL)
  {
    printf("\n\tQueue is Empty ! Deletion not possible !");
    return;
  }
  if(t->next==root)
  {
    printf("\n\tExisting element %d deleted !",t->info);
    root=NULL;
    free(root);
    return;
  }
  while(t->next->next!=root)
    t=t->next;
  printf("\n\tElement %d deleted !",t->next->info);
  t->next=root;
}
void dynamic_disp_circular()
{
  struct queue *t;
  t=root;
  if(root==NULL)
  {
    printf("\n\tQueue does not exists !");
    return;
  }
  printf("\n\tQueue Status => \n\n");
  do
  {
    printf("%d\t",t->info);
    t=t->next;
  }while(t!=root);
}
void dynamic_que_disp()
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
void circular_ins()
{
  int val;
  if(ctr==10)
  {
    printf("\n\tOverflow ! No more Elements can be inserted ..");
    return;
  }
  if(ctr==0)
  {
    printf("\n\tEnter the first element to be inserted in the Queue : ");
    scanf("%d",&val);
    q.que[q.rear]=val;
    q.rear=(q.rear+1)%10;
    ctr++;
    printf("\n\tFirst element added in the Circular Queue !");
    return;
  }
  printf("\n\tEnter the new element to be inserted in the Queue : ");
  scanf("%d",&val);
  q.que[q.rear]=val;
  q.rear=(q.rear+1)%10;
  ctr++;
  printf("\n\tNew element %d added in the Circular Queue !",val);
}
void DEqueue_out_res_frontins()
{
  int val,i;
  if(q.rear==10)
  {
    printf("\n\tQueue is full ! Insertion not possible ..");
    return;
  }
  for(i=q.rear;i>q.front;i--)
    q.que[i]=q.que[i-1];
  printf("\n\tEnter the element to be inserted : ");
  scanf("%d",&val);
  q.que[q.front]=val;
  q.rear++;
  printf("\n\tElement %d inserted !",val);
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
void circular_del()
{
  int val;
  if(ctr==0)
  {
    printf("\n\tQueue does not exists ! Deletion not possible ..");
    return;
  }
  val=q.que[q.front];
  q.front=(q.front+1)%10;
  ctr--;
  printf("\n\tElement %d deleted !",val);
}
void shifted_del()
{
  int val,i;
  if(q.front==q.rear)
  {
    printf("\n\tQueue is Empty ! Deletion not possible ..");
    return;
  }
  val=q.que[q.front];
  for(i=q.front;i<q.rear;i++)
    q.que[i]=q.que[i+1];
  q.rear--;
  printf("\n\tElement %d deleted from the Queue !",val);
}
void DEqueue_inp_res_reardel()
{
  int val;
  if(q.front==q.rear)
  {
    printf("\n\tQueue is Empty ! Deletion not possible ..");
    return;
  }
  q.rear--;
  val=q.que[q.rear];
  printf("\n\tElement %d deleted !",val);
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
void disp_circular()
{
  int i;
  if(ctr==0)
  {
    printf("\n\tQueue is Empty !");
    return;
  }
  printf("\n\tThe Circular Queue is => \n\n");
  for(i=q.front;i<=ctr;i++)
    printf("%d\t",q.que[i]);
}
void main()
{
  int ch1,ch2,ch3;
  clrscr();
  q.front=q.rear=0;
  printf("\n\t\t\t1. STATIC QUEUE OPERATIONS");
  printf("\n\n\t\t\t2. DYNAMIC QUEUE OPERATIONS\n\n\t\t\t3. SHIFTED QUEUE\n\n\t\t\t4. CIRCULAR QUEUE\n\n\t\t\t5. DYNAMIC CIRCULAR QUEUE\n\n\t\t\t6. DOUBLE-ENDED QUEUE\n\n\t\t\t7. DYNAMIC DE-QUEUE");
  printf("\n\n\t\t\t8. Exit");
  printf("\nChoice (1-8) : ");
  scanf("%d",&ch1);
  switch(ch1)
  {
    case 1:while(1)
	   {
	   printf("\n\n\t1. Insert an Element in Queue\n\t2. Delete the Queue element\n\t3. Traverse the Queue\n\t4. Exit");
	   printf("\n\n\t\tEnter your choice (1-4) :");
	   scanf("%d",&ch2);
	   switch(ch2)
	   {
	     case 1:dynamic_que_ins();
		    break;
	     case 2:dynamic_que_del();
		    break;
	     case 3:getch();
		    dynamic_que_disp();
		    break;
	     case 4:return;
		    break;
	     default:printf("\n\tInvalid Choice !");
		     break;
	   }
	   }
	   break;
    case 2:while(1)
	   {
	   printf("\n\n\t1. Insert an element in the Queue\n\t2. Delete the Queue element\n\t3. Traverse the Queue\n\t4. Exit");
	   printf("\n\n\t\tEnter your choice (1-4) : ");
	   scanf("%d",&ch2);
	   switch(ch2)
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
	   break;
    case 3:while(1)
	   {
	   printf("\n\n\t1. Insert an element in the Queue\n\t2. Delete the Queue element\n\t3. Traverse the Queue\n\t4. Exit");
	   printf("\n\n\t\tEnter your choice (1-4) : ");
	   scanf("%d",&ch2);
	   switch(ch2)
	   {
	     case 1:rear_insert();
		    break;
	     case 2:shifted_del();
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
	   break;
    case 4:while(1)
	   {
	   printf("\n\n\t1. Insert an element in the Queue\n\t2. Delete the Queue element\n\t3. Traverse the Queue\n\t4. Exit");
	   printf("\n\n\t\tEnter your choice (1-4) : ");
	   scanf("%d",&ch2);
	   switch(ch2)
	   {
	     case 1:circular_ins();
		    break;
	     case 2:circular_del();
		    break;
	     case 3:getch();
		    disp_circular();
		    break;
	     case 4:return;
		    break;
	     default:printf("\n\tInvalid Choice !");
		     break;
	   }
	   }
    case 5:while(1)
	   {
	     printf("\n\n\t1. Insert an element in the Queue\n\t2. Delete the Queue element\n\t3. Traverse the Queue\n\t4. Exit");
	     printf("\n\n\t\tEnter your choice (1-4) : ");
	     scanf("%d",&ch2);
	     switch(ch2)
	     {
	       case 1:dynamic_circular_ins();
		      break;
	       case 2:dynamic_circular_del();
		      break;
	       case 3:getch();
		      dynamic_disp_circular();
		      break;
	       case 4:return;
	       default:printf("\n\tInvalid Choice !");
		       break;
	     }
	   }
	   break;
    case 6:while(1)
	   {
	     printf("\n\n\tSpecify the type of DE-Queue to operate :->\n\t\t\t1. Input Restrcited\n\t\t\t2. Output Restricted\n\n\t\t\tChoice : ");
	     scanf("%d",&ch2);
	     switch(ch2)
	     {
	       case 1:while(1)
		      {
			printf("\n\n\t\tINPUT RESTRICTED DE-QUEUE OPERATIONS\n\n1. Insert an element\n2. Delete an element\n3. Traverse the DE-Queue\n4. Exit");
			printf("\n\n\tChoice (1-4) : ");
			scanf("%d",&ch3);
			switch(ch3)
			{
			  case 1:rear_insert();
				 break;
			  case 2:printf("\n\n\tSpecify the end of deletion : 1. Front\n\t\t\t2. Rear\n\t\t\t\tChoice : ");
				 scanf("%d",&ch3);
				 switch(ch3)
				 {
				   case 1:front_del();
					  break;
				   case 2:DEqueue_inp_res_reardel();
					  break;
				   default:printf("\n\tInvalid Choice !");
				 }
			  case 3:disp_queue();
				 break;
			  case 4:return;
			  default:printf("\n\tInvalid Choice !");
			}
		      }
		      break;
	       case 2:while(1)
		      {
			printf("\n\n\t\tOUTPUT RESTRICTED DE-QUEUE OPERATIONS\n\n1. Insert an element\n2. Delete an element\n3. Traverse the DE-Queue\n4. Exit");
			printf("\n\n\tChoice (1-4) : ");
			scanf("%d",&ch3);
			switch(ch3)
			{
			  case 1:printf("\n\n\tSpecify the end of insertion : 1. Front\n\t\t\t2. Rear\n\t\t\t\tChoice : ");
				 scanf("%d",&ch3);
				 switch(ch3)
				 {
				   case 1:DEqueue_out_res_frontins();
					  break;
				   case 2:rear_insert();
					  break;
				   default:printf("\n\tInvalid Choice !");
				 }
				 break;
			  case 2:front_del();
				 break;
			  case 3:disp_queue();
				 break;
			  case 4:return;
			  default:printf("\n\tInvalid Choice !");
			}
		      }
		      break;
	     }
	   }
    case 7:while(1)
	   {
	     printf("\n\n\tSpecify the type of DE-Queue to operate :->\n\t\t\t1. Input Restrcited\n\t\t\t2. Output Restricted\n\n\t\t\tChoice : ");
	     scanf("%d",&ch2);
	     switch(ch2)
	     {
	       case 1:while(1)
		      {
			printf("\n\n\t\tINPUT RESTRICTED DYNAMIC DE-QUEUE OPERATIONS\n\n1. Insert an element\n2. Delete an element\n3. Traverse the DE-Queue\n4. Exit");
			printf("\n\n\tChoice (1-4) : ");
			scanf("%d",&ch3);
			switch(ch3)
			{
			  case 1:dynamic_que_ins();
				 break;
			  case 2:printf("\n\n\tSpecify the end of deletion : 1. Front\n\t\t\t2. Rear\n\t\t\t\tChoice : ");
				 scanf("%d",&ch3);
				 switch(ch3)
				 {
				   case 1:dynamic_que_del();
					  break;
				   case 2:DEqueue_dynamic_inp_res_reardel();
					  break;
				   default:printf("\n\tInvalid Choice !");
				 }
			  case 3:dynamic_que_disp();
				 break;
			  case 4:return;
			  default:printf("\n\tInvalid Choice !");
			}
		      }
		      break;
	       case 2:while(1)
		      {
			printf("\n\n\t\tOUTPUT RESTRICTED DYNAMIC DE-QUEUE OPERATIONS\n\n1. Insert an element\n2. Delete an element\n3. Traverse the DE-Queue\n4. Exit");
			printf("\n\n\tChoice (1-4) : ");
			scanf("%d",&ch3);
			switch(ch3)
			{
			  case 1:printf("\n\n\tSpecify the end of insertion : 1. Front\n\t\t\t2. Rear\n\t\t\t\tChoice : ");
				 scanf("%d",&ch3);
				 switch(ch3)
				 {
				   case 1:DEqueue_dynamic_out_res_frontins();
					  break;
				   case 2:dynamic_que_ins();
					  break;
				   default:printf("\n\tInvalid Choice !");
				 }
				 break;
			  case 2:dynamic_que_del();
				 break;
			  case 3:dynamic_que_disp();
				 break;
			  case 4:return;
			  default:printf("\n\tInvalid Choice !");
			}
		      }
		      break;
	     }
	   }
	   break;
    case 8:return;
  }
  getch();
}

