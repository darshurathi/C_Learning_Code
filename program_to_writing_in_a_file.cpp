#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i;
	FILE *fp; 
	char s[]="hello students";
	fp=fopen("f1.text","w");
	if(fp==NULL)
	{
		printf("FILE CAN NOT OPEN  ");
		  return 1;
	}
	for(i=0;i<strlen(s);i++)
	{
		fputc(s[i],fp);
    }
	fclose(fp);
	return 0;
	
}
