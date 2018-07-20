#include<iostream>
using namespace std;
class person{
	public:
		char name[10];
		float age;
	public:
		void input_data();
		void display_data();
		person add(person);
};
void person::input_data()
{
	cout<<"enter the name of person";
	cin>>name;
	cout<<"enter the age of person";
	cin>>age;
}
void  person::display_data()
{
	cout<<" the name and  age of person is "<<name<<" "<<age;
}
person person::add(person p)
{
	person i;
	i.age=age+p.age;
	return (i);
}
int main()
{
	person p1,p2,p3;
	p1.input_data();
	p2.input_data();
	p3=p1.add(p2);
	p3.display_data();
	
	return 0;
}
