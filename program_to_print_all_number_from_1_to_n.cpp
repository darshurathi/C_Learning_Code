#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,t;
	printf("enter the value of n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		t=i*i;
		printf("cube of %d is equal to %d \n:",i,t);
	}
	return 0;
}
