#include<stdio.h>
#include<conio.h>
#include<math.h>
int count=0;
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
int hex_dec(U8 f)
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
}
void main()
{
  struct DF_optional d;
  char ch,c[30],*s;
  U16 i=0,j;
  FILE *p;
  clrscr();
  p=fopen("apdu.txt","r");
  /*fprintf(p,"hello tejaswin");
  rewind(p);
  fscanf(p,"%d",a);
  while((ch[i++]=fgetc(p))!=EOF);
  ch[++i]='e';   i=0;
  for(i=0;ch[i]!='e';i++)
	{*/
  ch=fgetc(p);

    switch(ch)
    {
      case '6':fseek(p,2L,SEEK_SET);
	       fgets(s,3,p);
	       d.df.fcp=atoi(s);
	       printf("%d",d.df.fcp);
	       d.df.fcp=hex_dec(d.df.fcp);
	       printf("\t%d\n\n",d.df.fcp);
	       rewind(p);
		       //printf("%d",

	       while((c[i]=fgetc(p))!=EOF){printf("%c",c[i]);i++;}
	       //printf("%d",d.df.fcp);
	       //c[i]='e';
	       for(j=4;j<i;j+=2)

		count++;
	       printf("\n%d %d",count,d.df.fcp);
	       if(count==d.df.fcp)
		 printf("Valid");
	       else
	       printf("Invalid");
	       /*d.df.fcp=c[i+2]-48;
	       d.df.fcp=(d.df.fcp*10)+(ch[i+3]-48);
		printf("%d",d.df.fcp);
	       for(i=4;ch[i]!='e';i+=2)
		 count++;
*/
	       break;
    }
  //}
  fclose(p);
  getch();
}