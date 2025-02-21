
#include<stdio.h>
#include<stdlib.h>

//- structure declaration for input data and next pointer for pointing the next node address

struct node{
 int data;
 struct node *next;  // a pointer to next node
};


int main(){
   struct node *head=NULL,*newnode,*temp;
   
   int choice;
   
   // loop for adding the value in list again in loop mode
while(1){
   newnode = (struct node*)malloc(sizeof(int));   //dynamic memory allocation

   printf("enter the data: ");  
   scanf("%d",&newnode->data);  // declare data variable same time get user input::it is |5|NULL|
   newnode->next = NULL;           // declare next is null 
   //head=newnode;  :e:code dumped::    // initially head pointing the next . next is null
   
   if(head==NULL){
     head=temp=newnode;      //first head's next is null . so it is directly equal to newnode.
    }
   else{                   // store head as temp. because head node is first node . so we use another coming nodes.
    temp->next=newnode;   //:: print only one number::  second time head is pointing anothe value address node
    temp=newnode;         // then the temp is for other coming newnode assigning.
   }

printf("press 1 to add or press 0 to exit:\n");
scanf("%d",&choice);
   if(choice==0){
      break;
      }
}

//transverse function

temp=head;  
//reassign temp is head,because temp only moving next node next node linke creating. but from the head only collects the temp values.
   while(temp!=0){
   
       printf("%d ->",temp->data);
       temp=temp->next;
         }
       printf("NULL\n");

 return 0;
}




