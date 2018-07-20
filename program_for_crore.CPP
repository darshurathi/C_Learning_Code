#include<conio.h>
#include<time.h>
#include'kbc.h'

//'kbc.h' header file made to store classes for Questions

/****************************************************************************
*                GLOBAL VARIABLES AND FUNCTION PROTOTYPES
****************************************************************************/

Ques q;  //'Ques' class is already defined under 'kbc.h' header file
void credits();
void login();
void play();
void rules();
void showdet();
void kbcheader();
void showpr(int cnt,char cause);
int  main();   
class Player
{
 public:
  int id;
  char name[80];
  char country[30];
  int nop;
  void nofplayer()
  {
    ifstream fin("player.txt",ios::binary);
    fin.read((char*)this,sizeof(*this));
    if(!fin)
      nop=0;
    else if(!fin.eof())
    {
      nop=1;
      while(!fin.eof())
      {
	fin.read((char*)this,sizeof(*this));
	nop++;
      }
    }
    else
      nop=0;
    fin.close();
  }
  void getdata()
  {
    nofplayer();
    ofstream fout("player.txt",ios::app);
    cout<<"Enter Your Name = ";
    gets(name);
    cout<<"Enter Your Country = ";
    gets(country);
    fout.write((char*)this,sizeof(*this));
    cout<<"Press Any Key To Continue";
    getch();
    id=nop+1;
    fout.close();
  }
  void playermenu()
  {
    char choice;
    clrscr();
    cout<<"\t\tWELCOME TO KBC PLAYER MENU\n\n";
    cout<<"1. Login and Play\n\n";
    cout<<"2. Exit\n\n";
    cout<<"Enter Your Choice = ";
    cin>>choice;
    if(choice=='1')
    {
      getdata();
      showdet();
      play();
    }
    else if(choice=='2')
      exit(0);
    else
    {
      cout<<"Invalid Choice!!!!";
      cout<<"\nPress any key to go back";
      kbcheader();
    }
  }
  void display()
  {
    cout<<"Name: ";
    for(int i=0;name[i]!=NULL;i++)
      cout<<name[i];
    cout<<"\t\t";
    cout<<"ID: "<<id<<"\t\t";
    cout<<"Country: ";
    for(i=0;country[i]!=NULL;i++)
      cout<<country[i];
    cout<<"\n\n";
  }
}p1;

class Admin
{
  int adid;
  char name[50];
  char password[25];
 public:
  void adminmenu()  //Function to perform operations of an admin
  {
    while(1)
    {
      clrscr();
      char choice,pswd[25];
      int id;
      cout<<"\t\tWELCOME TO KBC ADMIN MENU\n\n";
      cout<<"\t\t1. Admin Login\n\n";
      cout<<"\t\t2. Back\n\n";
      cout<<"Enter Your Choice = ";
      cin>>choice;
      if(choice=='1')
      {
	    ifstream fin("ADMIN.txt",ios::binary);
	    cout<<"Enter Admin ID = ";
	    cin>>id;
	    cout<<"Enter Password = ";
	    gets(pswd);
	    int found='n';
	    fin.read((char*)this,sizeof(*this));
	    if((!strcmp(password,pswd))&&id==adid)
	      found='f';
	    else
	    {
	      while(!fin.eof())
	      {
		if((!strcmp(password,pswd))&&id==adid)
		  found='f';
		else
		  fin.read((char*)this,sizeof(*this));
	      }
	      if((!strcmp(password,pswd))&&id==adid)
		  found='f';
	    }
	    if(found=='f')
	    {
	      while(1)
		 {
		  clrscr();
		  cout<<"Welcome ";
		  puts(name);
		  cout<<"\n\nOptions for You: \n";
		  cout<<"\n1. Insert Questions\n\n";
		  cout<<"2. Delete Questions\n\n";
		  cout<<"3. View Questions\n\n";
		  cout<<"4. Sign Out and Exit\n\n";
		  cout<<"Enter Your Choice = ";
		  cin>>choice;
		  if(choice=='1')
		  {
		  char ch;
		  do
		  {
		    q.insques();
		    cout<<"\nDo you want to enter more(Y/N)? = ";
		    cin>>ch;
		  }while(ch=='y'||ch=='Y');
		}
		  else if(choice=='2')
		  {
		    int gid;
		    clrscr();
		    cout<<"Enter ID of Question to be deleted = ";
		    cin>>gid;
		    q.deleteques(gid);
		    getch();
		}
		  else if(choice=='3')
	      {
		  cout<<"Displaying all questions...\n";
		  system("pause");
		  q.showallques();
		}
		  else
	      {
		  cout<<"Moving back to KBC Header...\n";
		  system("pause");
		  kbcheader();
		  }
	}
	    }
	  else
	      {
		    cout<<"Sorry, No User Found!!!";
		    cout<<"Moving Back To KBC Header\n";
		    getch();
		    kbcheader();
	  }
	      fin.close();
	}
	else if(choice=='2')
	  break;
	else
	  cout<<"Wrong Choice!!!";
      }
      clrscr();
    }
}ar;

void credits()  //Function to display credits of this project
{
  clrscr();
  cout<<"\n\t\tC++ Project: Kaun Banega Crorepati Simulation\n\n";
  cout<<"MADE BY: \n\n";
  cout<<"1. NAME: ASHUTOSH PUROHIT\n";
  cout<<"CLASS: XII A\n";
  cout<<"ROLL NO.: \n\n\n";
  cout<<"2. NAME: DHRUV VYAS\n";
  cout<<"CLASS: XII B\n";
  cout<<"ROLL NO.: \n\n\n";
}

void rules()  //Function to display the rules
{
  cout<<"\n\t\tRULES OF THE GAME\n";
  cout<<"\n1. There are 15 questions in this game, and for answering wach, you'll win the amount correspondimg to that question.\n";
  cout<<"\n2. If you answered any question incorrectly, then you'll lose the game.\n";
  cout<<"\n3. There are two checkpoints in the game, 1st at Rs. 10,000, and the other at 3,20,000. Once you pass the checkpoint, you'll definitely win the mentioned amount.\n";
  cout<<"\n4. If you quit the game, you'll win the previous indicated amount\n";
  cout<<"\n\nPress Any Key To Continue";
  getch();
  clrscr();
}

void showdet()  //Used to Display the Details about Prize Money and Rules
{
  clrscr();
  cout<<"\n\n\t\tWELCOME TO KAUN BANEGA CROREPATI!!!!\n";
  cout<<"Prize Money:";
  cout<<"\t15. 1,00,00,000\n";
  cout<<"\t\t14. 50,00,000\n";
  cout<<"\t\t13. 25,00,000\n";
  cout<<"\t\t12. 12,50,000\n";
  cout<<"\t\t11. 6,40,000\n";
  cout<<"\t\t10. 3,20,000 (Second Checkpoint)\n";
  cout<<"\t\t09. 1,60,000\n";
  cout<<"\t\t08. 80,000\n";
  cout<<"\t\t07. 40,000\n";
  cout<<"\t\t06. 20,000\n";
  cout<<"\t\t05. 10,000 (First Checkpoint)\n";
  cout<<"\t\t04. 5,000\n";
  cout<<"\t\t03. 3,000\n";
  cout<<"\t\t02. 2,000\n";
  cout<<"\t\t01. 1,000\n";
  for(int i=0;i<80;i++)
    cout<<"*";
  cout<<"\n\t\tPress Any Key To Continue\n";
  getch();
  clrscr();
  rules();
}

void kbcheader()  //Function to display the Header Menu
{
  char choice;
  int n;
  while(1)
  {
    clrscr();
	cout<<"\n\t\tKBC HEADER MENU\n\n";
    cout<<"\t\t1. Admin Menu\n\n";
    cout<<"\t\t2. Player Menu\n\n";
    cout<<"\t\t3. Exit\n\n";
    cout<<"Enter your choice = ";
    cin>>choice;
    if(choice=='1')
    {
      ar.adminmenu();
    }
    else if(choice=='2')
      p1.playermenu();
    else if(choice=='3')
      exit(0);
    else
    {
      cout<<"Invalid Choice!!!";
      cout<<"\nReturning Back!!!";
      getch();
      main();
    }
  }
};

void showpr(int cnt,char cause)  //Function to show amount won by accepting question no. and mode of elimination
{
  if(cause=='N')
  {
    switch(cnt)
    {
      case 0:  cout<<"\nSorry, You won Nothing!!!\n";
	       break;
      case 1:  cout<<"\nYou Have Won Rs. 1,000!!!\n";
	       break;
      case 2:  cout<<"\nYou Have Won Rs. 2,000!!!\n";
	       break;
      case 3:  cout<<"\nYou Have Won Rs. 3,000!!!\n";
	       break;
      case 4:  cout<<"\nYou Have Won Rs. 5,000!!!\n";
	       break;
      case 5:  cout<<"\nYou Have Won Rs. 10,000!!!\n";
	       cout<<"\nYou Have Cleared the First Checkpoint!!!\n";
	       break;
      case 6:  cout<<"\nYou Have Won Rs. 20,000!!!\n";
	       break;
      case 7:  cout<<"\nYou Have Won Rs. 40,000!!!\n";
	       break;
      case 8:  cout<<"\nYou Have Won Rs. 80,000!!!\n";
	       break;
      case 9:  cout<<"\nYou Have Won Rs. 1,60,000!!!\n";
	       break;
      case 10: cout<<"\nYou Have Won Rs. 3,20,000!!!\n";
	       cout<<"\nYou Have Cleared the Second Checkpoint!!!\n";
	       break;
      case 11: cout<<"\nYou Have Won Rs. 6,40,000!!!\n";
	       break;
      case 12: cout<<"\nYou Have Won Rs. 12,50,000!!!\n";
	       break;
      case 13: cout<<"\nYou Have Won Rs. 25,00,000!!!\n";
	       break;
      case 14: cout<<"\nYou Have Won Rs. 50,00,000!!!\n";
	       break;
      case 15: cout<<"\nYou Have Won Rs. 1,00,00,000!!!\n";
	       break;
    }
  }
  else if(cause=='Q')
  {
    switch(cnt)
    {
      case 0:  cout<<"Nothing.\n";
	       break;
      case 1:  cout<<"Rs. 1,000!!!\n";
	       break;
      case 2:  cout<<"Rs. 2,000!!!\n";
	       break;
      case 3:  cout<<"Rs. 3,000!!!\n";
	       break;
      case 4:  cout<<"Rs. 5,000!!!\n";
	       break;
      case 5:  cout<<"Rs. 10,000!!!\n";
	       break;
      case 6:  cout<<"Rs. 20,000!!!\n";
	       break;
      case 7:  cout<<"Rs. 40,000!!!\n";
	       break;
      case 8:  cout<<"Rs. 80,000!!!\n";
	       break;
      case 9:  cout<<"Rs. 1,60,000!!!\n";
	       break;
      case 10: cout<<"Rs. 3,20,000!!!\n";
	       break;
      case 11: cout<<"Rs. 6,40,000!!!\n";
	       break;
      case 12: cout<<"Rs. 12,50,000!!!\n";
	       break;
      case 13: cout<<"Rs. 25,00,000!!!\n";
	       break;
      case 14: cout<<"Rs. 50,00,000!!!\n";
	       break;
    };
  }
  else if(cause=='E')
  {
    if(cnt<5)
      cout<<"\nSorry, You won Nothing!!!\n";
    else if(cnt<10)
      cout<<"\nYou Have Won Rs. 10,000!!!\n";
    else
      cout<<"\nYou Have Won Rs. 3,20,000!!!\n";
  }
}

void play()  //Function to play the game
{
  clrscr();
  srand(time(NULL));
  ifstream fin("KBC.txt",ios::binary);
  char ch='y',cause='N';
  int qp[15],a;
  int count=0;
  for(int i=0;i<15;i++)
  {
      a=rand()%q.noq();
      for(int j=0;j<i;j++)
	if(qp[j]==a)
	  break;
      if(i==j)
	qp[i]=a;
      else
	i--;
  }
  while(count<15)
  {
    fin.seekg(0);
    p1.display();
    dispdate();
    int n=qp[count];
    fin.read((char*)&q,sizeof(q));
    while(!fin.eof())
    {
      if((n+1)==q.id)
	    break;
      else
	  fin.read((char*)&q,sizeof(q));
    }
    q.showques(count);
    cout<<"Enter Your Choice('Q' to Quit) = ";
    cin>>ch;
    if(q.chkans(ch))
      showpr(++count,cause);
    else if(ch=='Q')
    {
      cause='Q';
      cout<<"\nSo, ";
      for(int i=0;p1.name[i]!=NULL;i++)
	cout<<p1.name[i];
      cout<<" has decided to quit the game, and has won ";
      showpr(count,cause);
      cout<<"\nThank You for Playing Kaun Banega Crorepati. Have a good day ahead!!!";
      break;
    }
    else
    {
      cause='E';
      cout<<"\nSorry, Better Luck Next Time!!!!\n";
      cout<<"\nThank You For Playing Kaun Banega Crorepati, Have a Good Day Ahead";
      showpr(count,cause);
      break;
    }
    cout<<"\nPress Any Key To Continue";
    getch();
    clrscr();
  }
  if(count==15)
  {
    cout<<"\n\t\tCONGRATULATIONS!!!! YOU'VE BECOME A CROREPATI\n\t";
    cout<<"Thank You for Playing Kaun banega Crorepati. Have a great day ahead!!!\n\t\t";
    system("pause");
    getch();
    credits();
  }
  getch();
}

void main()
{
  clrscr();
  kbcheader();
  return (0);
}
