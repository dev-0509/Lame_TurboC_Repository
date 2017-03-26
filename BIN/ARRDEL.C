#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],i,n,elem,temp;
  clrscr();
  printf("\n\tEnter the number of elements : ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("\n\t\tEnter element %d : ",i+1);
    scanf("%d",&a[i]);
  }
  printf("\n\tThe Array is => \n\n");
  for(i=0;i<n;i++)
    printf("%d\t",a[i]);
  printf("\n\n\tEnter the element to be deleted : ");
  scanf("%d",&elem);
  for(i=0;i<n;i++)
  {
    if(a[i]==elem)
    {
      temp=a[i];
      a[i]=a[i+1];
      a[i+1]=temp;
    }
  }
  a[n-1]=0;
  printf("\n\tElement %d has been deleted !\n",elem);
  getch();
  for(i=0;i<n;i++)
    printf("%d\t",a[i]);
  getch();
}
