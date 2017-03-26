#include<stdio.h>
#include<conio.h>
void main()
{
  int rem,sum=0,num;
  clrscr();
  printf("\n\tEnter the number : ");
  scanf("%d",&num);
  while(num>0)
  {
    rem=num%10;
    sum+=rem;
    num=num/100;
  }
  printf("\n\tSum of alternate digits : %d ",sum);
  getch();
}
