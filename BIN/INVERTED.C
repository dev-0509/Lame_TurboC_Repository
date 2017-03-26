#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,n,k=1,l,a;
  clrscr();
  printf("\n\tEnter the number of rows : ");
  scanf("%d",&n);
  a=n;
  a--;
  for(i=0;i<n;i++)
  {
    for(l=1;l<=k;l++)
    printf(" ");
    for(j=0;j<((2*a)+1);j++)
    printf("*");
    printf("\n");
    k++;
    a--;
  }
  getch();
}