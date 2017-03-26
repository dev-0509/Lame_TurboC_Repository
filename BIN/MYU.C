#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
  unsigned char *ch,*a;
  int i=0,j=0;
  FILE *p;
  clrscr();
  p=fopen("APDU.txt","r+");
  if(p==NULL)
  {
    printf("file not opened!");
    getch();
    return;
  }
  while(1)
  {
    if(feof(p))
      break;
    fgets(ch,3,p);
    printf("\nstring read: %s",ch);
    a=(unsigned char *)realloc(a,i+sizeof(unsigned char));
    if(!(strcmp(ch,"\n")==0))
      sscanf(ch,"%x",(a+i));
    else
      a[i]='\n';
    i++;
  }
  printf("\n\napdu :");
  for(j=0;j<i-1;j++)
  {
    if(a[j]!='\n')
      printf(" %x",a[j]);
    else
      printf("\n\n");
  }
  getch();
}
