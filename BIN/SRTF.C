#include<stdio.h>
#include <conio.h>
void main()
{
   int a[10],b[10],x[10],i,j,smallest,count=0,time,n;
   double avg=0,tt=0,end;
   clrscr();
   printf("\t\t\tCOPYRIGHTS -- DEV --");
   printf("\n\n\tEnter the number of Processes: ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     printf("\n\t\tEnter the arrival time for process p[%d]: ",i+1);
     scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
     printf("\n\t\tEnter burst time for process p[%d]: ",i+1);
     scanf("%d",&b[i]);
   }
   for(i=0;i<n;i++)
   x[i]=b[i];
   b[9]=9999;
   for(time=0;count!=n;time++)
   {
     smallest=9;
     for(i=0;i<n;i++)
     {
       if(a[i]<=time && b[i]<b[smallest] && b[i]>0 )
       smallest=i;
     }
     b[smallest]--;
     if(b[smallest]==0)
     {
       count++;
       end=time+1;
       avg=avg+end-a[smallest]-x[smallest];
       tt= tt+end-a[smallest];
     }
   }
   printf("\n\n\tAverage waiting time = %lf\n",avg/n);
   printf("\n\tAverage Turnaround time = %lf",tt/n);
   getch();
}
