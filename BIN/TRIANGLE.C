#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,n,k,l;
  clrscr();
  printf("\n\tEnter the number of rows : ");
  scanf("%d",&n);
  k=n-3;
  for(i=1;i<=n;i++)
  {
    if(i==1)
    {
      for(j=1;j<=n;j++)
	printf("*");
    }
    else
    {
      printf("*");
      for(l=1;l<=k;l++)
	printf(" ");
      if(i!=n)
	printf("*");
      k--;
    }
    printf("\n");
  }
  getch();
}





