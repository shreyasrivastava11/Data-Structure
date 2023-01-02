#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
//Insertion
int enqueue(int element, struct node *&start){
struct node *p,*temp,*temp1;
  p=(struct node*)malloc(sizeof(struct node)); 
  p->data=element;
  p->next=NULL;
  if(start==NULL)
  {
  start=p;
  temp=start;
  }
  else
  {
    temp=start;
    while(temp->next!=NULL)  //Traversing to find the last node which contain NULL
    temp=temp->next;
    temp->next=p;
  } 
  temp1=start;
}
//Deletion
int dequeue(struct node *&start){
struct node *temp;
	//deletion
	start = start->next;
}
//Traverse
int traverse(struct node* &start)
{
 struct node *temp1;
  temp1=start;
  while(temp1!=NULL)
  {
  printf("%d ",temp1->data);
  temp1=temp1->next;
  }
  printf("\n");	
}
main(){
	struct node *p,*start=NULL;
	int element,choice;
	printf("--------------LINEAR QUEUE------------------\n");
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
