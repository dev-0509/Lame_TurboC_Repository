#include<stdio.h>
#include<conio.h>
void main()
{
  char s[50];
  int i=0;
  FILE *p;
  clrscr();
  p=fopen("a.txt","r");
  while((s[i]=fgetc(p))!=EOF)
  {
    if(s[i]!='\n')
    {
      printf("%c",s[i]);
      i++;
    }
    else
      i=0;
  }
  fclose(p);
  getch();
}