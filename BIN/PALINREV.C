#include<stdio.h>
#include<conio.h>
void main()
{
  char str[25],rev[25];
  int i,j=0,l,temp=0;
  clrscr();
  printf("\n\tEnter the string : ");
  gets(str);
  l=strlen(str);
  for(i=l-1;i>=0;i--)
  {
    rev[j]=str[i];
    j++;
  }
  rev[j]='\0';
  while(str[i]!='\0')
  {
    if(str[i]!=rev[i])
    {
      temp++;
      break;
    }
    i++;
  }
  if(temp==0)
  {
    printf("\n\tPalindrome");
  }
  else
  printf("\n\tNot a Palindrome");
  getch();
}