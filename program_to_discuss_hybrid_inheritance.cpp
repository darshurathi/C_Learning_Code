#include<iostream>
using namespace std;
class student{
	protected:
		int roll_number;
	public:
		void get_data(int);
		void show_data();
};
void student::get_data(int a)
{
	roll_number=a;
}
void student::show_data()
{
	cout<<"roll number ="<<roll_number<<endl;
}
class test:public student{
	protected:
	float sub1,sub2;
	public:
		void put_marks(float,float);
		void show_marks();
};
void test::put_marks(float x,float y)
{
	sub1=x;
	sub2=y;
}
void test::show_marks()
{
	cout<<"marks obtained :";
	cout<<"sub1="<<sub1<<endl;
	cout<<"sub2="<<sub2<<endl;
}
class sports{
	protected:
		int score;
    public:
    	void set_score( float);
    	void show_score();
    	
};
void sports::set_score(float  s)
{
	score=s;
}
void sports::show_score()
{
	cout<<"sports score: "<<score<<endl;
	
}
class result:public test,public sports{
	float total;
	public:
	  void	display_data();
};
void result::display_data(){
	total=sub1+sub2+score;
	show_data();
	show_marks();
	show_score();
	cout<<"THE TOTAL MARKS WILL BE: "<<total<<endl;
	
}
int main()
{
	result student1;
	student1.get_data(24);
	student1.put_marks(79.8,90.9);
	student1.set_score(6.0);
	student1.display_data();
	return 0;
}
