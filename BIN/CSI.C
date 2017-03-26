#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *p,*q;
  int a[100],i=0,j,k=0,min,num=0;
  char c1,c2,*str[50];
  clrscr();
  p=fopen("csi.txt","r");
  q=fopen("output.txt","w");
  while(!feof(p))
  {
    c1=fgetc(p);
    if(c1==',')
    {
      fgetc(p);
      while((c1=fgetc(p))!=',')
	num=(num*10)+(c1-48);
      a[i]=num;
      fgetc(p);
      while((c1=fgetc(p))!=',')
      {
	str[i][k]=c	1;
	k++;
      }
      i++;
      printf("%s",str);
      while((c2=fgetc(p)))
      {
	if(feof(p))
	  break;
	if(c2=='\n')
	  break;
      }
      num=0;
      continue;
    }
  }
  min=a[0];
  for(j=0;j<i;j++)
  {
    if(a[j]<min)
      min=a[j];
  }
  fprintf(q,"%d",min);
  fclose(p);
  fclose(q);
  getch();
}


