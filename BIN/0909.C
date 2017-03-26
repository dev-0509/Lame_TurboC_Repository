#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k,n,a=0,b,c;
  clrscr();
  printf("\n\tEnter the number of rows : ");
  scanf("%d",&n);
  b=n-1;
  c=n-1;
  for(i=1;i<=n;i++)
  {
    if(a>0)
    {
      for(j=b;j<=(n-1);j++)
      {
	printf(" %d ",j);
      }
      b--;
      if(n==10)
      {
	printf(" 0 ");
      }
      else
      printf(" %d ",n);
      for(k=(n-1);k>=c;k--)
      {
	printf(" %d ",k);
      }
      c--;
    }
    else
    {
      printf(" 0 ");
    }
    a++;
    printf("\n\n");
  }
  getch();
}