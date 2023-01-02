#include<stdio.h>
#include<stdlib.h>
static struct node *start = NULL;
struct node{
	int data;
	struct node *next;
};
//Insertion
enqueue(int element,struct node *&start){
  struct node *p;
  static struct node *temp1;
  p=(struct node*)malloc(sizeof(struct node)); 
  p->data=element;
  p->next=NULL;
  if(start == NULL)
  {
  	start = p;
  	p->next=start;
  }
  else
  {
   temp1 = start;
   while(temp1->next!=start)   //Traversing to find the last node.
   temp1=temp1->next;
   p->next=start;
   temp1->next = p;
   temp1=p;
  }
}
//Traversing
traverse(struct node *&start){
  struct node *temp;
  temp = start;
  while(temp->next!=start)
  {
  printf("%d ",temp->data);
  temp=temp->next;
  }
  printf("%d ",temp->data);
  printf("\n");	
}
//Deletion
dequeue(struct node *&start){
  static struct node *temp1;
  temp1=start;
  while(temp1->next->next!=start)
  {
  temp1=temp1->next; 
  }
  temp1->next = start;	
}
main(){
	struct node *p;
	int element,choice;
	printf("--------------CIRCULAR QUEUE------------------\n");
	printf("              1.Insertion\n");
	printf("              2.Deletion\n");
	printf("              3.Traverse\n");
	printf("              4.Exit\n");
	for(;;)
	{
    printf("Enter the choice:");
	scanf("%d",&choice);
	if(choice == 1)
	{
	  printf("Enter the element:");
	  scanf("%d",&element);
	  enqueue(element,start);
    }
    else 
	if(choice == 2)
      dequeue(start);
    else
	if(choice == 3)
    traverse(start);
    else
    if(choice == 4)
    {
     printf("Name:- Shreya Srivastava\n");
     printf("Roll No.:- 2101641520134\n");
     printf("Class:- CS-AI-2A");
     break;
   }
   else
   printf("Enter the valid choice\n");
  }
}
