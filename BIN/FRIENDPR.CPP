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
	friend void pnum(prime);
};
void pnum(prime p)
	{
	  int temp=0;
	  if(p.num==1||p.num==0)
	  {
	    cout<<"Neither Prime nor Composite";
	    return;
	  }
	  for(int i=2;i<p.num;i++)
	  {
	    if(p.num%i==0)
	    {
	      cout<<"Composite Number !";
	      temp++;
	      break;
	    }
	  }
	  if(temp==0)
	  cout<<"Prime Number!";
	}
void main()
{
  clrscr();
  prime p1;
  p1.enter();
  pnum(p1);
  getch();
}