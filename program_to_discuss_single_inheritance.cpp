#include<iostream>
using namespace std;
class B;
class A{
	private:
	  int a;
	public:
	  int b;
	  void get_ab();
	  int get_a();
	  void show_ab();
};
void A::get_ab()
{
	a=10;
	b=20;
}
int A::get_a()
{
	return a;
}
void A::show_ab()
{
	cout<<"a="<<a<<endl<<"b="<<b;
}
class B:public A{
	private:
	  int c;
	public:
	  void mul();
	  void display();
};
void B::mul()
{
	get_ab();
	c=b*get_a();
}
void B::display()
{
	show_ab();
	cout<<"The multiplication of a and  b is :"<<c;
}
int main()
{
	B b1;
 	b1.mul();
	b1.display();
	return 0;
}
