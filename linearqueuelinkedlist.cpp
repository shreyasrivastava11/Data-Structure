#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
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
	printf("--------------QUEUE------------------\n");
	printf("              1.Insertion\n");
	printf("              2.Deletion\n");
	printf("              3.Traverse\n");
	printf("Enter the choice:");
	scanf("%d",&choice);
	for(;;)
	{
	if(choice == 1)
	{
	  printf("Enter the element:");
	  scanf("%d",&element);
	  enqueue(element,start);
    }
    if(choice == 3)
    traverse(start);
  }
  return 0;
}
