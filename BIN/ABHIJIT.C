#include<stdio.h>
#include<conio.h>
void main()
{
  char str[25];
  int i=0,c=0;
  clrscr();
  printf("\n\tEnter the string : ");
  gets(str);
  while(str[i]!='\0')
  {
    if(str[i]!=' ')
    {
      printf("%c",str[i]);
      i++;
      continue;
    }
    if(str[i]==' ')
    {
      c++;
      if(c==1)
      {
	printf("%c",str[i]);
	i++;
      }
      if(c>1)
	i++;
    }
    if(str[i]=='\0')
      break;
  }
  getch();
}