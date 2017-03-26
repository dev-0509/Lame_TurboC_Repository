#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,l,k=2,n,a,m,p;
  clrscr();
  printf("\n\tEnter the number of rows : ");
  scanf("%d",&n);
  a=n/2;
  m=n-a;
  for(i=0;i<(n-a);i++)
  {
    for(l=1;l<=m;l++)
    {
      printf("  ");
    }
    for(j=0;j<((2*i)+1);j++)
    {
      printf(" *");
    }
    printf("\n\n");
    m--;
  }
  p=a-1;
  for(i=p;i>=0;i--)
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
    k++;
  }
  getch();
}