#include<iostream.h>
#include<conio.h>
class time
{
  int hr,min;
  public:
	friend void sum(time,time);
	void insert()
	{
	  cout<<"\n\tEnter the value of time in hours and minutes : ";
	  cin>>hr>>min;
	}
};
void sum(time x,time y)
	{
	  time z;
	  z.hr=x.hr+y.hr;
	  z.min=x.min+y.min;
	  if(z.min>=60)
	  {
	    z.hr+=1;
	    z.min-=60;
	  }
	}
void main()
{
  clrscr();
  time t1,t2,b;
  t1.insert();
  t2.insert();
  sum(t1,t2);
  getch();
}
