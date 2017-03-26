#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
  int i,j,k,l,m,gm,gd=DETECT;
  int n1,n2,res,x;
  char ch;
  initgraph(&gd,&gm,"C:\\TC\\BGI");
  rectangle(80,100,300,400);
  line(80,170,300,170);
  for(i=80,j=170;i<350;i+=55,j+=60)
  {
    line(i,170,i,400);
    if(j>400)
      continue;
    line(80,j,300,j);
  }
  settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
  k=13; j=14;  m=7;
  for(i=1;i<4;i++)
  {
    for(l=m;l<m+3;l++)
    {
      gotoxy(j,k);
      printf("%d",l);
      j+=7;
    }
    k+=4;
    j=14;
    m=l;
    m-=6;
  }
  k-=1; //j=14;
  switch(1)
  {
    case 1:gotoxy(j,k);
	   printf(".");
    case 2:j+=7;
	   gotoxy(j,k);
	   printf("0");
    case 3:j+=7;
	   gotoxy(j,k);
	   printf("=");
  }
  k=13;  j+=7;
  switch(1)
  {
    case 1:gotoxy(j,k);
	   printf("/");
    case 2:k+=4;
	   gotoxy(j,k);
	   printf("*");
    case 3:k+=4;
	   gotoxy(j,k);
	   printf("-");
    case 4:k+=3;
	   gotoxy(j,k);
	   printf("+");
  }
  gotoxy(20,9);
  scanf("%d",&n1);
  fflush(stdin);
  gotoxy(23,9);
  scanf("%c",&ch);
  gotoxy(26,9);
  scanf("%d",&n2);
  switch(ch)
  {
    case '+':res=n1+n2;
	     for(i=20;i<=28;i++)
	     {
	       gotoxy(i,9);
	       printf(" ");
	     }
	     gotoxy(30,9);
	     printf("%d",res);
	     break;
    case '-':res=n1-n2;
	     for(i=20;i<=28;i++)
	     {
	       gotoxy(i,9);
	       printf(" ");
	     }
	     gotoxy(30,9);
	     printf("%d",res);
	     break;
    case '*':res=n1*n2;
	     for(i=20;i<=28;i++)
	     {
	       gotoxy(i,9);
	       printf(" ");
	     }
	     gotoxy(30,9);
	     printf("%d",res);
	     break;
    case '/':res=n1/n2;
	     for(i=20;i<=28;i++)
	     {
	       gotoxy(i,9);
	       printf(" ");
	     }
	     gotoxy(30,9);
	     printf("%d",res);
	     break;
  }
  getch();
}