#include<conio.h>
#include<iostream>
int add(int,int);
int main()
{
	 int a,b;
	 cout<<"enter the value of a and b" <<endl;
	 cin>>a>>b;
	 cout<<"sum is"<<add(a,b);
 	 
	 
	 
}
int add(int x,int y)
{
	return x+y;
}
