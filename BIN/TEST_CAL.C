#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  gotoxy(20,9);
  scanf("%d",&a);
  gotoxy(30,9);
  scanf("%d",&b);
  gotoxy(40,9);
  scanf("%d",&c);
  printf("%d\t%d\t%d",a,b,c);
  getch();
}