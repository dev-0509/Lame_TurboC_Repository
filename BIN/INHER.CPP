#include<iostream.h>
#include<conio.h>
class stud
{
  protected:
	    int roll,age;
  public:
	 void enter()
	 {
	   cout<<"\n\tEnter the roll number : ";
	   cin>>roll;
	   cout<<"\n\tEnter the age : ";
	   cin>>age;
	 }
	 void disp()
	 {
	   cout<<"\n\t\tRoll Number : "<<roll<<"\n\t\tAge : "<<age;
	 }
};
class marks
{
  protected:
	    int m[5];
  public:
	 void enter();
	 void disp();
};
void marks::enter()
{
   for(int i=0;i<5;i++)
   {
     cout<<"\n\tEnter the marks in subject "<<i+1<<" : ";
     cin>>m[i];
   }
}
void marks::disp()
{
   for(int i=0;i<5;i++)
     cout<<"\n\t\tSubject "<<i+1<<" : "<<m[i];
}
class perc:public stud,public marks
{
  int p;
  public:
	 float calc();
	 void disp(float per)
	 {
	   cout<<"\n\tStudent Details =>\n\n";
	   cout<<"\t\tRoll Number : "<<roll;
	   cout<<"\n\t\tAge : "<<age;
	   cout<<"\n\t\tPercentage : "<<per;
	 }
};
float perc::calc()
{
  float sum=0;
  for(int i=0;i<5;i++)
    sum+=m[i];
  p=sum/5;
  return p;
}
void main()
{
  float p1;
  clrscr();
  perc a;
  a.stud::enter();
  a.stud::disp();
  a.marks::enter();
  a.marks::disp();
  p1=a.calc();
  a.perc::disp(p1);
  getch();
}





