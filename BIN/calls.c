void main(int argc,int *argv[])
{
	int copy_tcalls,tcalls;
	float bill;
	tcalls=atoi(argv[1]);
	copy_tcalls=tcalls;
	if(copy_tcalls>500)
	{
		if(copy_tcalls>1000)
		{
			if(copy_tcalls>1500)
			{
				if(copy_tcalls>2000)
				{
					copy_tcalls-=2000;
					bill=220 + (500*0.75) + (500*1.50) + (500*3) + (copy_tcalls*5);
				}
				else
				{
					copy_tcalls-=1500;
					bill=200 + (500*0.75) + (500*1.50) + (copy_tcalls*3);
				}
			}
			else
			{
				copy_tcalls-=1000;
				bill=220 + (500*0.75) + (copy_tcalls*1.50);
			}
		}
		else
		{
			copy_tcalls-=500;
			bill=220 + (copy_tcalls*0.75);
		}
	}
	else
		bill=220;
	printf("\n\tThe Bill for %d calls is Rs. %.2f",tcalls,bill);
}