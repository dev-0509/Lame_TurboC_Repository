#include<iostream.h>
#include<conio.h>
class time
{
  int hr,min;
  public:
	void enter()
	{
	  cout<<"\n\tEnter the hours :";
	  cin>>hr;
	  cout<<"\n\tEnter the minutes :";
	  cin>>min;
	}
	void disp()
	{
	  cout<<"\n\t"<<hr<<"\n\t"<<min;
	}
	time operator +(time);
};
time time::operator +(time a)
{
  time t;
  t.hr=hr+a.hr;
  t.min=min+a.min;
  if(t.min>=60)
  {
    t.hr++;
    t.min-=60;
  }
  return t;
}
void main()
{
  clrscr();
  time t1,t2,t3;
  t1.enter();
  t2.enter();
  t3=t1+t2;
  t3.disp();
  getch();
}