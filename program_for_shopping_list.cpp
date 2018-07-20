#include<iostream>
using namespace std;
class list{
	private:
		int counter=0;
		int item_code[5]={0};
		float item_price[5]={0};
		std::string name;
	public:
		void display_item();
		void delete_item();
		void add_item(int,float);
		list(std::string &);
};
list::list(std::string &name)
{
	this->name = name;
	
}
void list::add_item(int x,float y)
{
	item_code[counter]=x;
	item_price[counter]=y;
	counter ++;
}
 void list::display_item()
{ 
    cout<<"Shooping List Of "<<name<<endl;
    for(int i=0;i<=counter;i++)
    {
	cout<<"item_code :"<<item_code[i]<<" ";
	cout<<"item_price:"<<item_price[i]<<endl;
    }
}
/*void item::delete_item()
{
	for(i=0;i<=4;i++)
	{
		
	}
}*/

/*void item::display_value()
{
    int sum=0;
    for(i=0;i<=4;i++)
    {
    sum=sum+item_price;
    }
}*/

int main()
{
	std:string name("Darshika List");
    list t1(name);

   int n,s;
   while(1)
   { 
   cout<<" 1.YOU WANT TO ADD ITEM :"<<endl;
   cout<<" 2.YOU WANT TO DELETE ITEM :"<<endl;
   cout<<" 3.YOU WANT TO DISPLAY ITEM :"<<endl;
   cout<<" 4.YOU WANT TO DISPLAY TOTAL VALUE:"<<endl;
   cout<<" 5. QUIT"<<endl;
    cout<<"Enter The Choice :"<<endl;
    cin>>n;
     if(n==5) break;
    switch(n)
    {
    	
    	case 1:
    	int a; float b;
		cout<<"enter the item_code and item_price:";
    	cin>>a>>b;
    	 t1.add_item(a,b);
    	break;   	
//		case 2:
  //  	 t1.delete_item();
    	case 3:
    	 t1.display_item();
    	 break;
	
	}
  }
}
