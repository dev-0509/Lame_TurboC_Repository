#include<stdio.h>
#include<conio.h>
void main()
{
  char str[25];
  int i=0,a=0,k;
  clrscr();
  printf("\n\tEnter the string : ");
  gets(str);
  while(str[i]!='\0')
  {
    for(;str[i]!=' ';i++);
    if(a==0)
    {
      k=i;
      a++;
    }
    for(;str[i]==' ';i++);
      while(str[i]!=' '||str[i]=='\0')
      {
	if(str[i]=='\0')
	{
	  str[k+1]='\0';
	  break;
	}
	str[k+1]=str[i];
	i++;
	k++;
      }
    k++;
  }
  puts(str);
  getch();
}