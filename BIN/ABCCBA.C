#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,n,k,l,a=0,m;
  clrscr();
  printf("\n\tEnter the number of rows : ");
  scanf("%d",&n);
  k=n;
  for(i=65;i<65+n;i++)
  {
    for(l=1;l<=k;l++)
      printf(" ");
    if(a==0)
    {
      printf("%c\n",i);
      a++;
      k--;
    }
    else
    {
      for(j=65;j<=i;j++)
      {
	if(j==i)
	  printf("%c",(j-1)+32);
	else
	  printf("%c",j);
      }
      for(m=j-2;m>=65;m--)
	printf("%c",m);
      printf("\n");
      k--;
    }
  }
  getch();
}





