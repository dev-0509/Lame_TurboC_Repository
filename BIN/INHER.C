#include<iostream.h>
#include<conio.h>
class stud
{
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
  int m[5];
  public:
	 void enter()
	 {
	   for(int i=0;i<5;i++)
	   {
	     cout<<"\n\tEnter the marks in subject "<<i+1<<" : ";
	     cin>>m[i];
	   }
	 }
	 void disp()
	 {
	   for(int i=0;i<5;i++)
	   {
	     printf("\n\t\tSubject "<<i+1<<" : "<<m[i];
	   }
	 }
};
class perc:private stud,private marks
{
  int p;
  public:
	 int calc()
	 {
	   for(int i=0;i<5;i++)
	     sum+=m[i];
	   p=sum/5;
	   p*=100;
	   return p;
	 }
	 void disp(int per)
	 {
	   cout<<"\n\tStudent Details =>\n\n";
	   cout<<"\t\tRoll Number : "<<roll;
	   cout<<"\n\t\tAge : "<<age;
	   cout<<"\n\t\tPercentage : "<<per;
	 }
};
void main()
{
  int p1;
  perc a;
  a.stud::enter();
  a.stud::disp();
  a.marks::enter();
  a.stud::disp();
  p1=a.calc();
  a.perc::disp(p1);
  getch();
}





