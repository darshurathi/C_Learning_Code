#include<stdio.h>
#include<conio.h>
void input(int*);
void display(int*);
int length(char*);
int main()
  {
   	 int a[5],r;
   	 char s[10]="hello";
     input(a);
 	 display(a);
 	 r=length(s);
    printf("length of string is =%d",r);
  }
  
void input(int *p)
{
	int i;
	printf("input the value of array :");
	for(i=0;i<5;i++)
	{
		scanf("%d",p+i);
	}
}
void display(int *p)
{
	int j;
	printf("array values are :");
	for(j=0;j<5;j++)
	{
		printf("%d",*(p+j));
	}
 }
 
 int length(char *p)
 {
   int i;
   for(i=0;*(p+i)!='\0';i++);
   return i;	
 
 
  } 
