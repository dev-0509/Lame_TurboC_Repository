#include<stdio.h>
#include<conio.h>
void main()
{
  int k,i,j,n,l,a=0,c;
  clrscr();
  printf("\n\tEnter the number of rows : ");
  scanf("%d",&n);
  k=n;
  for(i=1;i<=n;i++)
  {
    for(l=1;l<=k;l++)
    {
      printf("  ");
    }
    for(j=1;j<=i;j++)
    {
      printf(" %d ",j);
    }
    if(a>0)
    {
      for(k=c;k>=1;k--)
      {
	printf(" %d ",k);
      }
    }
    a++;
    k--;
    printf("\n\n");
  }
  getch();
}

