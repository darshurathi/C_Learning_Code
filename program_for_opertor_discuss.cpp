#include<iostream>
using namespace std;
class number{
 
    public:
    	void fun(int,int);
    	void fun(int,float);
};
void number::fun(int x,int y)
{
	int c=x*y;
	cout<<c;
}
void number::fun(int x,float y)
{
	int c=x+y;
	cout<<c;
}
int main()
{
	number n1;
	n1.fun(2,3);
	n1.fun(3,7.8);
	return 0;
}
