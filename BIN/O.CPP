#include<iostream.h>
#include<conio.h>
class oper
{
  int a,b;
  public:
	oper()
	{
	  a=10;
	  b=20;
	}
	void disp()
	{
	  cout<<a<<" "<<b<<endl;
	}
	friend oper operator +(oper,oper);
};
oper operator +(oper b1,oper b2)
{
  oper c;
  c.a=b1.a+b2.a;
  c.b=b1.b+b2.b;
  return c;
}
void main()
{
  clrscr();
  oper a1;
  oper 	a2;
  a1.disp();
  a2.disp();
  oper a3;
  a3=a1+a2;
  a3.disp();
  getch();
}