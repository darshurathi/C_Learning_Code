#include<iostream>
using namespace std;
class student{
	private:
	char name[20];
	int rollno;
	char sec[5];
	char branch[4];
	int year;
	public:
		void set_data();
		void add_data();
		void display_data();
		void delete_data();
};
void student::set_data(){
	cout <<" enter the name :"<<endl;
	cin>>name;
	cout<<"enter the rollno :"<<endl;
	cin>>rollno;
	cout<<"enter the sec :"<<endl;
	cin>>sec;
	cout<<"enter the branch :"<<endl;
	cin>>branch;
	cout<<"enter the year :"<<endl;
	cin>>year;
}
void student::add_data()
{
	
}
int main()
{
	student s1;
	cout<<" enter your choice ";
	cout<<" 1.  To Check  The Students Detail ";
	cout<<" 2.  To Add Another Student Detail";
	cout<<" 3.  To Delete A Particluar Student Detail";
	cout<<" 4.  To display data ";
	cout<<" 5.  To check partiular student detail";
	switch(n){
		case 1:
			s1.set_data();
		case 2:
			s1.add_data();
		case 3:
			s1.delete_data();
		case 4:
			s1.display_data();
	}
}
