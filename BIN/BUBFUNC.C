#include<stdio.h>
#include<conio.h>
void bubble(int *,int);
void main()
{
  int a[10],i,j,n,temp;
  clrscr();
  printf("\n\t\t\tPROGRAMMED BY GAURAV");
  printf("\n\n\tEnter the number of elements in the array: ");
  scanf("%d",&n);
  bubble(&a[0],n);
  getch();
}
void bubble(int *p,int n)
{
  int i,j,temp;
  for(i=0;i<n;i++)
  {
    printf("\n\t\tEnter element %d: ",i+1);
    scanf("%d",(p+i));
  }
  printf("\n\tThe unsorted array is : \n\n");
  for(i=0;i<n;i++)
  printf("\t%d",*(p+i));
  for(i=0;i<n;i++)
  {
    for(j=0;j<=n-1-i;j++)
    {
      if(*(p+j)>*(p+j+1))
      {
	temp=*(p+j);
	*(p+j)=*(p+j+1);
	*(p+j+1)=temp;
      }
    }
  }
  printf("\n\n\tThe bubble sorted array is : \n\n");
  for(i=0;i<n;i++)
  printf("\t%d",*(p+i));
}

