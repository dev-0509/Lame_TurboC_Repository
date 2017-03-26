#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct link
{
  int info;
  struct link *next;
}node;
struct link *root=NULL;
void create(int val)
{
  struct link *temp,*t;
  t=root;
  temp=(struct link *)malloc(sizeof(node));
  if(root==NULL)
  {
    temp->info=val;
    temp->next=NULL;
    root=temp;
    printf("\n\tNode %d added !",val);
    return;
  }
  temp->info=val;
  temp->next=NULL;
  while(t->next!=NULL)
    t=t->next;
  t->next=temp;
  printf("\n\tNode %d added !",val);
}
void add_after(int val)
{
  int pos;
  struct link *t,*temp;
  t=root;
  if(root==NULL)
  {
    printf("\n\tList does not exixts !");
    return;
  }
  temp=(struct link *)malloc(sizeof(node));
  temp->info=val;
  temp->next=NULL;
  printf("\n\tEnter the node after which insertion is to be done : ");
  scanf("%d",&pos);
  while(t->info!=pos)
    t=t->next;
  temp->next=t->next;
  t->next=temp;
  printf("\n\tNode %d added !",val);
}
void disp()
{
  struct link *t;
  t=root;
  while(t!=NULL)
  {
    printf("%d\t",t->info);
    t=t->next;
  }
}
void palin()
{
  struct link *t,*p,*s;
  int i=1,count=0,chk=0;
  t=s=p=root;
  if(root==NULL)
  {
    printf("\n\tList does not exists !");
    return;
  }
  while(t->next!=NULL)
  {
    s=t;
    t=t->next;
    count++;
  }
  count++;
  while(i<count||i==count)
  {
    if(p->info==t->info)
    {
      i++;
      count--;
      p=p->next;
      t=s;
      s=root;
      while(s->next!=t)
	s=s->next;
    }
    else
    {
      chk=1;
      break;
    }
  }
  if(chk==0)
    printf("\n\tThe Linked list is a Palindrome !");
  else
    printf("\n\tThe Linked List is not a palindrome ");
}
void nth_occ()
{
  struct link *t,*q;
  int occ,val,c=0;
  t=root;
  if(root==NULL)
  {
    printf("\n\tList does not exists !");
    return;
  }
  printf("\n\tEnter the node to be deleted : ");
  scanf("%d",&val);
  printf("\n\tEnter its occurence to be deleted : ");
  scanf("%d",&occ);
  while(t!=NULL)
  {
    if(t->info==val)
    {
      if(t==root&&occ==1)
      {
	root=t->next;
	free(t);
	printf("\n\tNode %d with occ = 1 deleted !",val);
	return;
      }
      c++;
      if(c==occ)
      {
	q->next=t->next;
	free(t);
	printf("\n\tNode %d with occ = %d deleted !",val,occ);
	return;
      }
      q=t;
      t=t->next;
      continue;
    }
    else
    {
      q=t;
      t=t->next;
    }
  }
  printf("\n\tNode not present in the list !");
}
void reverse()
{
  struct link *t,*p,*s;
  int a=0;
  t=root;
  if(root==NULL)
  {
    printf("\n\tList does not exists !");
    return;
  }
  while(1)
  {
  if(a==0)
  {
    while(t->next!=NULL)
    {
      p=t;
      t=t->next;
    }
    s=t;
    t->next=p;
    t=p;
    p=root;
    a++;
  }
  else
  {
    while(p->next!=t)
      p=p->next;
    t->next=p;
    t=p;
    p=root;
    if(t==root)
    {
      t->next=NULL;
      root=s;
      printf("\n\tReversed Linked List => \n\n");
      disp();
      getch();
      return;
    }
  }
  }
}
void main()
{
  int val;
  char ch;
  clrscr();
  while(1)
  {
    printf("\n\t\t1. Create a Node\n\t\t2. Add After\n\t\t3. Check Palindrome\n\t\t4. nth Occurence Deletion\n\t\t5. Reverse a Linked List\n\t\t6. Exit");
    printf("\n\n\t\tChoice: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:printf("\n\tEnter the value to be added : ");
	     scanf("%d",&val);
	     create(val);
	     disp();
	     break;
      case 2:printf("\n\tEnter the value to be added : ");
	     scanf("%d",&val);
	     add_after(val);
	     disp();
	     break;
      case 3:palin();
	     break;
      case 4:nth_occ();
	     break;
      case 5:reverse();
	     break;
      case 6:return;
    }
  }
}