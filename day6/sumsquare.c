#include<stdio.h>
int result;
int square;
int sum =0;

int callsum(int s){  // function for sum the square values   

sum=sum+s;
return sum;
}

int sumsquare(int t){  // function for squaring upto given number
	for(int iter=1;iter<=t;iter++){
	int square=iter*iter;
	printf("number %d square is: %d\n",iter,square);
        callsum(square);  // call the sum function from inside the for loop.
	}
	int result=callsum(square);
	return result;
	
}

int main(){
	int n;
printf("enter the number:");
scanf("%d",&n);

int print=sumsquare(n);

printf("final sum of the square numbers is :%d\n",print);
}
