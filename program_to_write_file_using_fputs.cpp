#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[30]={"its me darshika again "};
	FILE *fp;
	fp=fopen("q1.text","w+");
	if(fp==NULL)
	{
		printf("file not found");
		return 1;
	}
	fputs(str,fp);
	while(fgets(str,9,fp)!=NULL)
		printf("%s",str);
	fclose(fp);
	return 0;
}
