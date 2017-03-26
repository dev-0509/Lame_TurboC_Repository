#include<stdio.h>
#include<conio.h>
void disp(struct sample);
  struct sample
  {
    int age;
    char name[25];
    float sal;
  }s;
void main()
{
  clrscr();
  printf("\n\tEnter the age : ");
  scanf("%d",&s.age);
  printf("\n\tEnter the name : ");
  scanf("%s",&s.name);
  printf("\n\tEnter the salary : ");
  scanf("%f",&s.sal);
//  disp(s.age,s.name,s.sal);
  disp(s);
  getch();
}
//void disp(int age,char *name,float sal)
void disp(struct sample s)
{
  printf("\n\tAge : %d",age);
  printf("\n\tName : %s",name);
  printf("\n\tSalary : %f",sal);
}


