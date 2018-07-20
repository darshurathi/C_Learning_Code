#include<iostream>
using namespace std;
class B;
class C;
class A{
	private: int a;
	public:
    friend void fun(A,B,C);
    A(int);
    

};
A::A(int x)
{
	a=x;
}
 

class B{
private: int b;
public:	
friend void fun(A,B,C);
B(int);
};
B::B(int y)
{
	b=y;
}

class C{
	private: int c;
	public:
	friend void fun(A,B,C);
	C(int);
	
};
C::C(int z)
{ 
c=z;
}
void fun(A obj1,B obj2,C obj3)
{
	cout<<"sum is ="<<obj1.a+obj2.b+obj3.c;
}
int main()
{
	A obj1(2);
	B obj2(3);
	C obj3(4);
 
	fun(obj1,obj2,obj3);
	return 0;
}

