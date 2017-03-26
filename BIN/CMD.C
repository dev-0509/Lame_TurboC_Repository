void main(int argc,char *argv[])
{
  int i;
  printf("\n\n\tCommand Line Arguements : %d",argc);
  for(i=1;i<argc;i++)
  {
    printf("\n\t\tArguement %d : %s",i,argv[i]);
  }
}