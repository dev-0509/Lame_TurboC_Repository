#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k=0,n,a=0,l,b=0;
  clrscr();
  printf("\n\tEnter the number of rows : :");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      k++;
      printf(" %d ",k);
    }
    if(a>0)
    {
      b++;
      for(l=(k-1);l>=1;l--)
      {
	printf(" %d ",l);
	if(l==(k-b))
	{
	  break;
	}
      }
    }
    printf("\n\n");
    a++;
  }
  getch();
}