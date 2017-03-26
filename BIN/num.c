void main(int argc,int *argv[])
{
	int a,b,c;
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	c=atoi(argv[3]);
	if(a>b)
	{
		if(a>c)
		{
			printf("%d is the largest",a);
			if(b>c)
			{
				printf("\n%d is the middle number",b);
				printf("\n%d is the smallest",c);
			}
			else
			{
				printf("\n%d is the middle number",c);
				printf("\n%d is the smallest",b);
			}
		}
		else
		{
			printf("\n%d is the largest",c);
			printf("\n%d is the middle number",a);
			printf("\n%d is the smallest",b);
		}
	}
	else
	{
		if(b>c)
		{
			printf("\n%d is largest",b);
			if(a>c)
			{
				printf("\n%d is the middle number",a);
				printf("\n%d is smallest",c);
			}
			else
			{
				printf("\n%d is the middle number",c);
				printf("\n%d is smallest",a);
			}
		}
		else
		{
			printf("\n%d is largest",c);
			printf("\n%d is the middle number",b);
			printf("\n%d is smallest",a);
		}
	}
}