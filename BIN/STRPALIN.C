#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int i=0,l,temp=0;
  char str[30],rev[30];
  clrscr();
  printf("\n\tEnter the string : ");
  gets(str);
  l=strlen(str);
  printf("\n\tLength = %d",l);
  while(i<=l-1)
  {
    if(str[i]!=str[l-1])
    {
      temp++;
      break;
    }
    i++;
    l--;
  }
  if(temp==0)
  printf("\n\tThe string is Palindrome ");
  else
  printf("\n\tNot a Palindrome ");
  getch();
}