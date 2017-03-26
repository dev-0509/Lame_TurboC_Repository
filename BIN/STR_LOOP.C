void main(int argc, char *argv[])
{
  
  int ch=atoi(*argv[2]);
  int len=0,i=0,chk=1;
  char c,temp;
  clrscr();
  printf("\n\t\t1. String Reversal :- While Loop");
  printf("\n\t\t2. String Reversal :- For Loop");
  printf("\n\t\t3. String Reversal :- Do-While Loop");
  printf("\n\t\t4. Exit");
  //do
  //{

  /*printf("\n\n\t\t\tEnter your choice(1-4) : ");
  scanf("%d",&ch);
  if(ch!=4)
  {
    printf("\n\t\tEnter the *(argv+1)ing : ");
    fflush(stdin);
    gets(*(argv+1));
  }*/

  switch(ch)
  {
    case 1: while(*(*(argv+1)+len)!='\0')
	      len++;
	    len--;
	    while(i<=len)
	    {
	      temp=*(*(argv+1)+i);
	      *(*(argv+1)+i)=*(*(argv+1)+len);
	      *(*(argv+1)+len)=temp;

	      i++;
	      len--;
	    }
	    break;
    /*case 2: for(;*(argv+1)[len]!='\0';len++);
	    len--;
	    for(;i<=len;i++,len--)
	    {
	      temp=*(argv+1)[i];
	      *(argv+1)[i]=*(argv+1)[len];
	      *(argv+1)[len]=temp;
	    }
	    break;
    case 3: do
	    {
	      if(chk==1)
	      {
		if(*(argv+1)[len]!='\0')
		  len++;
		chk=0;
	      }
	      else
		len++;
	    }while(*(argv+1)[len]!='\0');
	    chk=1;
	    do
	    {
	      if(chk==1)
	      {
		len--;
		if(i<=len)
		{
		  temp=*(argv+1)[i];
		  *(argv+1)[i]=*(argv+1)[len];
		  *(argv+1)[len]=temp;

		  i++;
		  len--;
		  chk=0;
		}
	      }
	      else
	      {
		temp=*(argv+1)[i];
		*(argv+1)[i]=*(argv+1)[len];
		*(argv+1)[len]=temp;

		i++;
		len--;
	      }
	    }while(i<=len);
	    break;
    case 4: getch();
	    return;
    default: printf("\n\tInvalid Choice !");
	     break;
  }
  printf("\n\n\t\tThe reversed *(argv+1)ing is => ");
  puts(*(argv+1));
  printf("\n\n\tContinue (y/n) ? : ");
  c=getch();
  }while(c=='y');*/
  }
puts(*argv+1);
  getch();
}