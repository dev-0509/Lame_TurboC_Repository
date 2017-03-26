#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char *s;
  char * fun();
  clrscr();
  printf("%u\n",s);
  s=fun();
  printf("\n%u\n\t%c",s,s);
  printf("\n\n\t\t%u\t\t%c",s,s);
  printf("\n%c",s);
  getch();
}
char * fun()
{
  char buffer[30];
  strcpy(buffer,"hello");
  printf("%u\n\t%c",buffer,buffer);
  return (buffer);
}
