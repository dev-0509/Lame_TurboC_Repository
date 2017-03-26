#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],i,*p,n;
  clrscr();
  printf("\n\tEnter the number of elements : ");
  scanf("%d",&n);
  p=&a[0];
  for(i=0;i<n;i++)
  {
    printf("\n\t\tEnter element number %d : ",i+1);
    scanf("%d",&(p+i));
  }
  printf("\n\tThe array is : \n\n");
  for(i=0;i<n;i++)
  printf("\t %d",*(p+i));
  getch();
}

