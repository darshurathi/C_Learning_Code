#include<iostream>
using namespace std;
class M{
	protected:
		int m;
	public:
		void get_data(int);
};
void M::get_data(int a)
{
	m=a;
}
class N{
	protected:
		int n;
	public:
	 void put_data(int);	
};
void N::put_data(int b)
{
	n=b;
}
class P: public M ,public N{
	public:
		void display();
};
void P::display()
{
	 
	cout<<"the value of m="<<m;
	cout<<"the value of n ="<<n;
    cout<<"the multiplication of m and n is:"<<m*n;
}
int main()
{
	P p1;
	p1.get_data(20);
	p1.put_data(30); 
	p1.display();
	return 0;
}
