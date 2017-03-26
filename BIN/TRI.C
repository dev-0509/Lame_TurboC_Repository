#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b=0,c=0,i,j,n,k,l,m,q;
  clrscr();
  printf("\n\tEnter the number of rows : ");
  scanf("%d",&n);
  if(n>=3)
  {
    a=n;
    for(i=1;i<=n;i++)
    {
      for(l=1;l<=a;l++)
      {
	printf(" ");
      }
      for(j=1;j<=1;j++)
      {
	printf("*");
      }
      if(b==(n-1))
      {
	for(q=1;q<=((2*c)+1);q++)
	{
	  printf("*");
	}
      }
      if(b!=(n-1))
      {
	if(b>0)
	{
	   for(k=1;k<=((2*c)+1);k++)
	   {
	      printf(" ");
	   }
	   c++;
	}
      }
      if(b>0)
      {
	for(m=1;m<=1;m++)
	{
	  printf("*");
	}
      }
      b++;
      printf("\n");
      a--;
    }
  }
  else
  printf("\n\tTraingle not possible with rows = %d",n);
  getch();
}
