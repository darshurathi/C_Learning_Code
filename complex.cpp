#include<iostream>
#include<stdio.h>
using namespace std;
class complex {
	public :
		int a,b;
	public:
		complex(int ,int);
		complex();
		complex add(complex &);
};
 complex::complex()
{
	a=0,b=0;
}
 complex::complex(int x,int y)
{
	a=x,b=y;
}
complex complex::add(complex &c)
{
	complex temp;
	temp.a=a+c.a;
	temp.b=b+c.b;
	return temp;
}
 
int main()
{
	complex c1(2,3),c2(4,5),c3;
	c3=c1.add(c2);
	cout<<"the sum of two complex number is"<<c3.a<<"  "<<c3.b;
	return 0;
}
