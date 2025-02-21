#include<stdio.h>
int yearfn(int a){
    if(a%400==0){
    printf("%d is leap year\n",a);
    }
    else if(a%100==0){
    printf("%d is not leap year\n",a);
    }
    else if(a%4==0){
    printf("%d is leap year\n",a);
    }
    else{
    printf("%d is not leap year\n",a);
    }
}

int main(){
         int y;
	printf("enter the year:");
	scanf("%d",&y);
	yearfn(y);
}
