#include<stdio.h>
#include<conio.h>
void nprint(int);
void neveodd(int);
void sumeveodd(int);
void table(int);
int digitsum(int);
int revnum(int);
void palindrome(int);
void armstrong(int);
void sumeveodddigits(int);
void sumalternatedig(int);
void fibonacci(int);
void main()
{
  int ch,n,num,res;
  char c;
  clrscr();
  do
  {
    printf("\n\t\tFUNCTION IMPLEMETATION");
    printf("\n\t 1. Print 'n' numbers");
    printf("\n\t 2. Print Even & Odd Numbers upto 'n'");
    printf("\n\t 3. Sum of Even & Odd Numbers upto 'n'");
    printf("\n\t 4. Table of a Number");
    printf("\n\t 5. Sum of digits of a number");
    printf("\n\t 6. Reversing a Number");
    printf("\n\t 7. Check a number for Palindrome");
    printf("\n\t 8. Check a number for Armstrong");
    printf("\n\t 9. Sum of Even and Odd digits of a number");
    printf("\n\t10. Sum of Alternate Digits");
    printf("\n\t11. Print Fibonacci Series upto 'n'");
    printf("\n\t12. Exit");
    printf("\n\n\t\tEnter your choice (1-11) : ");
    scanf("%d",&ch);
    if(ch<=3||ch==11)
    {
      printf("\n\tEnter the range : ");
      scanf("%d",&n);
    }
    else
    {
      printf("\n\tEnter the number : ");
      scanf("%d",&num);
    }
    switch(ch)
    {
      case 1:nprint(n);
	     break;
      case 2:neveodd(n);
	     break;
      case 3:sumeveodd(n);
	     break;
      case 4:table(num);
	     break;
      case 5:res=digitsum(num);
	     printf("\n\t\tSum of digits of %d: %d",num,res);
	     break;
      case 6:res=revnum(num);
	     printf("\n\t\tReversed Number: %d",res);
	     break;
      case 7:palindrome(num);
	     break;
      case 8:armstrong(num);
	     break;
      case 9:sumeveodddigits(num);
	     break;
      case 10:sumalternatedig(num);
	      break;
      case 11:fibonacci(n);
	      break;
      case 12:exit();
      default:printf("\n\t\tInvalid Choice !");
    }
    printf("\n\tDo you want to continue? (y/n): ");
    scanf("%c",&c);
    c=getchar();
  }while(c=='y');
  getch();
}
void nprint(int n)
{
  int i;
  for(i=1;i<=n;i++)
  printf("%d\t",i);
}
void neveodd(int n)
{
  int i;
  printf("\n\t\tEven numbers upto %d: \n\n",n);
  for(i=1;i<=n;i++)
  {
    if(i%2==0)
    printf("%d\t",i);
  }
  printf("\n\t\tOdd numbers upto %d: \n\n",n);
  for(i=1;i<=n;i++)
  {
    if(i%2==1)
    printf("%d\t",i);
  }
}
void sumeveodd(int n)
{
  int i,esum=0,osum=0;
  for(i=1;i<=n;i++)
  {
    if(i%2==0)
    esum+=i;
    else
    osum+=i;
  }
  printf("\n\t\tSum of even numbers upto %d: %d",n,esum);
  printf("\n\t\tSum of odd numbers upto %d: %d",n,osum);
}
void table(int num)
{
  int i,prod;
  for(i=1;i<=10;i++)
  {
    prod=num*i;
    printf(" %d X %d = %d\n",num,i,prod);
  }
}
int digitsum(int num)
{
  int rem,sum=0;
  while(num!=0)
  {
    rem=num%10;
    sum+=rem;
    num/=10;
  }
  return sum;
}
int revnum(int num)
{
  int rem,rev=0;
  while(num!=0)
  {
    rem=num%10;
    rev=(rev*10)+rem;
    num/=10;
  }
  return rev;
}
void palindrome(int num)
{
  int rem,rev=0,c;
  c=num;
  while(num!=0)
  {
    rem=num%10;
    rev=(rev*10)+rem;
    num/=10;
  }
  if(c==rev)
  printf("\n\t\t%d is a Palindrome!",c);
  else
  printf("\n\t\t%d is not a Palindrome",c);
}
void armstrong(int num)
{
  int rem,cube=0,c;
  c=num;
  while(num!=0)
  {
    rem=num%10;
    cube+=(rem*rem*rem);
    num/=10;
  }
  if(c==cube)
  printf("\n\t\t%d is an Armstrong number",c);
  else
  printf("\n\t\t%d is not an Armstrong number",c);
}
void sumeveodddigits(int num)
{
  int esum=0,osum=0,rem;
  while(num!=0)
  {
    rem=num%10;
    if(rem%2==0)
    esum+=rem;
    else
    osum+=rem;
    num/=10;
  }
  printf("\n\t\tSum of even digits = %d",esum);
  printf("\n\t\tSum of odd digits = %d",osum);
}
void sumalternatedig(int num)
{
  int a=0,sum1=0,sum2=0,rem;
  while(num!=0)
  {
    rem=num%10;
    if(a%2==0)
    sum1+=rem;
    else
    sum2+=rem;
    num/=10;
    a++;
  }
  printf("\n\t\tSum of even positions = %d",sum1);
  printf("\n\t\tSum of odd positions = %d",sum2);
}
void fibonacci(int n)
{
  int i,a=0,b=1,sum=0;
  printf("\n\t\tThe Fibonacci Series upto %d :- \n\n",n);
  printf("\t%d\t%d",a,b);
  for(i=1;i<=(n-2);i++)
  {
    sum=a+b;
    a=b;
    b=sum;
    printf("\t%d",sum);
  }
}





