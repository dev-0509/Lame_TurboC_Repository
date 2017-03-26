#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,n,a;
  clrscr();
  printf("\n\tEnter the number of rows : ");
  scanf("%d",&n);
  a=n;
  n/=2;
  a-=n;
  for(i=0;i<n;i++)
  {
    for(j=0;j<=i;j++)
    printf(" * ");
    printf("\n");
  }
  for(i=a;i>0;i--)
  {
    for(j=0;j<i;j++)
    printf(" * ");
    printf("\n");
  }
  getch();
}