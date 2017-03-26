#include<stdio.h>
#include<conio.h>
void main()
{
  float avgwt,avgtat;
  int bt[10],p[10],n,temp1,temp2,tat[10],wt[10],i,j,sum=0;
  clrscr();
  printf("\t\t\tCOPYRIGHTS -- DEV --");
  printf("\n\n\tEnter the number of processes: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("\n\t\tEnter the burst time and priority of process %d:",i);
    scanf("%d %d",&bt[i],&p[i]);
  }
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
      if(p[j]>p[j+1])
      {
	temp1=p[j]; temp2=bt[j];
	p[j]=p[j+1];bt[j]=bt[j+1];
	p[j+1]=temp1;bt[j+1]=temp2;
      }
    }
  }
  for(i=1;i<=n;i++)
  {
    sum=0;
    for(j=1;j<=i;j++)
    {
      sum=sum+bt[j];
    }
    tat[i]=sum;
    wt[i]=tat[i]-bt[i];
  }
  printf("\n TAT: ");
  for(i=1;i<=n;i++)
  {
    printf("\n\t %d",tat[i]);
  }
  printf("\n WT: ");
  for(i=1;i<=n;i++)
  {
    printf("\n\t %d",wt[i]);
  }
  for(i=1;i<=n;i++)
  {
    avgtat=(avgtat+tat[i])/n;
    avgwt=(avgwt+wt[i])/n;
  }
  printf("\n\n\n\tAverage TAT = %f \t Average WT =   %f",avgtat,avgwt);
  getch();
}
