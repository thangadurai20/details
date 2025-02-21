
#include<stdio.h>
#include<string.h>
#define A 10 //macro defined0

int main(){

char name[55],age[A],course[30],college[50],hobby[20];
float cgpa;

printf("enter the NAME: ");
scanf("%[^\n]s",name);
getchar();

printf("enter the AGE:");
scanf("%[^\n]s",age);
getchar();

printf("enter COURSE: ");
scanf("%[^\n]s",course);
getchar();

printf("enter COLLEGE name: ");
scanf("%[^\n]s",college);
getchar();

printf("enter C G P A: ");
scanf("%f",&cgpa);
getchar();

printf("enter HOBBY: ");
scanf("%[^\n]s",hobby);
getchar();

printf("\nPERDSONAL DETAILS");
printf("\n");

printf("NAME: %s\n",name);
printf("AGE: %s\n",age);
printf("COURSE: %s\n",course);
printf("COLLEGE: %s\n",college);
printf("CGPA: %.2f\n",cgpa);
printf("HOBBY: %s\n",hobby);

return 0;
} 

