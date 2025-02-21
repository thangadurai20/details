
#include<stdio.h>

   void fun_1(){
   printf("while loop for 1 to 5 tables upto 5:\n");
int i=1;
while(i<=5){

	int j=1;
	while(j<=5){
	printf("%d ",i*j);
	j++;
	}
	printf("\n");
	i++;

       }
  printf("\n"); 
   } 

 void fun_2(){
 printf("do while loop for n x m matrix:\n");

int n,m;
printf("n: ");
scanf("%d",&n);
printf("m: ");
scanf("%d",&m);
int initial=0;
int row=0;
int c=0;
  do{
   initial =0;
      do{
         printf("%d ",c++);
	 initial++;
        }while(initial<m);
      row++;
      printf("\n");
    }while(row<n);
  printf("\n");
}

 void fun_3(){
 printf("for loop for sum of n numbers:\n");

int start=1;
int num;
int sum=0;
scanf("%d",&num);

 for(start=1;start<=num;start++){
    sum += start;
   }
 printf("sum of %d is: %d\n",num,sum);

}
 int main(){
	 while(1){
	 printf("enter num 1 to run while loop: \nenter num 2 to run do_while loop: \nenter num 3 to run for loop: \n---for exit--press 0=>:  ");
	 int choice;
	 scanf("%d",&choice);
	 if(choice==0){
		 printf("---program exited---");
		 break;
	 }
	 switch(choice){
		 case 1:
			 fun_1();
                         break;
		 case 2:
		         fun_2();
			 break;
		 case 3:
                         fun_3();
	                 break;		 
                    
	 }
	 }
 return 0;
 }
