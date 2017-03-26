#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,n,k,p=0,l,a,b;
  clrscr();
  printf("\n\tEnter the number of rows : ");
  scanf("%d",&n);
  a=n/2;
  n-=a;
  k=n;
  for(i=1;i<=n;i++)
  {
    for(l=1;l<=k;l++)
      printf(" ");
    if(i==1)
    {
      printf("*");
      k--;
    }
    else
    {
      printf("*");
      for(l=1;l<=((2*p)+1);l++)
	printf(" ");
      printf("*");
      p++;
    }
    k--;
    printf("\n");
  }
  k=0;
  k++;
  b=a;
  for(i=1;i<=a;i++)
  {
    for(l=1;l<=k;l++)
      printf(" ");
    printf("*");
    for(l=1;l<=((2*b)+1);l++)
      printf(" ");
    if(i!=a)
      printf("*");
    k++;
    b
    1--;
    printf("\n");
  }
  getch();
}
