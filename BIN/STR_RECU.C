#include<stdio.h>
#include<conio.h>

char * string_reverse(char *str,int len,int j)
{
  static int i=0;
  char temp;

  while(i<=len)
  {
    temp = *(str+i);
    *(str+i) = *(str+len);
    *(str+len) = temp;

    i++;
    len--;
    string_reverse(str,len,i);
  }
  return str;
}
void main()
{
  static int len;
  char *s,*str;
  clrscr();
  printf("\n\tEnter the string : ");
  fgets(str,30,stdin);
  while(*(str+len)!='\0')
    len++;
  len--;
  s=string_reverse(str,len,0);
  printf("\n\n\tThe reversed string is => ");
  puts(s);
  getch();
}
