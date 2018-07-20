#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
/*struct book{
	private:
 	int bookid;
 	char title[20];
 	float price;
    public:
 	void input()
 	{   bookid=-300;
		strcpy(title,"c++made easy");
		price=790.9; 
			if(bookid<0)
 		{
 			bookid=-bookid;
		}
	}
	  void display()
	  {
	  	cout<<bookid<<endl<<title<<endl<<price<<endl;
	  }
};
 int main()
{
	book b1;
    b1.input();
    b1.display();
    return 0;
}
class complex{
	private:
		int a,b;
	public:
		void set_data(int,int);
	    void display_data(complex);
	    complex add_complex(complex);

}; 
complex complex::add_complex(complex c)
{
	complex t;
	  t.a=a+c.a;
	  t.b=b+c.b;
	  return t;
}
void complex::set_data(int x,int y)
{
	 
	a=x;
	b=y;
}
void complex::display_data(complex c3)
{
	cout<<"a="<<c3.a<<endl<<"b="<<c3.b<<endl;

}
int main()
{
	complex c1,c2,c3;
	c1.set_data(2,4);
	c2.set_data(3,5);
	c3=c1.add_complex(c2);
	c1.display_data(c3);
	return 0;
}
*/
class account{
    private:
	int balance;
	public:
	static float roi;
	void money()
	{
		balance=900000;
		cout<<"account balance="<<balance<<endl; 
		cout<<"roi="<<roi;
	}
	static set_data(float r)
	{
		roi=r;
		cout<<"n roi="<<roi;
	}
}; 
float account::roi=3.8f;
int main()
{
	account a1;
	 
	a1.money();
	account::set_data(5.6);
}
