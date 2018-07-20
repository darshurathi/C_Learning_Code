#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  char str[]="delhi";
  char *p;
  p=str;
  *(p+1)='j';
printf("%s",p);
return 0;

}
