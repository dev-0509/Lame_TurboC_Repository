#include<stdio.h>
#include<conio.h>
void main()
{
 char a[30];
 int i,count=0,flag=0,j;
 printf("\n enter ur string=");
 gets(a);
 for(i=0;a[i]!='\0';i++)
 {
  if(a[i]==' ')
  {
  count++;
  }
  }
  for(j=0;a[j]!='\0';j++)
  {
   if(a[j]!=' '&&flag==0)
   {
  if(count!=0)
   {
   count=count-1;
   flag=1;
   printf("%c",a[j]);
   }
  }
  else
  {
 flag=0;
  }
  if(count==0&&a[j]!=' ')
  {
  printf("%c",a[j]);
  }
  }

  getch();
  }
