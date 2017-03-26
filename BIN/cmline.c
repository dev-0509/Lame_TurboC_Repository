void main(int argc,int *argv[])
{
	int i;
	printf("\n\t\tNumber of Arguements : %d",argc);
	for(i=1;i<argc;i++)
	{
		printf("\n\t\tArguement %d : %s",i,argv[i]);
	}
}