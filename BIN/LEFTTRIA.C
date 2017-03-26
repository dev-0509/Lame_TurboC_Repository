#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,n,k,l;
  clrscr();
  printf("\n\tEnter the number of rows : ");
  scanf("%d",&n);
  k=n/2;
  l=n-k;
  for(i=1;i<=l;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf(" * ");
    }
    printf("\n\n");
  }
  for(i=k;i>=1;i--)
  {
    for(j=1;j<=i;j++)
    {
      printf(" * ");
    }
    printf("\n\n");
  }
  getch();
}