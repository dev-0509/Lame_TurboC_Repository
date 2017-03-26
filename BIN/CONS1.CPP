#include<stdio.h>
#include<conio.h>
#define MAX 128
void main()
{
  const int max=128;
  char a[max];
  char s[MAX];
  a[0]=s[0]='A';
  printf("%c %c",a[0],s[0]);
  getch();
}