#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
  char str1[25],str2[25];
  int gm,gd=DETECT,i,j=0,count,words=0,x=320,temp,y=350,k;
  clrscr();
  initgraph(&gd,&gm,"C:\\TC\\BGI");
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
    if(str2[i]==' ')
      words++;
  }
  words++;
  for(i=0;i<words;i++)
  {
    while(str2[j]!=' ')
    {
      if(str2[j]=='\0')
      {
	temp=1;
	break;
      }
      count++;
      j++;
    }
    if(temp==1)
    {
      k=y-count;
      rectangle(x,y,x+10,k);
      break;
    }
    k=y-count;
    rectangle(x,y,x+10,k);
    j++;
    count=0;
    x+=10;
  }
  getch();
}