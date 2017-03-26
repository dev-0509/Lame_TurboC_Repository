#include<iostream.h>
#include<conio.h>
class num
{
  int a,b;
  public:
	void enter()
	{
	  cout<<"Enter a and b = ";
	  cin>>a>>b;
	}
  friend int ag(num);
};
int ag(num z)
{
  int avg;
  avg=(z.a+z.b)/2;
  return avg;
}
void main()
{
  clrscr();
  int c,d;
  num n,m;
  n.enter();
  m.enter();
  c=ag(n);
  d=ag(m);
  cout<<c<<endl<<d;
  getch();
}



