#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  int a;
  char *ch;
  FILE *p;
  clrscr();
  p=fopen("apdu.txt","r");
  fgets(ch,3,p);
  a=atoi(ch);
  printf("%d ",a);
  fclose(p);
  getch();
}