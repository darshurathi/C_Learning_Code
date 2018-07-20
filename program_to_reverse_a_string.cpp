#include<stdio.h>
#include<conio.h>
#include<string.h>
 
int main()
{     
      int s,i,j,temp;  
      char str[10]="abba";
      s=strlen(str);
     for(i=0; i<s/2;i++ )
     {
     		temp=str[i];
     		str[i]=str[s-1-i];
     		str[s-1-i]=temp;
	 }
	   printf(" reverse string=%s\n",str);
	   for(i=0;i<s/2;i++)
	   {
	   	if(str[i]==str[s-1-i])
	     	 {
	     	 		 continue;
                        	
		     }
		     else
		     {
		     	printf("string is not palidrome");
		     	break;
			 }
	   }
	   if(i==s/2)
	   {
	   	printf("string is palidrome");
	   }
	   
	   return 0;
  }
