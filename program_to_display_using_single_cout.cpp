#include<iostream>
using namespace std;
class subject{
   public:
   	int marks;
   	public :
   		void input_data();
   		void display_data(subject,subject);
};
void subject::input_data()
{
    cout<<" enter the marks ";
    cin>>marks ;
}
 void subject::display_data(subject m2,subject m3)
{
	cout<<"math="<<marks<<"  "<<"physics"<<m2.marks<<" "<<"chemistry"<<m3.marks;
}
int main()
{
	subject  m1,m2,m3;
	m1.input_data();
	m2.input_data();
	m3.input_data();
    m1.display_data(m2,m3);
	return 0;
}
