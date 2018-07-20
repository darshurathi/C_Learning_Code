#include<iostream>
using namespace std;
class student{
	protected:
		int roll_number;
	public:
		void put_data(int);
		void get_data();
};
void student::put_data(int a)
{
	roll_number=a;
}
void student::get_data()
{
	cout<<"roll_number="<<roll_number;
}
class test: public student{
	protected:
		float sub1;
		float sub2;
	public:
		void get_marks(float,float);
		void put_marks();
};
void test::get_marks( float x,float y)
{
	sub1=x;
	sub2=y;
}
void test::put_marks()
{
	get_data();
	cout<<"sub1="<<sub1<<endl<<"sub2"<<sub2;
}
class result:public test{
	private:
	float total;
	public:
		void display();
};
void result::display()
{
   
	total=sub1+sub2;
	get_data();
	put_marks();
	cout<<"the sum of two subject marks:"<<total;
}
int main()
{
    result student1;
	student1.put_data(12);
    student1.get_marks(79.9,67.9);
    student1.display();
    return 0;
}
