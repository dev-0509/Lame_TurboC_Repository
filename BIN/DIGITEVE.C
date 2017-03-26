#include<stdio.h>
#include<conio.h>
void main()
{
  int num,esum=0,osum=0,rem;
  clrscr();
  printf("\n\tEnter the number : ");
  scanf("%d",&num);
  while(num>0)
  {
    rem=num%10;
    if(rem%2==0)
    {
      esum+=rem;
    }
    else
    osum+=rem;
    num=num/10;
  }
  printf("\n\tSum of even digits : %d ",esum);
  printf("\n\tSum of odd digits : %d ",osum);
  getch();
}