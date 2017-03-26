#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10][10],i,j,m,n,l=1,k,chk=0,b
  clrscr();
  printf("\n\tEnter the numbers of rows and columns : ");
  scanf("%d %d",&m,&n);
  printf("\n\tEnter the matrix : \n\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
      scanf("%d",&a[i][j]);
  }
  /*for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      if(i==0||chk==1)
      {
	if(chk==1)
	{
	  b=m-1;
	  for(j=n-1;j>=0;j--)
	    printf("%d",a[b][j]);
	}
	else
	  printf("%d",a[i][j]);
      }
      else
      {
	j=1;
	while(j<n)
	{
	  k+=3;
	  printf("%d",a[l][k]);
	  l++;
	  j++;
	  k=0;
	}
	chk=1;
      }*/
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      if(a==0)
	printf("%d",a[i][j]);
      else
      {
	k+=(n-1);
	printf("%d",a[i][k]);
	break;
      }
    }
    a++;
    k=0;
    if(i==m-1)
    {
      for(k=(n-2);k>=0;k--)
	printf("%d",a[i][k]);
      i=1;
    }
  }












