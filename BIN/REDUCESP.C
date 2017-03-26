#include<stdio.h>
#include<conio.h>
void main()
{
  char str[45];
  int i=0,a=0,b;
  clrscr();
  printf("\n\tEnter the string : ");
  gets(str);
  while(str[i]!='\0')
  {
    if(str[i]==' '&&str[i+1]==' ')
    {
      if(a==0)
      {
	b=i+1;
	a++;
      }
      while(str[i+1]==' ')
      {
	i++;
	continue;
      }
      i++;
      while(str[i]!=' ')
      {
	str[b]=str[i];
	i++;
	b++;
      }
      if(str[i]=='\0')
      {
	str[b]='\0';
	break;
      }
      str[b]=' ';
      b++;
      if(str[b]!=' ')
      {
	str[b]=' ';
	i=b;
      }
    }
    else
      i++;
  }
  puts(str);
  getch();
}