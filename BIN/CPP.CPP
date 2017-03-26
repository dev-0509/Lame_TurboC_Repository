#include<iostream.h>
#include<conio.h>
class calc
{
  int a,b,sum;
  public:
	void enter()
	{
	  cout<<"\n\tEnter the first number : ";
	  cin>>a;
	  cout<<"\n\tEnter the second number : ";
	  cin>>b;
	}
	void add()
	{
	  sum=a+b;
	}
	void disp()
	{
	  cout<<sum;
	}
};
void main()
{
  clrscr();
  calc c[2];
  for(int i=0;i<2;i++)
  {
    cout<<"\n\tEnter set "<<i+1<<":";
    c[i].enter();
    c[i].add();
  }
  for(i=0;i<2;i++)
  {
    cout<<"Sum of set "<<i+1<<":";
    c[i].disp();
  }
  getch();
}


