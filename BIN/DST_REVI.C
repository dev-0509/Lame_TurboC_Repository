#include<stdio.h>
#include<conio.h>
struct stk
{
  int top;
  int s[10];
}st;
void push(int val)
{
  if(st.top==9)
  {
    printf("\n\tOverflow !");
    return;
  }
  st.top++;
  st.s[top]=val;
}
int pop()
{
  int val;
  if(st.top==-1)
  {
    printf("\n\tUnderflow !");
    return;
  }
  val=st.top;
  st.top--;
  return val;
}
void traverse()
{
  if(st.top==-1)
  {
    printf("\n\tUnderflow ! Stack is empty !");
    return;
  }
  for(i=0;i<10;i++)
    printf("%d\t",st.s[i]);
}
void main()
{
  int  ch,val;
  clrscr();
  st.top=-1;
  printf("\n\t\t1. Push\n\t2. Pop\n\t3. Traverse\n\t4. Exit");
  printf("\n\n\t\tEnter your choice (1-4) : ");
  scanf("%d",&ch);
  while(1)
  {
  switch(ch)
  {
    case 1:printf("\n\tEnter the value to be pushed : ");
	   scanf("%d",&val);
	   push(val);
	   break;
    case 2:val=pop();
	   printf("\n\tStack top = %d popped !",val);
	   break;
    case 3:traverse();
	   break;
    case 4:return;
  }
  }
  getch();
}
