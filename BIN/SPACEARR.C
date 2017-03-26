#include<stdio.h>
#include<conio.h>
void main()
{
  char str[25],a[25];
  int i=0,j=0;
  clrscr();
  printf("\n\tEnter the string : ");
  gets(str);
  while(str[i]!='\0')
  {
    if(str[i]==' ')
    {
      i++;
      continue;
    }
    else
    {
      a[j]=str[i];
      j++;
    }
    i++;
  }
  a[j]='\0';
  printf("\n\t\tThe string is : \n\n");
  puts(a);
  getch();
}