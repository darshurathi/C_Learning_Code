#include<iostream>
using namespace std;
class A{
	private:
		int a;
	public:
	    int b;
	    void get_ab();
	    int get_a();
	    void show_ab();
	    void show_a();
};
void A::get_ab()
{
	a=10;
	b=30;
}
int A::get_a()
{
	return a;
}
void A::show_ab()
{
	cout<<"a="<<a<<endl<<"b="<<b;
}
void A::show_a()
{
	cout<<"THE VALUE OF A ="<<a;
 } 

class B:private A{
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
	
	
	show_a();
	cout<<"THE VALUE OF B ="<<b<<endl;
	 	cout<<" THE VALUE OF C="<<c<<endl;
}
int main()
{
	B b1;
	b1.mul();
	b1.display();
	return 0;
}
