#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int chopsticks[5]={1,1,1,1,1};
int wait(int);
int signal(int);
void main()
{
  int i,j;
  clrscr();
  printf("\n\t\tGaurav Kumar Jha");
  printf("\n\n OUTPUT:");
  printf("\n__________ ");
  for(j=0;j<5;j++)
  {
    i=random(5);
    wait(chopsticks[i]);
    wait(chopsticks[(i+1)%5]);
    printf("\nPROCESS %d EATING!!",i+1);
    signal(chopsticks[i]);
    signal(chopsticks[(i+1)%5]);
    printf("\nPROCESS %d EATING!!",i+1);
    signal(chopsticks[i]);
    signal(chopsticks[(i+1)%5]);
    printf("\nPROCESS %d THINKING!!",i+1);
    printf("\n---------------------");
  }
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



