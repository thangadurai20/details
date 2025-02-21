#include<stdio.h>

int registerfn(){
register int i;
for(i=0;i<10;i++){
printf("register integer is: %d\n",i);// noted here
}

printf("\n");
return 0;
}

int pointregister(){  
	int iter;
  for(iter=0;iter<10;iter++){
printf("%d address is: %p\n",iter,&iter); // noted here
} 
 return 0;
}

int staticfn(){

for(int itr=0;itr<8;itr++){

auto int y=0;
static int x=0;

    x++;
    printf("static = %d",x);
    y++;
    printf(" auto =  %d",y);

    printf("\n");
}

return 0;
}



/*#include<stdio.h>

int main(){

extern int registerfn();
int main(){
registerfn();
printf("hello");
return 0;
}
}*/
