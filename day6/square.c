#include<stdio.h>

int squarefuc(int a,int b,int s){
     s=a;

     for(int iter=1;iter<b;iter++){
     s=s*a;
     }

return s;

}


int main(){

int a,b,s;
printf("enter number for base: ");
scanf("%d",&a);
printf("enter number for power: ");
scanf("%d",&b);

int result=squarefuc(a,b,s);
printf("the result is: %d\n",result);
}


