#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class value
{
	private:
	int a,b;
	public:
	value(int x,int y)
	{
		a=x;
		b=y;
		cout<<"a="<<a<<endl<<"b="<<b<<endl;
	}
	value(int x)
	{
		a=x;
		b=0;
			cout<<"a="<<a<<endl<<"b="<<b<<endl;
	}
	value()
	{
		a=0;b=0;
		
		cout<<"a="<<a<<endl<<"b="<<b<<endl;
	}
};
int main()
{
	value v1(2,3),v2(5),v3;
}
