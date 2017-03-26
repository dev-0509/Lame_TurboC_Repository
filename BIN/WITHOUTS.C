#include<stdio.h>
#include<conio.h>
void main()
{
  int i=0,temp=0;
  char str[30];
  clrscr();
  printf("\n\tEnter the string : ");
  gets(str);
  printf("\n\t\tContinuos string : \n\n");
  while(str[i]!='\0')
  {
    if(str[i]==' ')
    {
      continue;
    }
    else
    printf(" %c",str[i]);
    i++;
  }
  getch();
}