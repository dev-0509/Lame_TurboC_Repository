#include<stdio.h>
#include<conio.h>
void main()
{

FILE *p, *q;
int temp, i = 0, j, k, arr[100];
char ch;
clrscr();
p = fopen("input.txt","r");
q = fopen("output.txt","w");

while((ch=fgetc(p))!=EOF)
{

if(ch == '\n')
  continue;

arr[i] = ch-48;
i++;
}

for(j = 0; j < i; j++)
{

for(k = 0; k < i-1-j; k++)
{

if(arr[k] > arr[k+1])
{

temp = arr[k];
arr[k] = arr[k+1];
arr[k+1] = temp;

}

}

}

for(j= 0; j < i; j++)
{
  fprintf(q,"%d",arr[j]);
  if(j != i-1)
    fprintf(q,"%c",10);
}

}