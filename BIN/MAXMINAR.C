#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],i,n,max,min;
  clrscr();
  printf("\n\tEnter the number of elements : ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("\n\t\tEnter element %d : ",i+1);
    scanf("%d",&a[i]);
  }
  max=min=a[0];
  for(i=1;i<n;i++)
  {
    if(max<a[i])
      max=a[i];
    if(min>a[i])
      min=a[i];
  }
  printf("\n\tMaximum Element : %d\n\tMinimum Element : %d",max,min);
  getch();
}