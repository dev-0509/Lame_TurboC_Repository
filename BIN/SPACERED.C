#include<stdio.h>
#include<conio.h>
void main()
{
  char str[25];
  int a,i=0,j,b=0,q;
  clrscr();
  printf("\n\tEnter the string : ");
  gets(str);
  do
  {
    a=0;
    b=0;
    while(str[i]!='\0')
    {
      if(str[i]==' ')
      {
	b++;
	if(a==1)
	{
	  j=i;
	}
	if(a>0)
	{
	  a++;
	  i++;
	  continue;
	}
	else
	{
	  a++;
	  i++;
	  continue;
	}
      }
      else
      {
	if(b==0)
	{
	  i++;
	  continue;
	}
	else
	break;
      }
    }
    while(str[i]!=' ')
    {
      str[j]=str[i];
      j++;
      i++;
    }
    q=i;
  }while(str[q]!='\0');
  getch();
}