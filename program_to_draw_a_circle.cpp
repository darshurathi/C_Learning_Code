#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
   COORD c;
    c.X=20;
     c.Y=8;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
	printf(" Hello Lakshya Rathi ");
	
 return 0;
}
