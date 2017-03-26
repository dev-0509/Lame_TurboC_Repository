#include<stdio.h>
#include<conio.h>
void main()
{
  char str1[50],str2[50];
  int i=0,j=0,k=0,a=0,count=0,b;
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
  i=0;
  while(str2[i]!='\0')
  {
    if(str2[i]==' ')
      count++;
    i++;
  }
  i=0;
  if(count==0)
  {
    puts(str2);
    getch();
    return;
  }
  else
  {
    while(str2[k]!=' ')
      k++;
    if(k==0)
    {
      while(str2[k]==' ')
	k++;
      while(str2[k]!=' ')
	k++;
      while(str2[k]==' ')
	k++;
      if(str2[k]=='\0')
      {
	puts(str2);
	getch();
	return;
      }
    }
    while(str2[k]==' ')
      k++;
    if(str2[k]=='\0')
    {
      puts(str2);
      getch();
      return;
    }
    while(str2[i]!='\0')
    {
      while(str2[i]!=' ')
      {
	if(str2[i]=='\0')
	{
	  while(str2[i]!=' ')
	    i--;
	  i+=2;
	  while(str2[i]!='\0')
	  {
	    printf("%c",str2[i]);
	    i++;
	  }
	  if(str2[i]=='\0')
	  {
	    getch();
	    return;
	  }
	}
	if(a==0)
	{
	  if(count==0)
	    printf("%c",str2[i]);
	  else
	    printf("%c. ",str2[i]);
	  a++;
	  i++;
	}
	else
	  i++;
      }
      i++;
      a=0;
      count--;
    }
  }
  getch();
}