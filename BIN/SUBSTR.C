#include<stdio.h>
#include<conio.h>
void substring(char *,char *);
void main()
{
  char a[25],b[25];
  clrscr();
  printf("\n\tEnter the first string : ");
  gets(a);
  printf("\n\tEnter the second string : ");
  gets(b);
  substring(a,b);
  getch();
}
void substring(char *p,char *q)
{
  int i,j=0,k=0,temp=0;
  for(i=0;*(q+i)!='\0';i++);
  while(*(p+j)!='\0')
  {
    if(*(p+j)==*(q+k))
    {
      temp++;
      k++;
      j++;
    }
    else
    j++;
  }
  if(temp==i)
  printf("\n\t\tPresent");
  else
  printf("\n\t\tNot present");
}



