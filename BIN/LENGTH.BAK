#include<iostream.h>
#include<conio.h>
class len2;         //forward declaration of class
class len1
{
  float m,cm;
  public:
	void insert()
	{
	  cout<<"\nEnter the length in metres : ";
	  cin>>m;
	  cout<<"\nEnter the length in centimetres :";
	  cin>>cm;
	}
	friend void convert(len1,len2,int);
};
class len2
{
  float in,ft;
  public:
	void insert()
	{
	  cout<<"\nEnter the length in feets : ";
	  cin>>ft;
	  cout<<"\nEnter the length in inches : ";
	  cin>>in;
	}
	friend void convert(len1,len2,int);
};
void convert(len1 l1,len2 l2,int ch)
{
  float tot;
  switch(ch)
  {
    case 'm':cout<<"\n\n"<<l1.m<<" metres"<<endl<<l1.cm<<" centimetres =";
	     l1.cm/=100;
	     cout<<l1.cm<<" metres"<<endl<<l2.ft<<" Feets =";
	     l2.ft*=0.305;
	     cout<<l2.ft<<" metres"<<endl<<l2.in<<" Inches =";
	     l2.in*=0.0254;
	     cout<<l2.in<<" metres"<<endl;
	     tot=l1.m+l1.cm+l2.ft+l2.in;
	     cout<<"\n\t\tTotal Length in metres : "<<tot<<" m";
	     break;
    case 'c':cout<<"\n\n"<<l1.cm<<" centimetres"<<endl<<l1.m<<" metres =";
	     l1.m*=100;
	     cout<<l1.m<<" centimetres"<<endl<<l2.ft<<" Feets =";
	     l2.ft*=30.48;
	     cout<<l2.ft<<" centimetres"<<endl<<l2.in<<" Inches =";
	     l2.in*=2.54;
	     cout<<l2.in<<" centimetres"<<endl;
	     tot=l1.m+l1.cm+l2.ft+l2.in;
	     cout<<"\n\t\tTotal Length in centimetres : "<<tot<<" cm";
	     break;
    case 'f':cout<<"\n\n"<<l2.ft<<" Feets"<<endl<<l1.m<<" metres =";
	     l1.m*=3.280721;
	     cout<<l1.m<<" Feets"<<endl<<l1.cm<<" Centimetres =";
	     l1.cm*=0.0328202;
	     cout<<l1.cm<<" Feets"<<endl<<l2.in<<" Inches =";
	     l2.in*=0.0833;
	     cout<<l2.in<<" Feets"<<endl;
	     tot=l1.m+l1.cm+l2.ft+l2.in;
	     cout<<"\n\t\tTotal Length in feets : "<<tot<<" ft";
	     break;
    case 'i':cout<<"\n\n"<<l2.in<<" Inches"<<endl<<l1.m<<" metres =";
	     l1.m*=39.37;
	     cout<<l1.m<<" Inches"<<endl<<l1.cm<<" Centimetres =";
	     l1.cm*=0.394;
	     cout<<l1.cm<<" Inches"<<endl<<l2.ft<<" Feets =";
	     l2.ft*=12;
	     cout<<l2.ft<<" Inches"<<endl;
	     tot=l1.m+l1.cm+l2.ft+l2.in;
	     cout<<"\n\t\tTotal Length in inches : "<<tot<<" in";
	     break;
  }
}
void main()
{
  clrscr();
  char ch;
  len1 l1;
  len2 l2;
  l1.insert();
  l2.insert();
  cout<<"\n\tIn which unit do you want the entire data ? ";
  cin>>ch;
  convert(l1,l2,ch);
  getch();
}

