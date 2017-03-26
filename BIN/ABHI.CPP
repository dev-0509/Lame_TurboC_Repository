#include<iostream.h>
#include<conio.h>
class stud
{
 protected:
 int rollno,age;
 public:
 void accept()
 {
   cout<<"\n Enter the roll number and age of the student: ";
   cin>>rollno>>age;
 }
};
class marks:public stud
{
  protected:
  int m1,m2;
  public:
  void take()
  {
    cout<<"\n Enter the marks in wo subjects: ";
    cin>>m1,m2;
  }
};
class result:public marks,public sports
{
  public:
  void disp()
  {
    cout<<"\n The total marks is "<<m1+m2+sportsgrade;
  }
};
class sports
{
  protected:
  int sportsgrade;
  public:
  void input()
  {
    cout<<"\n Enter the sprots quota grade: ";
    cin>>sportsgrade;
  }
};
void main()
{
  clrscr();
  result s1;
  s1.accept();
  s1.take();
  s1.input();
  s1.disp();
  getch();
}