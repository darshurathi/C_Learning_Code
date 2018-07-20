#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{ 
       
  	 char str[10];
  	 FILE *fp;
  	 fp=fopen("q1.text","r");
  	 if(fp==NULL)
  	 {
  	 	printf("file not found");
  	 	return 1;
	 }
	  
	 while( fgets(str,9,fp)!=NULL)
	 printf("%s",str);
	 fclose(fp);
	 return 0;
  
}
