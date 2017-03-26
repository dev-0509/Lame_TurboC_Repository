#include<stdio.h>
#include<conio.h>
void main()
{
  char str[50];
  int i=-1,j,k,l=0,a=0;
  clrscr();
  printf("\n\tEnter the string : ");
  gets(str);
  while(str[l]!='\0')
  {
    for(i=i+1;str[i]!=' ';i++)
    {
      if(str[i]=='\0')
	break;
    }
    j=i;
    j--;
    if(a==0)
    {
      for(;j>=0;j--)
      {
	fflush(stdin);
	printf("%c",str[j]);
      }
      a++;
      printf(" ");
    }
    else
    {
      for(;j>k;j--)
      {
	fflush(stdin);
	printf("%c",str[j]);
      }
      printf(" ");
    }
    k=i;
    if(str[i]=='\0')
      l=i;
    else
      l=i+1;
  }
  getch();
}