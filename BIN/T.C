#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *p;
  char *c;
  clrscr();
  p=fopen("APDU.txt","r");
  while((c=fgetc(p))!=EOF)
  {
    if(c=='\n')
      printf("\n");
    printf("%c",c);
  }
  getch();
}