#include <stdio.h>

extern int registerfn(); 
extern int staticfn();
extern int pointregister();

int main() {
    registerfn(); // Call the registerfn() function
    staticfn();//call the static function
    
    printf("----------nextline--------\n");
     
    pointregister();
    printf("\n");
    
    int a=5;
    int *P;
    P=&a;

    printf("value:%d address:%p\n",a,&P);
   a++;
   
    printf("value:%d address:%p\n",a,&a);

    return 0;
}









/*#include<stdio.h>
int registerfn(){
register int i;
for(i=0;i<10;i++){
printf("%d",i);
}
}*/

