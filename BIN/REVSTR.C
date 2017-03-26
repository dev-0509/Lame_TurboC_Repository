#include<stdio.h>
#include<conio.h>
void main()
{
  int a=97,i=0,j=0,temp1=0,temp2=0,c;
  char str[30];
  clrscr();
  printf("\n\tEnter the string : ");
  gets(str);
  printf("\n\t\tThe string is : ");
  puts(str);
  while(str[i]!='\0')
  {
    temp++;
    i++;
  }
  i=temp;
  while(i!=-1)
  {
    printf(" %d",str[i]);
    i--;
  }
  getch();
}