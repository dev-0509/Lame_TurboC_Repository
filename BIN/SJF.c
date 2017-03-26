#include<stdio.h>
#include<conio.h>
void fcfs(int *,int *,int *,int *,int *,int);
void sort(int *,int *,int);
void disp(int *,int *,int *,int *,int *,int);
void main()
{
  int at[10],tat[10],bt[10],cbt[10],wt[10],n;
  clrscr();
  printf("\nEnter the total number of processes : ");
  scanf("%d",&n);
  fcfs(at,tat,bt,cbt,wt,n);
  disp(at,tat,bt,cbt,wt,n);
  getch();
}
void fcfs(int *at,int *tat,int *bt,int *cbt,int *wt,int n)
{
  int i,a=0,j;
  for(i=0;i<n;i++)
  {
    printf("\n\tEnter the arrival time of process %d : ",i+1);
    scanf("%d",(at+i));
    printf("\n\tEnter the CPU burst of process %d : ",i+1);
    scanf("%d",(bt+i));
  }
  sort(bt,at,n);
  for(i=0;i<n;i++)
  *(cbt+i)=*(bt+i);
  for(i=0;i<n;i++)
  {
    for(j=i;j<=i;j++)
    {
      if(a>0)
      {
	if(a==1)
	*(bt+j)=*(at+j-1)+*(bt+j-1);
	else
	*(bt+j)=*(cbt+j-1)+*(bt+j-1);
      }
    }
    a++;
  }
  a=0;
  for(i=0;i<n;i++)
  {
    if(a>0)
    {
      *(wt+i)=*(bt+i)-*(at+i);
      if(a<=n-2)
      *(tat+i)=*(bt+i+1)-*(at+i);
      else
      *(tat+i)=(*(bt+i)+*(cbt+i))-*(at+i);
    }
    a++;
  }
}
void sort(int *bt,int *at,int n)
{
  int i,j,temp1, temp2;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-1-i;j++)
    {
      if(*(at+j)>*(at+j+1))
      {
	temp1=*(at+j);
	temp2=*(bt+j);
	*(at+j)=*(at+j+1);
	*(bt+j)=*(bt+j+1);
	*(at+j+1)=temp1;
	*(bt+j+1)=temp2;
      }
    }
  }
}
void disp(int *at,int *tat,int *bt,int *cbt,int *wt,int n)
{
  int i;
  float awt=0,att=0;
  printf("\n\n\t\t--- FCFS ANALYSIS ---");
  printf("\n\nPROCESS\t  ARRIVAL TIME\tCPU BURST\t  WT\t  TAT\n");
  printf("______________________________________________________\n\n");
  printf("  P1\t       %d\t   %d\t    =>\t  0\t  %d",*at,*cbt,*bt);
  for(i=1;i<n;i++)
  {
    printf("\n\n");
    printf("  P%d\t       %d\t   %d\t    =>\t  %d\t  %d",i+1,*(at+i),*(cbt+i),*(wt+i),*(tat+i));
    awt+=*(wt+i);
    att+=*(tat+i);
  }
  awt=awt/n;
  att=(att+*bt)/n;
  printf("\n\n\n:-> Average Waiting Time for the Processes = %.3f",awt);
  printf("\n\n:-> Average Turn Around Time for the Processes = %.3f",att);
}









