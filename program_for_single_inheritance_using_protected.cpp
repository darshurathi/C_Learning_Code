#include<iostream>
using namespace std;
class A{
	private:
		int a,b;
		public:
			void get_ab();
}; 
void A::get_ab()
{
	a=10;
	b=20;
	cout<<"a="<<a<<endl<<"b="<<b;
}
class B{
	private:
		int c;
		public:
		void get_c();
};
void B::get_c()
{
	c=90;
	cout<<"c="<<c;
}
int main()
{
	A a1;
	B b1;
	a1et_c();  
	return 0;
}
