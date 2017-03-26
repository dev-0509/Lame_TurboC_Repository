#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],i,n,c[10],k=0,j,count=0,l;
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
  for(i=0;i<n;i++)
  {
    c[k]=a[i];
    l=0;
    while(a[i]!=c[l])
      l++;
    if(l==i)
    {
      for(j=0;j<n;j++)
      {
	if(a[i]==a[j])
	  count++;
      }
      printf("\n\tArray element %d occurence : %d",a[i],count);
      count=0;
    }
    k++;
  }
  getch();
}
