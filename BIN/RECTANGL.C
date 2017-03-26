#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,n,a=0,k,l,m;
  clrscr();
  printf("\n\tEnter the number of rows : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(a==0||a==(n-1))
    {
      for(j=1;j<=n;j++)
      {
	printf("*");
      }
      printf("\n");
    }
    else
    {
      for(k=1;k<=1;k++)
      {
	printf("*");
      }
      for(l=1;l<=(n-2);l++)
      {
	printf(" ");
      }
      for(m=1;m<=1;m++)
      {
	printf("*");
      }
      printf("\n");
    }
    a++;
  }
  getch();
}
