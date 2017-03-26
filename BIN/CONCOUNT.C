#include<stdio.h>
#include<conio.h>
void main()
{
  int a=97,i=0,j=0,temp1=0,temp2=0,c;
  char str[30];
  clrscr();
  printf("\n\tEnter the string : ");
  gets(str);
  printf("\n\t\tThe string is : ");
  puts(str);
  while(str[i]!='\0')
  {
    if(str[i]==a)
    {
      temp1++;
      if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
      {
	temp2++;
      }
    }
    i++;
    a++;
  }
  c=temp1-temp2;
  printf("\n\tNumber of consonants : %d",c);
  getch();
}