#include<stdio.h>
#include<conio.h>
void main()
{
  char str1[50],str2[50];
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
  printf("\n%d\n",strlen(str2));
  puts(str2);
  getch();
}