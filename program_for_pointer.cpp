#include<stdio.h>
#include<conio.h>
 int main()
 {
     int a[5],i,*p;
     p=&a[0];
     printf("enter the element in array :");
     for(i=0;i<5;i++)
     {
     	scanf("%d",p+i);
     	
	 }
	 for(i=0;i<5;i++)
	 {  
	 printf("address is %u\n",&a[i]);
	 	printf("%d\t",*(p+i));
	 }
 
	return 0; 
 	
 	
 	
 	
 }
 
