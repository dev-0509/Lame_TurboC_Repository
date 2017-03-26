#include<stdio.h>
#include<conio.h>
void input_array(int *p,int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("\n\t\tEnter element %d : ",i+1);
    scanf("%d",(p+i));
  }
}
void display_array(int *p,int n)
{
  int i;
  for(i=0;i<n;i++)
    printf("%d\t",*(p+i));
}
void linear_search(int *p,int n)
{
  int i,elem;
  printf("\n\tEnter the element to be searched : ");
  scanf("%d",&elem);
  for(i=0;i<n;i++)
  {
    if(*(p+i)==elem)
    {
      printf("\n\tElement %d found at position %d !",elem,i+1);
      return;
    }
  }
  printf("\n\tElement %d not found in the array !");
}
void binary_search(int *p,int n)
{
  int max,min,mid,elem;
  printf("\n\tEnter the element to be searched : ");
  scanf("%d",&elem);
  min=0;
  max=n;
  while(min<=max)
  {
    mid=(max+min)/2;
    if(elem<*(p+mid))
      max=mid-1;
    if(elem>*(p+mid))
      min=mid+1;
    if(elem==*(p+mid))
    {
      printf("\n\tElement %d found at position %d !",elem,mid+1);
      return;
    }
  }
  printf("\n\tElement %d not found in the array !",elem);
}
void selection_sort(int *p,int n)
{
  int i,j,temp;
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(*(p+i)>*(p+j))
      {
	temp=*(p+i);
	*(p+i)=*(p+j);
	*(p+j)=temp;
      }
    }
  }
}
void improvised_selection_sort(int *p,int n)
{
  int i,j,k,temp;
  for(i=0;i<n;i++)
  {
    k=i;
    for(j=i+1;j<n;j++)
    {
      if(*(p+k)>*(p+j))
	k=j;                     // Do not swap when greater value is found
    }
    if(i!=k)
    {
      temp=*(p+k);
      *(p+k)=*(p+i);
      *(p+i)=temp;
    }
  }
}
void bubble_sort(int *p,int n)
{
  int i,j,temp;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-1-i;j++)
    {
      if(*(p+j)>*(p+j+1))
      {
	temp=*(p+j);
	*(p+j)=*(p+j+1);
	*(p+j+1)=temp;
      }
    }
  }
}
void improvised_bubble_sort(int *p,int n)
{
  int i,j,temp,ctr=0;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-1-i;j++)
    {
      if(*(p+j)>*(p+j+1))
      {
	ctr++;                    // Loop is not true so 'ctr' remains 0
	temp=*(p+j);
	*(p+j)=*(p+j+1);
	*(p+j+1)=temp;
      }
    }
    if(ctr==0)   // If 'ctr' is 0, no more swapping comparisons are required
      break;
  }
}
void insertion_sort(int *p,int n)
{
  int i,j,temp;
  for(i=1;i<n;i++)
  {
    for(j=i;j>0;j--)
    {
      if(*(p+j)<*(p+j-1))
      {
	temp=*(p+j-1);
	*(p+j-1)=*(p+j);
	*(p+j)=temp;
      }
    }
  }
}
void improvised_insertion_sort(int *p,int n)
{
  int i,j,temp;
  for(i=1;i<n;i++)
  {
    for(j=i;j>0;j--)
    {
      if(*(p+j)<*(p+j-1))
      {
	temp=*(p+j-1);
	*(p+j-1)=*(p+j);
	*(p+j)=temp;
      }
      else      // Do not run 'j' more as array before 'i' is already sorted
	break;
    }
  }
}
void shaker_sort(int *p,int n)
{
  int i,j,k,temp;
  for(i=0,j=n-1;i<j;i++)         // Bubble Sort
  {
    for(k=i;k<j;k++)
    {
      if(*(p+k)>*(p+k+1))
      {
	temp=*(p+k);
	*(p+k)=*(p+k+1);
	*(p+k+1)=temp;
      }
    }
    j=j-1;
    for(k=j;k>i;k--)             // Insertion Sort
    {
      if(*(p+k)<*(p+k-1))
      {
	temp=*(p+k);
	*(p+k)=*(p+k-1);
	*(p+k-1)=temp;
      }
    }
  }
}
void merge_sort(int *p,int *q,int n,int m)
{
  int a[30],i=0,j=0,k=0;
  while(i<n&&j<m)
  {
    if(*(p+i)>*(q+j))
    {
      a[k++]=*(q+j);
      j++;
    }
    else
    {
      a[k++]=*(p+i);
      i++;
    }
  }
  while(i<n)
  {
    a[k++]=*(p+i);
    i++;
  }
  while(j<m)
  {
    a[k++]=*(q+j);
    j++;
  }
  for(i=0;i<m+n;i++)
    printf("%d \t",a[i]);
  //return a;
}
void radix_sort(int *p,int n)
{
  int sum,m,q[10][10],rear[10]={0,0,0,0,0,0,0,0,0,0},i,j,k;
  for(sum=10;sum<=1000;sum*=10)
  {
    for(i=0;i<n;i++)
    {
      m=(*(p+i)%sum)*10/sum;
      q[m][rear[m]++]=*(p+i);
    }
    k=0;
    for(i=0;i<10;i++)
    {
      for(j=0;j<rear[i];j++)
	*(p+(k++))=q[i][j];
      rear[i]=0;
    }
  }
}
void main()
{
  int arr[20],arr2[20],ch1,ch2,ch3,n,m;
//  int *ptr;
  clrscr();
  printf("\t<----- ARRAY ALGORITHMS : SEARCHING AND SORTING ----->");
  printf("\n\n1. Searching\n2. Sorting\n3. Exit\n\t\tChoice : ");
  scanf("%d",&ch1);
  switch(ch1)
  {
    case 1:while(1)
	   {
	   printf("\n\n\t\t\t-:- Searching Algorithms -:-\n\t1. Linear Search\n\t2. Binary Search\n\t3. Exit\n\t\tChoice : ");
	   scanf("%d",&ch2);
	   switch(ch2)
	   {
	     case 1:printf("\n\n\tSpecify the total array elements : ");
		    scanf("%d",&n);
		    input_array(arr,n);
		    linear_search(arr,n);
		    break;
	     case 2:printf("\n\n\tSpecify the total array elements : ");
		    scanf("%d",&n);
		    input_array(arr,n);
		    binary_search(arr,n);
		    break;
	     case 3:return;
	     default:printf("\n\tInvalid Choice !");
	   }
	   }
	   break;
    case 2:while(1)
	   {
	     printf("\n\n\t\t\t-:- Sorting Alogorithms -:-\n\n* Generalised Sorting *\t\t* Improvised Sorting *\n\n1. Selection Sort\t\t2. Improvised Selection Sort\n3. Bubble Sort\t\t\t4. Improvised Bubble Sort\n5. Insertion Sort\t\t6. Improvised Insertion Sort\n7. Shaker Sort\n8. Merge Sort\n9. Radix / Bucket Sort\n\n10. Exit");
	     printf("\n\n\tChoice (1-10) : ");
	     scanf("%d",&ch3);
	     switch(ch3)
	     {
	       case 1:printf("\n\tSpecify the total array elements : ");
		      scanf("%d",&n);
		      input_array(arr,n);
		      selection_sort(arr,n);
		      printf("\n\tThe Sorted Array is => \n\n");
		      getch();
		      display_array(arr,n);
		      break;
	       case 2:printf("\n\tSpecify the total array elements : ");
		      scanf("%d",&n);
		      input_array(arr,n);
		      improvised_selection_sort(arr,n);
		      printf("\n\tThe Sorted Array is => \n\n");
		      getch();
		      display_array(arr,n);
		      break;
	       case 3:printf("\n\tSpecify the total array elements : ");
		      scanf("%d",&n);
		      input_array(arr,n);
		      bubble_sort(arr,n);
		      printf("\n\tThe Sorted Array is => \n\n");
		      getch();
		      display_array(arr,n);
		      break;
	       case 4:printf("\n\tSpecify the total array elements : ");
		      scanf("%d",&n);
		      input_array(arr,n);
		      improvised_bubble_sort(arr,n);
		      printf("\n\tThe Sorted Array is => \n\n");
		      getch();
		      display_array(arr,n);
		      break;
	       case 5:printf("\n\tSpecify the total array elements : ");
		      scanf("%d",&n);
		      input_array(arr,n);
		      insertion_sort(arr,n);
		      printf("\n\tThe Sorted Array is => \n\n");
		      getch();
		      display_array(arr,n);
		      break;
	       case 6:printf("\n\tSpecify the total array elements : ");
		      scanf("%d",&n);
		      input_array(arr,n);
		      improvised_insertion_sort(arr,n);
		      printf("\n\tThe Sorted Array is => \n\n");
		      getch();
		      display_array(arr,n);
		      break;
	       case 7:printf("\n\tSpecify the total array elements : ");
		      scanf("%d",&n);
		      input_array(arr,n);
		      shaker_sort(arr,n);
		      printf("\n\tThe Sorted Array is => \n\n");
		      getch();
		      display_array(arr,n);
		      break;
	       case 8:printf("\n\tSpecify the total array elements for the first array : ");
		      scanf("%d",&n);
		      input_array(arr,n);
		      selection_sort(arr,n);
		      printf("\n\tSpecify the total array elements for the second array : ");
		      scanf("%d",&m);
		      input_array(arr2,m);
		      selection_sort(arr2,m);
		      merge_sort(arr,arr2,n,m);
		      printf("\n\tThe Sorted Array is => \n\n");
		      getch();
		      //display_array(ptr,m+n);
		      break;
	       case 9:printf("\n\tSpecify the total array elements : ");
		      scanf("%d",&n);
		      input_array(arr,n);
		      radix_sort(arr,n);
		      printf("\n\tThe Sorted Array is => \n\n");
		      getch();
		      display_array(arr,n);
		      break;
	       case 10:return;
	       default:printf("\n\nInvalid Choice !");
	     }
	   }
	   break;
    case 3:return;
    default:printf("\n\tInvalid Choice !");
  }
  getch();
}
