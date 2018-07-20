#include<iostream>
#include<stdio.h>
#include<conio.h>
class complex;
using namespace std;
 class function{
public:
    function();
    function(int,int);
    friend add(function &,complex &);
public:
    int a,b;
};
class complex{
public:
    complex();
    complex(int,int);
  friend add(function &,complex &);
public:
    int c,d;

};
function::function()
{
    a=0;b=0;
}
 
function::function(int x,int y)
{
    a=x;
    b=y;
}
complex::complex()
{
    c=0;d=0;
}
complex::complex(int h,int k)
{
    c=h;
    d=k;
}
void add(function &c1,complex &c2)
{
   cout<<c1.a+c2.c;
   cout<<c1.b+c2.d;
}
int main()
{
    function c1(4,6);
    complex c2(6,7);
    add(c1,c2);
    return 0;
}

