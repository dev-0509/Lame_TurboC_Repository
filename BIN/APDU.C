#include<stdio.h>
#include<conio.h>
#include<get.h>
#include<math.h>
FILE *t;
int count=0;
char c[30];
typedef unsigned int U16;
typedef unsigned char U8;
struct DF_mandatory
{
  U16 f_size;
  U8 fcp;
  U16 desc;
  U16 f_id;
  U8 lcsi;
  U8 sa;
  U8 pin;
};
struct DF_optional
{
  struct DF_mandatory df;
  U8 prop;
};
/*U8 hex_dec(U8 f)
{
  int i=0,n,num=0;
  while(f!=0)
  {
    n=f%10;
    n*=(pow(16,i));
    num+=n;
    f/=10;
    i++;
  }
  return num;
}*/
int length_validate(FILE *p,int temp)
{
  int i=0,j;
  rewind(p);
  while((c[i]=fgetc(p))!=EOF)i++;//{printf("%c",c[i]);i++;}
  //printf("\t%d\n\n",*temp);
  for(j=4;j<i;j+=2)
    count++;
  //printf("\n%d",count);//,d.df.fcp);
  if(count==temp)
  {
    //printf(" %d",*temp);
    return 1;
  }
  else
    return 0;
}
/*int get_length(FILE *p)
{
  char *s;
  int temp;
  fseek(p,2L,SEEK_SET);
  fgets(s,3,p);
  temp=atoi(s);
  printf("Hexadecimal - %d",temp);
  //t=p;
  //printf("this-%ld",ftell(t));
  temp=hex_dec(temp);
  printf("\tDecimal - %d\n\n",temp);
  //val=temp;
  if(length_validate(p,temp)==1)
  {

    //printf(" %ld",ftell(t));
    return temp;
  }
  else
    return 0;
}*/
void main()
{
  struct DF_optional d;
  FILE *p;
  int i=0;
  clrscr();
  p=fopen("apdu.txt","r");
  t=p;
  //while(1)
  //{
  /*fgets(s,3,p);
  //puts(s);
  while(s[i]!='\0')
  printf("%c",s[i]);*/
    switch(fgetc(p))
    {
      case '6':d.df.fcp=get_length(p);
	       d.df.fcp==0?(printf("\t\nError ! 6A80 : Incorrect Parameters")):(printf("\t\nFile FCP = %d (Valid)",d.df.fcp));
	       //rewind(p);
	       //rewind(p);
	       /*fgets(s,40,p);
	       puts(s);
	       len=strlen(s);
	       printf("%d",len);*/
	       /*printf("\t%d\n\n",d.df.fcp);
	       rewind(p);
	       printf("\t%d\n\n",d.df.fcp);*/
	       //break;
      /*case '8':/*rewind(p);
	       fseek(p,4L,SEEK_SET);
	       printf("%ld",ftell(p));
	       switch(fgetc(p))
	       {
		 case '2':printf("%c",fgetc(p));
			  fgets(s,3,p);
			  puts(s);
			  break;
	       }*/

    //}
    }
    fclose(p);
    getch();
}