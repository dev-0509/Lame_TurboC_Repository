#include<stdio.h>
#include<conio.h>
void copy(char *,char *);
void concatenate(char *,char *);
void reverse(char *);
void compare(char *,char *);
void main()
{
  char c,str1[25],str2[25];
  int ch;
  clrscr();
  printf("\t\tSTRING OPEARTIONS");
  printf("\n\n\t1. Copy Strings");
  printf("\n\t2. Concatenate Strings");
  printf("\n\t3. Reverse a String");
  printf("\n\t4. Compare two Strings");
  printf("\n\t5. Exit");
  do
  {
    printf("\n\n\t\tEnter your choice (1-5) : ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:printf("\n\n\t\tEnter the first string : ");
	     scanf("%s",&str1);
	     printf("\n\n\t\tEnter the second string : ");
	     scanf("%s",&str2);
	     copy(str1,str2);
	     break;
      case 2:printf("\n\n\t\tEnter the first string : ");
	     scanf("%s",&str1);
	     printf("\n\n\t\tEnter the second string : ");
	     scanf("%s",&str2);
	     concatenate(str1,str2);
	     break;
      case 3:printf("\n\n\t\tEnter the string : ");
	     scanf("%s",str1);
	     reverse(str1);
	     break;
      case 4:printf("\n\n\t\tEnter the first string : ");
	     scanf("%s",&str1);
	     printf("\n\n\t\tEnter the second string : ");
	     scanf("%s",&str2);
	     compare(str1,str2);
	     break;
      case 5:exit();
      default:printf("\n\n\t\tInvalid Choice !");
    }
    printf("\n\n\tDo you want to continue ? (y/n) : ");
    scanf("%c",&c);
    c=getchar();
  }while(c=='y');
  getch();
}
void copy(char *p,char *q)
{
  int i=0;
  while(*(q+i)!='\0')
  {
    *(p+i)=*(q+i);
    i++;
  }
  *(p+i)='\0';
  i=0;
  printf("\n\n\t\tThe string after copying => \n\n");
  while(*(p+i)!='\0')
  {
    printf("%c",*(p+i));
    i++;
  }
}
void concatenate(char *p,char *q)
{
  int i,j=0;
  for(i=0;*(p+i)!='\0';i++);
  while(*(q+j)!='\0')
  {
    *(p+i)=*(q+j);
    i++;
    j++;
  }
  *(p+i)='\0';
  i=0;
  printf("\n\n\t\tThe concatenated string is => \n\n");
  while(*(p+i)!='\0')
  {
    printf("%c",*(p+i));
    i++;
  }
}
void reverse(char *p)
{
  int i;
  for(i=0;*(p+i)!='\0';i++);
  printf("\n\n\t\tThe reversed string is => \n\n");
  while(i>=0)
  {
    printf("%c",*(p+i));
    i--;
  }
}
void compare(char *p,char *q)
{
  int i,j,temp1,a=0;
  for(i=0;*(p+i)!='\0';i++);
  for(j=0;*(q+j)!='\0';j++);
  temp1=i;
  i=0;
  while(*(p+i)!='\0')
  {
    if(*(p+i)==*(q+i))
    a++;
    i++;
  }
  if(a==temp1&&a==j)
  printf("\n\n\t\tBoth the strings are equal !");
  else
  printf("\n\n\t\tThe strings are not equal");
}



