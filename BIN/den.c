void main(int argc,int *argv[])
{
	int amt,n;
	amt=atoi(argv[1]);
	printf("The Money Denominations of the amount entered is : \n");
	if(amt>=1000)
	{
		n=amt/1000;
		printf("\t1000 X %d = %d",n,1000*n);
		amt%=1000;
	}
	if(amt>=500)
	{
		n=amt/500;
		printf("\n\t500  X %d = %d",n,500*n);
		amt%=500;
	}
	if(amt>=100)
	{
		n=amt/100;
		printf("\n\t100  X %d = %d",n,100*n);
		amt%=100;
	}
	if(amt>=50)
	{
		n=amt/50;
		printf("\n\t50   X %d = %d",n,50*n);
		amt%=50;
	}
	if(amt>=20)
	{
		n=amt/20;
		printf("\n\t20   X %d = %d",n,20*n);
		amt%=20;
	}
	if(amt>=10)
	{
		n=amt/10;
		printf("\n\t10   X %d = %d",n,10*n);
		amt%=10;
	}
	if(amt>=5)
	{
		n=amt/5;
		printf("\n\t5    X %d = %d",n,5*n);
		amt%=5;
	}
	if(amt>=2)
	{
		n=amt/2;
		printf("\n\t2    X %d = %d",n,2*n);
		amt%=2;
	}
	if(amt>=1)
	{
		n=amt/1;
		printf("\n\t1    X %d = %d",n,1*n);
		amt%=1;
	}
}