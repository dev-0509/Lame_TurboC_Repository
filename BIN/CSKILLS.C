
int main(int argc,char *argv[])
{
  int i;
  clrscr();
  for(i=0;i<argc;i++)
    printf("%s",argv[i]);
  getch();
  return 0;
}