#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert_node();
struct node*create_node();
void view_list();
void delete_node();
void add_node();
typedef struct node{
	int info;
	struct node*link;
}NODE;
struct node*START=NULL;
struct node*create_node()
{
	struct node *n;
	n=(NODE*)malloc(sizeof(NODE));
	return n;
}
void insert_node()
{
	struct node*temp,*t;
	temp=create_node();
	printf("Enter A Number : \n ");
	scanf("%d",&temp->info);
	temp->link=NULL;
	if(START==NULL)
	{
		START=temp;
	}
	else
	{
		t=START;
		while(t->link!=NULL)
		{
			t=t->link;
		}
		t->link=temp;
	}
}
void add_node()
{
	struct node *temp,*t;
	int counter=0,n;
	temp=create_node();
	printf("enter in which position you want to add node :");
	scanf("%d",&n);
	printf("Enter A Value :");
	scanf("%d",temp->info);
	t=START;
	if(START==NULL)
	{
		printf("List Is Empty");
	}
	else
	{
     	while(t->link!=NULL)
	      {
		   counter++;
          }
        if(n==counter)
           {
			  t->link=temp;
			  temp->link=t->link;
	       }
		 
   }
}
void delete_node()
{
  struct node*r;
  if(START==NULL)
    {
    	printf("LIST IS EMPTY.......\n");
    }
  else
    {
  	    r=START;
  	    START=START->link;
  	    free(r);
    }
}
void view_list()
{
	struct node*t;
	if(START==NULL)
	{
		printf("LIST IS EMPTY........\n");
	}
	else
	{
	   t=START;
	   while(t!=NULL)
     	{
	    	printf("%d -> ",t->info);
		    t=t->link;
	    }
	    printf("\n");
    }
}
int main()
{
	while(1)
	{
	int n;
	printf(" 1. Add Value To The List  \n ");
	printf(" 2. Delete First Node From The List \n ");
	printf(" 3. View List \n ");
	printf(" 4. Add Node Anywhere In The List \n ");
	printf(" 5. Exit \n\n ");
	printf(" Enter Your Choice : \n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			insert_node();
			break;
		case 2:
			delete_node();
			break;
		case 3:
			view_list();
			break;
		case 4:
			 add_node();
		case 5:
			exit(0);
			break;
		default:
			printf("YOU ENTERED INVALID CHOICE ........\n " );
	}
	 	
  }
}
