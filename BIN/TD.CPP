#include<iostream.h>
#include<conio.h>
class time
{
  int hr,min;
  public:
	void enter(int a,int b)
	{
	  hr=a;
	  min=b;
	}
	void add(time x,time y)
	{
	  hr=hr.x+hr.y;
	  min=min.x+min.y;
	}
	void disp()
	{
	  cout<<hr<<endl<<min;
	}
};
void main()
{
  time t1,t2,t3;
  t1.enter(12,45);
  t2.enter(7,35);
  t3.add(t1,t2);
  t3.disp();
  getch();
}