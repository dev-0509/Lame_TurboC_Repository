#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define BUFFER_SIZE 5
int full=0,empty=BUFFER_SIZE,mutex=1;
int wait(int);
int signal(int);
void producer();
void consumer();
void main()
{
  int k;
  char ch;
  clrscr();
  printf("\n\t\tAman Sinha");
  printf("\n\n OUTPUT: \n\n"
  );
printf("\nInitially:\n\nFull=%d\tEmpty=%d\tMutex=%d\n",full,empty,mutex);
  printf("--------------------------------------------------\n");
  do
  {
    printf("Enter your choice( 0 - Produce, 1 - Consume ): ");
    scanf("%d",&k);
    if(k==0)
    producer();
    else if(k==1)
    consumer();
    else
    printf("\n Invalid Choice !");
    printf("--------------------------------------------------\n");
    printf("\n\nWant to continue (y/n) : ");
    scanf("%c",&ch);
    ch=getchar();
  }while(ch=='y');
  getch();
}
int wait(int s)
{
  if(s>0)
  s--;
  return s;
}
int signal(int s)
{
  s++;
  return s;
}
void producer()
{
  printf("--------------------------------------------------\n");
  empty=wait(empty);
  if(empty<0)
  {
    printf("\nSorry Buffer is full, Can't produce\n");
    empty++;
  }
  else
  {
    printf("\nPRODUCER:\n");
    mutex=wait(mutex);
    printf("ADD NEXT ITEM TO BUFFER\n");
    printf("\nMutex=%d\n",mutex);
    mutex=signal(mutex);
    full=signal(full);
    printf("After Producing:\n");
   printf("Full=%d\tEmpty=%d\tMutex=%d\n",full,empty,mutex);}
}
void consumer()
{
  printf("--------------------------------------------------\n");
  full=wait(full);
  if(full<0)
  {
    printf("Sorry Buffer is empty, can't consume\n");
    full++;
  }
  else
  {
    printf("CONSUMER:\n");
    mutex=wait(mutex);
    printf("\nMutex=%d\n",mutex);
    mutex=signal(mutex);
    empty=signal(empty);
    printf("CONSUME THE ITEM\n");
    printf("After Consuming :\n");
    printf("Full=%d\tEmpty=%d\tMutex=%d\n",full,empty,mutex);
  }
}
