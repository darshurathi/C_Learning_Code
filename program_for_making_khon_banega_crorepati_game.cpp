#include<iostream>
#include<string>
#include<conio.h> 

using namespace std;
 
class game{
       private:
       	  string str2[5];
	      string str3[20];
		  string str4[5];     
	  public:
             void play();
             string question(int);
		     string option(int);
		     string answer(int);
		     //void highscore();
		     //void quit();
		   	
};
void game::play()
{      
        
       string s,k,l,p,ch,s1;
       
       
	   for(int i=0;i<=4;i++)
	      {
         	    
   	           s=question(i);
   	           cout<<s<<endl;
   	                 int a=3*i;
			         for(int j=a;j<=a+3;j++)
			         {
					 
                         k=option(j);
         	             cout<<k<<endl;
		             }
		     
			    cout<<"choose your answer :"<<endl;
		        cin>>ch;		        
		        
		          	 
		          
	    }
}
 string game::question(int i)
{
	   
	    str2[0]=" Q1. jamnagar is in which indian state ?:" ;
	    str2[1]=" Q2.Who Was The First Indian Women To Be The President Of The Indian National Congress ?";
	    str2[2]=" Q3.What Does The Name MOWGLI  Means ?";
	    str2[3]=" Q4.Who Wrote The National Song Of India ?";
	    str2[4]=" Q5.Which Material Are Those That Can Be Influenced By A Mangnet ? ";
	   
	     return (str2[i]); 
	    
}
string game::option(int j)
{
	 
	 str3[0]= " Gujrat";
	 str3[1]= " Rajasthan";
	 str3[2]= " Maharashtra";
	 str3[3]= " karnatka";
	 str3[4]= " Sarojni Naidu";
	 str3[5]= " Aruna Asaf Ali";
	 str3[6]= " Padmaja Naidu";
	 str3[7]= " Indra Gandhi";
	 str3[8]= " One who fight ";
	 str3[9]= " Man cub  ";
	 str3[10]=" Frog";
	 str3[11]="   Tiger";
	 str3[12]="   Rabindranath";
	 str3[13]="    Lord mountbatten";
	 str3[14]="    Bankim Chandra Chatteerjee";
	 str3[15]="    Ishwar Chandra Vidhyasagar";
	 str3[16]="    Magnetic";
	 str3[17]="    Optical";
	 str3[18]="    None";
	 str3[19]="    Thermal";
	 
	 return str3[j] ;
	
}
string game::answer(int i)
{
	 
	str4[0]="1. gujrat";
	str4[1]="1. sarojini Naidu";
	str4[2]="3. frog";
	str4[3]="3. Bankim Chandra Chattopadhyay ";
	str4[4]="1. Magnetic";
	return str4[i];
	
	
}
 int main()
{    
	 int n,s;
	 game g1;
	string str1 ; 
	cout<<"ENTER YOUR NAME :";
	getline(cin,str1);
	 
	cout<<"welcome "<< str1  << "  to the kaun banega crorepati game"<<endl;
	 
	cout<<" 1. play :"<<endl;
	cout<<" 2. highscore :"<<endl;
	cout<<" 3. quit :"<<endl;
	cout<<" enter your choice :"<<endl;
	cin>>n;
	 switch(n)
	 {
	 	case 1:
	 		
	 		g1.play();
	 		break;
	    case 2:
	    	
	    	//g1.highscore();
	    	break;
	    case 3:
	    	
	    	//g1.quit();
		    break;	
		 default:
	        cout<<"error in choice";
	
	 }
	 
	 return 0;
 }
