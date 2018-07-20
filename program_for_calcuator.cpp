#include<iostream>
using namespace std;
class calculator{
	public: 
	int a,b,c ;
   	public:
   	calculator(int,int);
	  int add();
	  int sub();
	  int div ();
	  int  mul ();
	  
};
calculator::calculator(int x,int y)
{
	a=x;
	b=y;
}

int calculator::add()
{  
	c=a+b;
	  return c;
}
int calculator::sub()
{
	 	c=a-b;
	  return c;
}
int calculator::div()
{
	 c=a/b;
	  return c;
}
int calculator::mul()
{   
	 
	c=a*b;
	 return c;
}
 
int main()
{
	int n,i=1,a,b,s;
	cout<<"enter the value of a and b:";
    cin>>a>>b;
    calculator c1(a,b);
     while(i<=4)
   {
   	         cout<<" Enter Your Choice "<<endl;
	         cout<<" 1. YOU WANT TO ADD TWO NUMBER :"<<endl;
	         cout<<" 2. YOU WANT TO SUBSTRACT TWO NUMBER :"<<endl;
	         cout<<" 3. YOU WANT TO DIVISION TWO NUMBER :"<<endl;
	         cout<<" 4.  YOU WANT TO MULTIPLICATION TWO NUMBER :"<<endl;
	         
    cout<<"enter a number between 1 to 4"<<endl;
    cin>>n;
    switch(n)
	      {
          case 1:
	        cout<<" Addition  :";
	          s=c1.add();
	          cout<<"addition will be "<<s;
	        break;
	      case 2:
	        cout<<" Substraction :";
	         s=c1.sub();
	         cout<<"substraction will be "<<s;
	        break;
	      case 3:
	        cout<<" Division :";
	         s=c1.div();
	         cout<<"division will be "<<s;
	        break;
	      case 4:  
	        cout<< " Multipliaction :";
	         s=c1.mul();
	         cout<<"multiplication will be "<<s;
	        break; 
		  default:
		  cout<<"error in input"; 
          }
        i++;
    } 
return 0;
}
