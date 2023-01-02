#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
//Insertion in stack
void push(int element,int max_size_stack,int count,struct node *&top)
{
    struct node *ptr,*temp;
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=element;
    ptr->next=NULL;
    if(count>max_size_stack)
    printf("Overflow\n");
    else if(top==NULL)
    {
        top=ptr;
        count=count+1;
    }
    else
    {
     ptr->next=top;
     top=ptr;
     count=count+1;
    }
    temp=top;
    while(temp!=NULL)
    {
	printf("%d ",temp->data);
	temp=temp->next;
    }
    printf("\n");	
}
//Deletion in stack
void pop(int element,int count,struct node *&top)
{
	struct node *temp;
	//deletion
	if(count<=-1)
	 printf("Underflow\n");
	else
	{
	while(top!=NULL)
	{
		top=top->next;
		printf("%d ",top->data);
	}
	printf("\n");
   }
}
//Traversing in stack
void traverse(int element,struct node *&top)
{
 while(top!=NULL)
 {
  printf("%d ",top->data);
  top=top->next;	
 }
 printf("\n");	
}
//main function
main()
{
 int choice,element,max_size_stack,count=0;
 struct node *top=NULL;
 printf("--------STACK USING LINKED LIST--------\n");
 printf("1.Insertion in Stack\n");
 printf("2.Deletion in Stack\n");
 printf("3.Traversing in Stack\n");
 printf("4.Exit\n");
 printf("Enter the maximum size of stack:");
 scanf("%d",&max_size_stack);
 for(;;)
 {
  printf("Enter the choice:");
  scanf("%d",&choice);
  if(choice==1)
  {
  printf("Enter the element you want to insert:");
  scanf("%d",&element);
  push(element,max_size_stack,count,top);
  }
  else if(choice==2)
   pop(element,count,top);
  else if(choice==3)
  {
    traverse(element,top);
  }
  else if(choice==4)
  break;
  else
  printf("Please Enter the valid choice\n");
   }
}   
