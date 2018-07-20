#include<iostream>
using namespace std;
int main()
{
	float number1,number2,sum,avg;
    cout<<"enter the number 1"; 
    cin>>number1;
	cout<<"enter the number 2";
	cin>>number2; 
	sum=number1 + number2;
	avg= sum/2;
	cout<<"the sum of two number is "<<sum<<"\n"
        <<"the avg of two number is"<<avg;
	return 0;
}
