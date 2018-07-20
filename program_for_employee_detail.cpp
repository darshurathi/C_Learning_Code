#include<iostream>
using namespace std;
class employee{
 
	public:
		char name[20];
		int age;
    public:
	void get_data();
	void display_data();
};
void employee::get_data()
{
  cout<<"enter the name:";
  cin>>name;
  cout<<"enter the age:";
  cin>>age;	
}
void employee::display_data()
{
	cout<<"name:"<<name<<endl;
	cout<<"age:"<<age<<endl;
}
int i,n;
int main()
{
	employee manager[3] ;
	for(i=0;i<=3;i++)
	{
		cout<<"manager details"<<i+1<<endl;
		manager[i].get_data();
	}
	cout<<endl;
	cout<<"enter the number which manager detail you want to display";
	cin>>n;
	switch(n)
	{
		case 1:
		manager[1].display_data();
		break;
		case 2:
		manager[2].display_data();
		break;
		case 3:
		manager[3].display_data();
		break;
    }
	return 0;
}
