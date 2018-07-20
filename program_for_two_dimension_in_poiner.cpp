#include<stdio.h>
#include<conio.h>
//#include <stdin>
#include<string.h>
int main()
{ 
char buffer[20];
  int a,b,c;
  a=10;b=20;
  c=a+b;
  sprintf(buffer,"sum of %d and %d is %d",a,b,c);
  printf("%s",buffer);
  return 0;



      
  }
