 #include<stdio.h>
#include<conio.h>
void main()
{
char name[100];
char ch;
int ans,cnt=0;
clrscr();
printf("please enter your name: ");
gets(name);
printf("welcome to KBC mr/ms:");
puts(name);
printf("
RULES for KBC

");
printf("1.The game consists of 10 questions
");
printf("2.Every question consists of 4 options there will be only one correct answer.
");
printf("3.For every correct answer you will be getting 10000 rs of money
");
printf("4.You will be exit out of game for wrong answer.
");
printf("5.You can use 50-50 option only one time.
");
printf("6.50-50 option is avilable only after 8th question
");
printf("If you are intrested to play game press enter to ENTER into game
 ");
ch=getch();
printf("
Here we go....
");
printf("
The game starts now....Best of luck ");
puts(name);
printf("
			 n your first question:
");
printf("
1.who won the IPL3 championship?
");
printf("
		1.chennai super kings		2.deccan chargers
");
printf("
		3.royal chalangers   		4.mumbia indians
");
printf("enter your answer:");
scanf("%d",&ans);
if(ans==1)
{
printf("congrats u won 10000 rs
");
}
else
{
printf("sorry, beter luck next time");
exit(0);
}
printf("
			your next question
");
printf("
2.who is the priminister of INDIA?
");
printf("
		1.abdual kalam        		2.y.s.rajeshkar reddy
");
printf("
		3.manmohan sing       		4.chandra babu naidu
");
printf("enter your answer:");
scanf("%d",&ans);
if(ans==3)
{
printf("congrats u won 20000 rs
");
}
else
{
printf("better luck next time");
exit(0);
}
printf("
			your next question
");
printf("
3.where will 2010 common wealth games be held?
");
printf("		1.mumbai              		2.china
");
printf("		3.south africa        		4.new delhi
");
printf("enter your answer:");
scanf("%d",&ans);
if(ans==4)
{
printf("congrats u won 30000 rs
");
}
else
{
printf("better luck next time");
exit(0);
}
printf("
		\tyour next question
");
printf("
4.All mattetr is made upof very tiny particles which are called?
");
printf("
		1.atoms             		2.moleclues
");
printf("
		3.protons            		4.electrons
");
printf("enter your answer:");
scanf("%d",&ans);
if(ans==1)
{
printf("congrats u won 40000 rs
");
}
else
{
printf("better luck next time");
exit(0);
}
printf("
		your next question
");
printf("
5.what percentage of haemoglobin in red blood cells is found?
");
printf("
		1.60%               		2.34%
");
printf("
		3.20%               		4.42%
");
printf("enter your answer:");
scanf("%d",&ans);
if(ans==2)
{
printf("congrats u won 50000 rs
");
}
else
{
printf("better luck next time");
exit(0);
}
printf("
		your next question
");
printf("
6.leaser printer is an example of?
");
printf("
		1.scanner           		2.output device
");
printf("
		3.input device      		4.none of the above
");
printf("enter your answer:");
scanf("%d",&ans);
if(ans==2)
{
printf("congrats u won 60000 rs
");
}
else
{
printf("better luck next time");
exit(0);
}
printf("
		your next question
");
printf("
7.The 16th SAARC summit was held at? 
");
printf("
		1.colombo            		2.kathmandu
");
printf("
		3.thimpu             		4.new delhi
");
printf("enter your answer:");
scanf("%d",&ans);
if(ans==3)
{
printf("congrats u won 70000 rs
");
}
else
{
printf("better luck next time");
exit(0);
}
printf("
		your next question
");
printf("
8.12.5% of 80 is equal to?
");
printf("
		1.8                   		2.20
");
printf("
		3.10                  		4.40
");
printf("enter your answer:");
scanf("%d",&ans);
if(ans==3)
{
printf("congrats u won 80000 rs
");
}
else
{
printf("better luck next time");
exit(0);
}
printf("

***Note:you can use your 50-50 option from here***
");
printf("

		your next question
");
printf("
9.manas biosphere is famous for?
");
printf("
		1.rhino                 		2.elephant
");
printf("
		3.lion                  		4.wild buffalo
");
printf("
do you want to use fifty");
printf("
press 'y' for yes:");
printf("
press 'n' for no:");
printf("
enter your choice: ");
ch=getch();
if(ch=='y')
{
printf("
		1.                       		2.elephant
");
printf("
		3.lion                   		4.        
");
printf("
enter your answer:");
scanf("%d",&ans);
if(ans==2)
{
printf("congrats u won 90000 rs
");
cnt++;
}
else
{
printf("better luck next time");
exit(0);
}
}
else if(ch=='n')
{
printf("
Good.. you can use your 50-50 chance next time
");
printf("
		1.rhino                 		2.elephant
");
printf("
		3.lion                  		4.wild buffalo
");

printf("
enter your answer:");
scanf("%d",&ans);
if(ans==2)
{
printf("congrats u won 90000 rs
");
}
else
{
printf("better luck next time");
exit(0);
}
}
if(cnt==0)
{
printf("

	*your are still having 50-50 chance*
");
}
else
{
printf("

	*remember that you are not having 50-50 chcance*
 ");
}
printf("
		Here is your last and final question
");
printf("
10.The quorun required in rajaya sabha is?
");
printf("
		1.21                     		2.22
");
printf("
		3.24                      		4.25
");
if (cnt==1)
{
printf("
enter your answer:");
scanf("%d",&ans);
if(ans==4)
{
printf("

	congrats u won ONE LAKH RUPEES
");
exit(0);
}
else
{
printf("so sorry..., better luck next time");
exit(0);
}
}
if(cnt==0)
{
     printf("
do you want to use fifty");
     printf("
press 'y' for yes:");
     printf("
press 'n' for no:");
     printf("
enter your choice: ");
     ch=getch();
     if(ch=='y')
       {
printf("
		1.21                       		2.
");
printf("
		3.                         		4.25");
printf("
enter your answer:");
scanf("%d",&ans);
if(ans==4)
{
printf("

		congrats u won ONE LAKH RUPEES
");
}
else
{
printf("so sorry....., better luck next time");
exit(0);
}
}
else if(ch=='n')
{
printf("
Good.. you are the only first person answering with out using 50-50 chance
");
printf("
		1.21                       		2.22
");
printf("
		3.24                       		4.25");

printf("
enter your answer:");
scanf("%d",&ans);
if(ans==4)
{
printf("

		congrats u won ONE LAKH RUPEES
");
}
else
{
printf(" i am so sorry ... better luck next time");
exit(0);
}
}
}
return(0);
}
                                   

