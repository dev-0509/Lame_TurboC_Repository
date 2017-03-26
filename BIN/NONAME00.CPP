#include<iostream.h>
#include<conio.h>
class stud
{
  public:
	stud()
	{
	  cout<<"Constructor called";
	}
	~stud()
	{
	  cout<<"destructor called";
	}
};
void main()
{
  clrscr();
  stud s1,s2,s3;
  {
    stud s4;
  }
  stud s5;
  getch();
}