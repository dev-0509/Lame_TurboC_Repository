#include<stdio.h>
#include<conio.h>

char * string_reverse(char *str)
{
  int i=0,len=0;
  char temp;
  while(*(str+len)!='\0')
    len++;
  len--;
  while(i<=len)
  {
    temp = *(str+i);
    *(str+i) = *(str+len);
    *(str+len) = temp;

    i++;
    len--;
  }
  return str;
}

void main()
{
  int len;
  char *s,*str;
  clrscr();
  printf("\n\tEnter the string : ");
  fgets(str,30,stdin);
  s=string_reverse(str);
  printf("\n\n\tThe reversed string is => \n\n");
  puts(s);
  getch();
}