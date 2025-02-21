#include<stdio.h>
#include<string.h>
int main(){

	char str[20]= "hello";
	char str1[20]="abina";
	strcat(str,str1);
        printf("%s\n",str);

	char* p="hello i am thangadurai";
	char* s="than";
	char* str3;
	char* t=strstr(p,s);
	printf("%s\n",t);

	strncpy(str3,s,2);
	printf("%s\n",str3);


}
