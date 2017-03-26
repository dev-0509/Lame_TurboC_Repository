#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
//typedef unsigned short int INT;
struct abc
{
  int a;
  int b;
  int c;
};
struct def
{
  int d;
};
void main()
{
  struct abc *a1;
  //struct &b=a1;
  a1->a=10;a1->b=20;a1->c=30;
  a1=realloc(a1,(sizeof(struct abc)+(sizeof(struct def));
  cout<<sizeof(a1);
  getch();
}