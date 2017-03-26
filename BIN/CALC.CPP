#include<iostream.h>
#include<conio.h>
class calc
{
  int a,b,res;
  public:
	void insert()
	{
	  cout<<"\n\tEnter the numbers : ";
	  cin>>a>>b;
	}
	void disp()
	{
	  cout<<res;
	}
	void cal(calc,int);
	friend void div(calc);
};
void calc::cal(calc c,int ch)
{
  switch(ch)
  {
    case 1:res=a+b;

	   break;
    case 2:res=a-b;
	   c.disp();
	   break;
    case 3:res=a*b;
	   c.disp();
	   break;
    case 4:div(c);
	   break;
  }
}
void div(calc c)
{
  calc a;
  a.res=c.a/c.b;
  a.disp();
}
void main()
{
  clrscr();
  int ch;
  calc y;
  cout<<"\n\tEnter your choice : ";
  cin>>ch;
  calc c;
  c.insert();
  c.cal(c,ch);
  getch();
}
