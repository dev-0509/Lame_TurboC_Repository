#include<stdio.h>
#include<conio.h>
void main()
{
  char a[25],b[25];
  int i=0,j=0;
  clrscr();
  printf("\n\tEnter string 1 : ");
  gets(a);
  printf("\n\tEnter string 2 : ");
  gets(b);
  while(a[i]!='\0')
  {
    if(a[i]==b[j])
    {
      if(b[j]=='\0')
      {
	printf("\n\tFound !");
	return;
      }
      if(a[i-1]==' '||i==0)
      {
	i++;
	j++;
	continue;
      }
      if(a[i+1]==' '&&b[j+1]==' ')
	continue;
      else
      {
	printf("\n\tNot found !");
	return;
      }
    }
  }
  getch();
}