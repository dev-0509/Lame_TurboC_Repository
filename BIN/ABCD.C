#include<stdio.h>
#include<conio.h>
void main()
{
  int k,i,b=65,j,n,l,a=0,p,c=65;
  clrscr();
  printf("\n\tEnter the number of rows : ");
  scanf("%d",&n);
  k=n;
  for(i=1;i<=n;i++)
  {
    for(l=1;l<=k;l++)
    {
      printf("   ");
    }
    b=65;
    for(j=1;j<=i;j++)
    {
      printf(" %c ",b);
      b++;
    }
    if(a>0)
    {
      for(p=c;p>=65;p--)
      {
	printf(" %c ",p);
      }
      c++;
    }
    a++;
    k--;
    printf("\n\n");
  }
  getch();
}

