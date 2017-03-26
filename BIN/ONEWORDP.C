#include<stdio.h>
#include<conio.h>
void main()
{
  char str1[25],str2[25];
  int i,j=0;
  clrscr();
  printf("\n\tEnter the string : ");
  gets(str1);
  for(i=0;str1[i]!='\0';i++)
  {
    if(str1[i]==' ')
    {
      if(i>0)
      {
	str2[j]=' ';
	j++;
      }
      while(str1[i]==' ')
	i++;
    }
    str2[j]=str1[i];
    j++;
  }
  str2[j]='\0';
  j=0;
  for(i=0;str2[i]!='\0';i++)
  {
    while(str2[j]!=' ')
    {
      if(str2[j]=='\0')
	goto out;
      printf("%c",str2[j]);
      j++;
    }
    i=j+1;
    j++;
    printf("\n");
  }
  out:getch();
}