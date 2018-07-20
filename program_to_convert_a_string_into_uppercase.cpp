#include<stdio.h>
#include<conio.h>
#include<string.h>
 
int main()
{    
    int s,k,i;
    char a[10]="darshika";
    s=strlen(a);
    printf("length of string=%d\n",s);
    for(i=0;a[i]!='\0';i++)
       {
               if(a[i]>'a'&&a[i]<'z')      	
        	    a[i]=a[i]-32;
       	       printf("uppercase=%c\n",a[i]);
       	  
	   }
	 
	   return 0;
}
 





