#include<stdio.h>
#include<conio.h>
void main()
{
  int a[1][10],i,j,n;
  clrscr();
  printf("\n\tEnter the number of coloums in the row : ");
  scanf("%d",&n);
  for(i=0;i<1;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("\n\tEnter element a%d%d : ",i+1,j+1);
      scanf("%d",&a[i][j]);
    }
  }
  printf("\n\tThe Row Matrix is => \n\n");
  for(i=0;i<1;i++)
  {
    printf("[\t");
    for(j=0;j<n;j++)
      printf("%d\t",a[i][j]);
    printf("]");
  }
  getch();
}
