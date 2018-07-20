#include<iostream>
using namespace std;
template<class t1,class t2>
class test {
	private:
	t1 a;
	t2 b;
	public:
      get_data(t1,t2);	
    void show_data();
};
  test::get_data(t1 x,t2 y)
{
	a=x;
	b=y;
}
void test::show_data()
{
	cout<<"the value of a and b is :";
	cin>>a>>endl>>b>>endl;
}
int main(){
	test <int,float> b1(4,5.9);
	b1.show_data();
	return 0;
}
