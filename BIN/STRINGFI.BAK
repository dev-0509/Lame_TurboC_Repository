#include<stdio.h>
#include<conio.h>
void main()
{
  char a[25],b[25];
  int i,j=0,k,temp=0,l;
  clrscr();
  printf("\n\tEnter the first string : ");
  gets(a);
  printf("\n\tEnter the second string : ");
  gets(b);
  for(k=0;a[k]!='\0';k++);
  for(l=0;b[l]!='\0';l++);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]==b[j])
    {
      temp++;
      j++;
    }
    else
    {
      j=0;
      i--;
    }
  }
  if(temp==l)
  {
    if(temp==k&&temp==l)
    {
      printf("\n\t\tBoth the strings are equal !");
    }
    else
    printf("\n\t\t' %s ' is part of the string ' %s '",b,a);
  }
  else
  printf("\n\t\t' %s ' is not a part of the string ' %s '",b,a);
  getch();
}
