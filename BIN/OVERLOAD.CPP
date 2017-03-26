#include<iostream.h>
#include<conio.h>
class opod
{
  int a,b;
  public:
	void enter()
	{
	  cout<<"\nEnter a and b :";
	  cin>>a>>b;
	}
	void disp()
	{
	  cout<<"\n\t"<<a<<endl<<"\n\t"<<b;
	}
	opod(int p,int q)
	{
	  a=p;
	  b=q;
	}
	friend void operator +(opod);
};
void operator +(opod d)
{
  d.a=-d.a;
  d.b+=50;
  cout<<"\n\t"<<d.a<<"\n\t"<<d.b;
}
void main()
{
  clrscr();
  opod a1(10,20);
  a1.disp();
  +a1;
  a1.disp();
  a1.enter();
  a1.disp();
  opod a2(5,6);
  a2.disp();
  +a2;
  a2.disp();
  a2.enter();
  a2.disp();
  getch();
}
