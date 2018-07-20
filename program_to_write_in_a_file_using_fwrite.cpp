#include<stdio.h>
#include<conio.h> 
struct book{
	int bookid;
	char title[20];
	float price;
};
int main(){
	 struct book b1;
	FILE *fp;
	fp=fopen("q1.text","w+");
	if(fp==NULL)
	{
		printf(" file is not found :");
		return 1;
	}
	printf("enter the bookid,title,price");
	scanf("%d",&b1.bookid);
	fflush(stdin);
	gets(b1.title);
	scanf("%f",&b1.price);
	fwrite(&b1,sizeof(b1),1,fp);
	while(fread(&b1,sizeof(b1),1,fp)>0)
	printf("%d,%s,%f",b1.bookid,b1.title,b1.price);
	
	fclose(fp);
	return 0;
	
}
