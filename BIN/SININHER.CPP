#include<iostream.h>
#include<conio.h>
class stud
{
  protected:
	int roll,age;
  public:
	void enter()
	{
	  cout<<"\n\tEnter the roll number and age :";
	  cin>>roll>>age;
	}
	void disp()
	{
	  cout<<endl<<roll<<endl<<age;
	}
};
class marks:public stud
{
  protected:
	int m1,m2;