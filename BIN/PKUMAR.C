#include<stdio.h>
#include<conio.h>
void main()
{
  char str[25];
  int a=0,i,j=0,k,l=0,m;
  clrscr();
  printf("\n\tEnter the string : ");
  gets(str);
  for(i=0;str[i]!='\0';i++);
  for(;str[i]!=' ';i--);
  for(m=0;str[m]!=' ';m++);
  printf("%c .",str[0]);
  while(str[j]!='\0')
  {
    for(k=m+1;str[k]!=' ';k++)
    {
      if(a%2==0)
      {
	if(str[i+1]!=str[k])
	{
	  printf("%c . ",str[k]);
	  a=1;
	}
	else
	{
	  a=1;
	  break;
	}
      }
    }
    m=k;
    j++;
  }
  while(str[i]!='\0')
  {
    printf("%c",str[i+1]);
    i++;
  }
  getch();
}



