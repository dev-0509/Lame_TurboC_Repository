#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],c[10],i,n,j,temp=0,sum=0,k=0,dig,rev=0,ctr=0,chk=0;
  clrscr();
  printf("\n\tEnter the number of elements : ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("\n\t\tEnter element %d : ",i+1);
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=2;j<a[i];j++)
    {
      if(a[i]%j==0)
      {
	temp++;
	break;
      }
    }
    if(temp==0)
    {
      printf("\n\tArray element %d : %d is Prime ",i+1,a[i]);
      sum+=a[i];
      ctr++;
      chk++;
    }
    c[k]=a[i];
    while(a[i]!=0)
    {
      dig=a[i]%10;
      rev=(rev*10)+dig;
      a[i]/=10;
    }
    if(c[k]==rev)
    {
      printf("\n\tArray element %d : %d is Palindrome ",i+1,c[k]);
      if(ctr==0)
	sum+=c[k];
      chk++;
    }
    ctr=0;
    k++;
    temp=0;
    rev=0;
  }
  if(chk==0)
    printf("\n\tNo Primes or Palindromes exist in the array !");
  else
    printf("\n\tSum of all Prime and Palindromes in the array : %d",sum);
  getch();
}
