#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert_as_first_node();
void delete_first_node();
void view_list();
struct node{
	int info;
	struct node *next,*prev;
};
struct node *START=NULL;
void insert_as_first_node()
{
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	printf("Enter The Value \n");
	scanf("%d",&n->info);
	n->prev=NULL;
	n->next=NULL;
	if(START==NULL)
	{
		START=n;
	}
	else
	{
		n->next=START;
		START->prev=n;
		START=n;
	}
}
void delete_first_node()
{
	 
	if(START==NULL)
	{
		printf("List Is Empty  \n:");
		
	}
	else
	{
		struct node *r;
	    r=START;
	    START=START->next;
	    START->prev=NULL;
	    free(r);
   }  
}
void view_list()
{
	struct node *t;
	if(START==NULL)
	{
		printf("List Is Empty \n");
	}
	else
	{
	 t=START;
	  while(t!=NULL)
	    {
		 printf("%d ->",t->info);
		 t=t->next;
    	}
    }

}
int main()
{
	while(1)
	{
	int n;
	printf(" 1. add a first node : \n");
	printf(" 2. delete first node: \n");
	printf(" 3.view list  : \n");
	printf("Enter The Choice :\n");
	scanf("%d",&n);
	switch(n)
	 {  
		case 1:
			insert_as_first_node();
			break;
		case 2:
			delete_first_node();
			break;
		case 3:
		    view_list();
		    break;
		case 4:
			exit(0);
		default:
			printf("Invalid Choice \n:");	
	 }
    }
}

