#include<iostream.h>
#include<conio.h>
class prime
{
  int num;
  public:
	void enter()
	{
	  cout<<"\n\tEnter the number : ";
	  cin>>num;
	}
	void pnum();
};
void prime::pnum()
	{
	  int temp=0;
	  if(num==1||num==0)
	  {
	    cout<<"Neither Prime nor Composite";
	    return;
	  }
	  for(int i=2;i<num;i++)
	  {
	    if(num%i==0)
	    {
	      cout<<"Not Prime";
	      temp++;
	      break;
	    }
	  }
	  if(temp==0)
	  cout<<"Prime !";
	}
void main()
{
  clrscr();
  prime p1;
  p1.enter();
  p1.pnum();
  getch();
}