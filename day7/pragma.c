/* #pragma directive is a special purpose directive that is used to turn on or off some features. 
 * #pragma also allows us to provide some additional information or instructions to the compiler.
 *  It is compiler-specific i.e., the behavior of pragma directive varies from compiler to compiler.*/

#include<stdio.h>

void fun1();
void fun2();

#pragma startup fun1
#pragma exit fun2

void fun1(){
printf("fun1 print before main");
}

void fun2(){
printf("fun2 print after main");
}

int main(){
printf("main function");
}

/*These directives help us to specify the functions that are needed
 *  to run before the program starts ( before the control passes to the main()) 
 *  and just before the program exits (just before the control returns from the main()).*/
// C program to demonstrate the working of #pragma startup
// and #pragma exit.

