#include<stdio.h>
#include<conio.h>
struct tree
{
  int info;
  struct tree *left;
  struct tree *right;
}tr;
struct tree *root=NULL;
struct stack1         // Stack to be used for Preorder and Inorder Traversals
{
  struct tree *stk[1000];
  int top;
}s;
struct stack2             /* Stack to be used for Postorder Traversal
			     (will store left node addresses and right node
			      flags) */
{
  struct tree *stk[100];
  int flag[40];
  int top;
}s1;
int ctr=0,b=0;
void push(struct tree *t)
{
  if(s.top==999)
  {
    printf("\n\tOverflow !");
    return;
  }
  s.stk[++s.top]=t;
}
void push_post(struct tree *t,int f)
{
  if(s1.top==99)
  {
    printf("\n\tOverflow !");
    return;
  }
  s1.top++;
  s1.stk[s1.top]=t;
  s1.flag[s1.top]=f;
}
struct tree * pop()
{
  struct tree *t;
  if(s.top==-1)
  {
    printf("\n\tUnderflow !");
    return 0;
  }
  t=s.stk[s.top];
  s.top--;
  return t;
}
int pop_post()
{
  int v;
  if(s.top==-1)
  {
    printf("\n\tUnderflow !");
    return 0;
  }
  v=s.top;
  s.top--;
  return v;
}
void create_tree()
{
  struct tree *t,*temp;
  t=root;
  temp=(struct tree *)malloc(sizeof(tr));
  temp->left=temp->right=NULL;
  if(root==NULL)
  {
    printf("\n\tEnter the Root Node info : ");
    scanf("%d",&temp->info);
    root=temp;
    printf("\n\tRoot Node created in the tree !");
    return;
  }
  printf("\n\tEnter the Child Node to be inserted : ");
  scanf("%d",&temp->info);
  while(1)
  {
    if(temp->info<t->info)
    {
      if(t->left==NULL)
      {
	t->left=temp;
	printf("\n\tChild Node added in the list !");
	return;
      }
      t=t->left;
    }
    else
    {
      if(t->right==NULL)
      {
	t->right=temp;
	printf("\n\tChild Node added in the list !");
	return;
      }
      t=t->right;
    }
  }
}
void rec_preorder(struct tree *t)
{
  if(!t)
  {
    ctr=1;
    return;
  }
  b=1;
  printf("%d\t",t->info);
  rec_preorder(t->left);
  rec_preorder(t->right);
}
void iter_preorder()
{
	     // ROOT - LEFT - RIGHT
  struct tree *t=root;
  if(t==NULL)
  {
    printf("\n\tTree does not exists !");
    return;
  }
  push(NULL);
  while(1)
  {
    if(t->right!=NULL)
      push(t->right);            /* Check if a Right Node exists and
				    push its address into the stack as
				    it is to be traversed in the last */
    printf("%d\t",t->info);
    t=t->left;

    if(t==NULL)
      t=pop();                   /* If no Left Node exists, pop the last
				    Right Node from the stack and carry on
				    the iteration */
    if(t==NULL)
    return;                      /* If stack pops out NULL, all nodes have
				    been traversed */
  }
}
void rec_postorder(struct tree *t)
{
  if(!t)
  {
    ctr=1;
    return;
  }
  b=1;
  rec_postorder(t->left);
  rec_postorder(t->right);
  printf("%d\t",t->info);
}
void iter_postorder()
{                                 // LEFT - RIGHT - ROOT
  int tp,fl;
  struct tree *t=root;
  push_post(NULL,0);
  while(1)
  {
    while(t)
    {
      if(t->right!=NULL)
	push_post(t,1);
      else
	push_post(t,0);
      t=t->left;
    }
    if(t==NULL)
    {
      tp=pop_post();
      t=s1.stk[tp];
      fl=s1.flag[tp];
      while(fl==0&&t)
      {
	printf("%d",t->info);
	tp=pop_post();
	t=s1.stk[tp];
	fl=s1.flag[tp];
      }
      if(t==NULL)
	return;
      else
      {
	push_post(t,0);
	t=t->right;
      }
    }
  }
}
void rec_inorder(struct tree *t)
{
  if(!t)
  {
    ctr=1;
    return;
  }
  b=1;
  rec_inorder(t->left);
  printf("%d\t",t->info);
  rec_inorder(t->right);
}
void iter_inorder()
{                                  // LEFT - ROOT - RIGHT
  struct tree *t=root;
  if(t==NULL)
  {
    printf("\n\tTree does not exists !");
    return;
  }
  push(NULL);
  while(1)
  {
    while(t)
    {
      push(t);
      t=t->left;
    }				   /* Traverse and store all Left nodes in
				      the tree */

    t=pop();

    if(t==NULL)
      return;

    printf("%d\t",t->info);

    if(t->right!=NULL)
      t=t->right;                  // Traverse all Right Nodes
    else
    {
      t=pop();                     /* Pop and print all right nodes along
				      with their root nodes */

      if(t==NULL)
	return;

      printf("%d\t",t->info);
      t=t->right;
    }
  }
}
void search()
{
    int val;
    struct tree *t=root;
    if(t==NULL)
    {
      printf("\n\tTree does not exists !");
      return;
    }
    push(NULL);
    printf("\n\tEnter the Node to be searched : ");
    scanf("%d",&val);
    while(1)
    {
      if(t->right!=NULL)
	push(t->right);
      if(t->info==val)
      {
	printf("\n\tNode %d found in the tree !",val);
	return;
      }
      t=t->left;
      if(t==NULL)
	t=pop();
      if(t==NULL)
      {
	printf("\n\tNode not found in the tree !");
	return;
      }
    }
}
struct tree * preorder(struct tree *t,struct tree *m)
{
    if(t==NULL)
      return;
    push(NULL);
    while(1)
    {
      if(t->right!=NULL)
	push(t->right);
      if(t->right==m)
	return t;
      t=t->left;
      if(t==NULL)
	t=pop();
      if(t==NULL)
	return 0;
    }
}
void del(int val)
{
    int a=0;
    struct tree *t=root,*p=root,*q,*r,*s;
    if(t==NULL)
    {
      printf("\n\tTree does not exists !");
      return;
    }
    push(NULL);
    while(1)
    {
      if(t->right!=NULL)
      {
	s=t;
	push(t->right);
      }
      /*if(s->right->info=val)
      {
	if(t->left==NULL&&t->right==NULL)  // If no child exist
	{
	  if(t->info<p->info)
	  {
	    p->left=NULL;
	    free(t);
	    printf("\n\tNode %d deleted !",val);
	    return;
	  }
	  else
	  {
	    p->right=NULL;
	    free(t);
	    printf("\n\tNode %d deleted !",val);
	    return;
	  }
	}
	if(t->left!=NULL&&t->right==NULL)  // If only Left Child exists
	{
	  if(t->info<p->info)
	  {
	    p->left=t->left;
	    free(t);
	    printf("\n\tNode %d deleted !",val);
	    return;
	  }
	  else
	  {
	    p->right=t->left;
	    free(t);
	    printf("\n\tNode %d deleted!",val);
	    return;
	  }
	}
	if(t->left==NULL&&t->right!=NULL)    // If only Right Child exists
	{
	  if(t->info<p->info)
	  {
	    p->left=t->right;
	    free(t);
	    printf("\n\tNode %d deleted !");
	    return;
	  }
	  else
	  {
	    p->right=t->right;
	    free(t);
	    printf("\n\tNode %d deleted !");
	    return;
	  }
	}
      }*/
      if(t->info==val)
      {
	if(t==root)
	{
	  root=NULL;
	  free(root);
	  printf("\n\tTree deleted !");
	  return;
	}
	if(t->left==NULL&&t->right==NULL)  // If no child exist
	{
	  if(t->info<p->info)
	  {
	    p->left=NULL;
	    free(t);
	    printf("\n\tNode %d deleted !",val);
	    return;
	  }
	  else
	  {
	    p->right=NULL;
	    free(t);
	    printf("\n\tNode %d deleted !",val);
	    return;
	  }
	}
	if(t->left!=NULL&&t->right==NULL)  // If only Left Child exists
	{
	  if(t->info<p->info)
	  {
	    p->left=t->left;
	    free(t);
	    printf("\n\tNode %d deleted !",val);
	    return;
	  }
	  else
	  {
	    p->right=t->left;
	    free(t);
	    printf("\n\tNode %d deleted!",val);
	    return;
	  }
	}
	if(t->left==NULL&&t->right!=NULL)    // If only Right Child exists
	{
	  if(t->info<p->info)
	  {
	    p->left=t->right;
	    free(t);
	    printf("\n\tNode %d deleted !");
	    return;
	  }
	  else
	  {
	    p->right=t->right;
	    free(t);
	    printf("\n\tNode %d deleted !");
	    return;
	  }
	}
	/*if(t->left!=NULL&&t->right!=NULL)  // Both Left and Right Child exist
	{
	  if(t->info<p->info)
	  {
	    q=t->left;
	    while(q->right!=NULL)
	    {
	      a++;
	      r=q;
	      q=q->right;
	    }
	    if(a==0)
	    {
	      p->left=q;
	      q->right=t->right;
	      free(t);
	      printf("\n\tNode %d deleted !",val);
	      return;
	    }
	    r->right=NULL;
	    t->info=q->info;
	    printf("\n\tNode %d deleted !",val);
	    return;
	  }
	  else
	  {
	    q=t->right;
	    while(q->left!=NULL)
	    {
	      a++;
	      r=q;
	      q=q->left;
	    }
	    if(a==0)
	    {
	      p->right=q;
	      q->left=t->left;
	      free(t);
	      printf("\n\tNode %d deleted !",val);
	      return;
	    }
	    r->left=NULL;
	    t->info=q->info;
	    printf("\n\tNode %d deleted !",val);
	    return;
	  }
	}*/
      }
      p=t;
      t=t->left;
      if(t==NULL)
      {
	//p=root;
	t=pop();
	if(s->right==t)
	  p=s;
      }
      if(t==NULL)
      {
	printf("\n\tNode not found in the tree !");
	return;
      }
    }
}
void main()
{
  int ch1,ch2,ch3,val;
  clrscr();
  s.top=-1;
  s1.top=-1;
  printf("\n\t\t\tBINARY TREE IMPLEMENTATION");
  while(1)
  {
  printf("\n\n\t1. Create a Node in the Tree");
  printf("\n\t2. Traverse the Tree\n\t3. Search for a Node in the Tree\n\t4. Delete a Tree Node\n\t5. Exit");
  printf("\n\nChoice : ");
  scanf("%d",&ch1);
  switch(ch1)
  {
    case 1:create_tree();
	   break;
    case 2:printf("\n\t\t1. Recursive Algorithms\n\t\t2. Iterative Algorithms\n\n\t3. Exit");
	   scanf("%d",&ch2);
	   switch(ch2)
	   {
	     case 1:printf("\n\t\t1. Preorder Traversal");
		    printf("\n\t\t2. Postorder Traversal");
		    printf("\n\t\t3. Inorder Traversal");
		    printf("\n\t\t4. Exit");
		    printf("\n\n\tChoice : ");
		    scanf("%d",&ch3);
		    switch(ch3)
		    {
		      case 1:printf("\n");
			     rec_preorder(root);
			     if(b==0&&ctr==1)
			     {
			       printf("\n\tTree does not exists !");
			       break;
			     }
			     if(b==0)
			     {
			       printf("\n\tThe Binary Tree is => \n\n");
			       rec_preorder(root);
			     }
			     break;
		      case 2:printf("\n");
			     rec_postorder(root);
			     if(b==0&&ctr==1)
			     {
			       printf("\n\tTree does not exists !");
			       break;
			     }
			     if(b==0)
			     {
			       printf("\n\tThe Binary Tree is => \n\n");
			       rec_postorder(root);
			     }
			     break;
		      case 3:printf("\n");
			     rec_inorder(root);
			     if(b==0&&ctr==1)
			     {
			       printf("\n\tTree does not exists !");
			       break;
			     }
			     if(b==0)
			     {
			       printf("\n\tThe Binary Tree is => \n\n");
			       rec_inorder(root);
			     }
			     break;
		      case 4:break;
		      default:printf("\n\tInvalid Choice !");
		    }
		    break;
	     case 2:printf("\n\t\t1. Preorder Traversal");
		    printf("\n\t\t2. Postorder Traversal");
		    printf("\n\t\t3. Inorder Traversal");
		    printf("\n\t\t4. Exit");
		    printf("\n\n\tChoice : ");
		    scanf("%d",&ch3);
		    switch(ch3)
		    {
		      case 1:printf("\n\tThe Binary Tree is => \n\n");
			     iter_preorder(root);
			     break;
		      case 2:printf("\n\tThe Binary Tree is => \n\n");
			     iter_postorder(root);
			     break;
		      case 3:printf("\n\tThe Binary Tree is => \n\n");
			     iter_inorder(root);
			     break;
		      case 4:return;
		      default:printf("\n\tInvalid Choice !");
		    }
		    break;
	     case 3:break;
	     default:printf("\n\tInvalid Choice !");
	   }
	   break;
    case 3:search();
	   break;
    case 4:printf("\n\tEnter the Node value to be deleted : ");
	   scanf("%d",&val);
	   del(val);
	   break;
    case 5:return;
    default:printf("\n\tInvalid Choice !");
	    break;
  }
  }
  getch();
}









