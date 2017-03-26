#include<stdio.h>
#include<conio.h>
void main()
{
  char str[25];
  int i,j=0,k=0;
  clrscr();
  printf("\n\tEnter the string : ");
  gets(str);
  printf("\n\t\tThe word reversed string is => \n\n");
  for(i=0;str[i]!='\0';i+k)
  {
    j=k;
    while(str[i]!='\0')
    {
      if(str[i]==' ')
      break;
      else
      {
	j++;
	k++;
      }
      i++;
    }
    while(j>=0)
    {
      printf("%c",str[j]);
      j--;
    }
  }
  getch();
}
