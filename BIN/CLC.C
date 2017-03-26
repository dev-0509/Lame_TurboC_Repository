#include<stdio.h>
#include<conio.h>
void main()
{
  char a[50][5],i,n;
  clrscr();
  printf("\n\tRange : ");
  scanf("%d",&n);
  printf("\n\n\tString : ");
  for(i=0;i<n;i++)
    scanf("%s",a[i]);
  for(i=0;i<n;i++)
    printf("%s",a[i]);d
  getch();
}