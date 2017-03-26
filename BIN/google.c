void main(int argc,int *argv[])
{
	char a[25],b[25];
	int ch,i,l,c=0;
	ch=atoi(arg[0]);
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		for(j=0;j<l;j++)
		{
			for(k=0;k<l;)
			{
				k++;
				if(k==l)
					break;
				if(c==0)
				{
					b[k]=a[i];
					a++;
				}
				else
				{
					b[k]=a[j];
				}
			}
			count++;
			a=0;
		}
	}
	printf("%d",count);
}