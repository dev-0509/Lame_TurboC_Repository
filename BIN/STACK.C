#include<stdio.h>
#include<conio.h>
void push(int,int);
void pop(int,int);
void disp();
int MS=15,top=-1;
void main()
{
  int ch,c;
  clrscr();
  printf("\t\t\tSTACK IMPLEMETATION");
  do
  {
    printf("\n\n\t\t1. Insertion");
    printf("\n\t\t2. Deletion");
    printf("\n\t\t3. Traversing");
    printf("\n\t\t4. Exit");
    printf("\n\n\tEnter your choice (1-4): ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:push();
	     break;
      case 2:pop();
	     break;
      case 3:disp();
	     break;
      case 4:printf("\n\tPress any key to exit ...");
	     exit();
      default:printf("\n\t\tInvalid Choice !");
    }
    printf("\n\tDo you want to continue ? (y/n) : ");
    scanf("%d",&c);
  }while(c=='y')
  getch();
}
void push(int stk[],int item)
{
  if(top==MS)
  {
    printf("\n\tOVERFLOW !");
  }
  else
  top++;
  stk[top]=item;
}
void pop(int stk[],int item)
{
  if(top==-1)
  {
    printf("\n\tUNDERFLOW !");
  }
  else
  item=stk[top];
  top--;
}
void disp()
{
  int i;
  printf("\n\t\tStack Status => \n\n");
  for(i=0;i<=top;i++)
  {
    printf("\t %d",stk[i]);
  }
}




