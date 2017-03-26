#define MAX 10
struct stk
{
	int st[MAX];
	int top;
}s;
void push(int val)
{
	if(s.top==MAX-1)
	{
		printf("\n\tOverflow !");
		return;
	}
	s.top++;
	s.st[s.top]=val;
}
int pop()
{
	int val;
	if(s.top==-1)
	{
		printf("\n\tUnderflow !");
		return 0;
	}
	val=s.st[s.top];
	return val;
}
void disp()
{
	int i;
	printf("\n\t\tStack Status => ");
	for(i=0;i<s.st[s.top];i++)
		printf("\t%d",s.st[i]);
}
void main(int argc,int *argv[])
{
	int ch,val;
	s.top=-1;
	//while(1)
	//{
		printf("\n\t\t1. Push an Element");
		printf("\n\t\t2. Pop an Element");
		printf("\n\t\t3. Exit");
		printf("\n\n\tEnter yoiur choice (1-3) : ");
		ch=atoi(argv[1]);
		switch(ch)
		{
			case 1:printf("\n\tEnter the element to be pushed : ");
				   val=atoi(argv[2]);
				   push(val);
				   disp();
				   break;
			case 2:printf("\n\tEnter the element to be popped : ");
				   val=pop();
				   disp();
				   break;
			case 3:return;
		}
	//}
}