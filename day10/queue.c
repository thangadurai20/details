#include<stdio.h>
#include<stdlib.h>
struct node {
	int data1;
	struct node *list;
};
struct node *createnode(int data)	
{
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data1= data;
	newnode->list = NULL;
return newnode;

}
struct node *createnode1(int data)	
{
	struct node *newnode = (struct node*)malloc(sizeof(struct node));

return newnode;

}
struct node *initilization(struct node *head,int data)
{
  struct node *newnode = createnode(data);
  newnode->list=head;
  return newnode;

  }
struct node *append(head1,date){
struct node *newnode = createnode1(date);
if(head1==NULL)
	{
	newnode->data1= date;
	newnode->list = NULL;
	}
	struct node *temp;
	//temp->data1= head1->data1;
//	temp->list= head1->list;
	newnode = temp->list;

return newnode;

}
int main()
{
	struct node *head = NULL;
	struct node *head1= NULL;
	int data, size,date;
	printf("enter the nodes: ");
	scanf("%d ", &size);
	int i=0;
	while(i<size)
	{
		scanf("%d",&data);
		head = initilization(head,data);
		i++;
		//printf("%ld -------> %p",head->data,head->list);
	}
	while(i<size)
	{
		scanf("%d",&date);
		head = append(head1,date);
		i++;
		//printf("%ld -------> %p",head->data,head->list);
	}
	struct node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data1);
        temp = temp->list;
        struct node* temp1 = head1;
    while (temp1 != NULL) {
        printf("%d ", temp1->data1);
        temp1 = temp1->list;
}
}
}
