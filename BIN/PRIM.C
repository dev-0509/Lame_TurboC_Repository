void main(int argc,int *argv[])
{
	int i,j,count=0,n;
	n=atoi(argv[1]);
	// printf("%d",argc);
	for(i=2;i<n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		if(i==j)
			count++;
	}
	printf("There are %d prime numbers below %d",count,n);
}