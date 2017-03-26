#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k,l,n,a;
  clrscr();
  printf("\n\tEnter the number of rows : ");
  scanf("%d",&n);
  k=n;
  a=n/2;
  for(i=0;i<n;i++)
  {
    for(l=1;l<=k;l++)
    {
      printf("  ");
    }
    for(j=0;j<((2*i)+1);j++)
    {
      printf(" *");
    }
    printf("\n\n");
    k--;
  }
  for(i=a;i>0;i--)
  {
    for(l=1;l<=a;l++)
    {
      printf("  ");
    }
    for(j=0;j<((2*i)+1);j++)
    {
      printf("*");
    }
    printf("\n\n");
    a++;
  }
  getch();
}