#include<stdio.h>
#include<stdlib.h>
static struct node *top;
struct node
{
	int data;
	struct node*next;
};
//Insertion
void push(int element,struct node *&top)
{
    struct node *p,*temp;
	p=(struct node*)malloc(sizeof(struct node));
	p->data=element;
    p->next=NULL;
    if(top==NULL)
    {
    	top=p;
    }
    else
    {
     p->next=top;
     top=p;
    }
    temp=top;
}
//Deletion
int pop(struct node *&top)
{
  struct node *temp1; 
  int element;
  temp1 = top->next;
  element=top->data;
  while(temp1->next!=NULL)
  {
  temp1=temp1->next; 
  }
  return element;
}
//Traversing
void traverse(int element,struct node *&top)
{
 int count=0;
 struct node *temp;
 temp=top;
 while(temp!=NULL)
 {
  printf("%d ",temp->data);
  temp=temp->next;
  count++;	
 }
 printf("\nThe number of nodes are:%d",count);
 printf("\n");	
}
//main function
main()
{
 int choice,element,max_size_stack,result;
 struct node *top=NULL;
 printf("--------STACK USING LINKED LIST--------\n");
 printf("1.Insertion in Stack\n");
 printf("2.Deletion in Stack\n");
 printf("3.Traversing in Stack\n");
 printf("4.Exit\n");
 for(;;)
 {
  printf("Enter the choice:");
  scanf("%d",&choice);
  if(choice==1)
  {
  printf("Enter the element you want to insert:");
  scanf("%d",&element);
  push(element,top);
  }
  else if(choice==2)
  {
   result = pop(top);
   printf("%d\n",result);
  }
  else if(choice==3)
  {
    traverse(element,top);
  }
  else if(choice==4)
  {
  printf("Name:- Shreya Srivastava\n");
  printf("Roll No.:- 2101641520134\n");
  printf("Class:- CS-AI-2A");
  break;
  }
  else
  printf("Please Enter the valid choice\n");
   }
}   
