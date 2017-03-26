#include<stdio.h>
#include<conio.h>
void main()
{
  int i,num,p;
  clrscr();
  printf("\n\tEnter the number : ");
  scanf("%d",&num);
  printf("\n\tTable of %d => \n\n",num);
  for(i=1;i<=10;i++)
  {
    p=num*i;
    printf("\t %d X %d = %d",num,i,p);
    printf("\n\n");
  }
  getch();
}