#include<stdio.h>
int main(){
int a = 5, b= 10; 
printf("a=%d b=%d\n",a,b);
printf("----------increment,decrement operations:----------\n");
printf("++a: %d\n",++a);
printf("--a: %d\n",--a);
printf("b++: %d\n",b++);
printf("b--: %d\n",b--);
printf("b: %d\n",b);
printf("a: %d\n",a);
printf("a++: %d\n",a++);
printf("a: %d\n",a);
printf("--------------------------------------------------\n");
printf("--------------sizeof operations-------------------\n");

printf("enter num for sizeof operator: ");
int num;
scanf("%d",&num);

printf("sizeof num by 'zu' format specifier :%zu\n",sizeof(num));

printf("sizeof num by 'ld' format specifier :%ld\n",sizeof(num));

return 0;
}


