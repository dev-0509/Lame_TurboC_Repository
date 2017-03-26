#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,n,k,l,a=0,m;
  clrscr();
  printf("\n\tEnter the number of rows : ");
  scanf("%d",&n);
  k=n;
  for(i=1;i<=n;i++)
  {
    for(l=1;l<=k;l++)
      printf(" ");
    if(a==0)
    {
      printf("%d\n",i);
      a++;
      k--;
    }
    else
    {
      for(j=1;j<=i;j++)
	printf("%d",j);
      for(m=j-2;m>=1;m--)
	printf("%d",m);
      printf("\n");
      k--;
    }
  }
  getch();
}
