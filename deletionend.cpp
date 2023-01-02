#include<stdio.h>
struct node 
{
	int data;
	struct node *next;
}; 

main()
{
struct node *p,*start=NULL,*temp;
 int no_of_elements,i,element;
 printf("Enter number of elements:\n");
 scanf("%d",&no_of_elements);
 printf("Enter the elements you want to insert:\n");
 for(i=0;i<no_of_elements;i++)
 {
  p=(struct node*)malloc(sizeof(struct node));
  scanf("%d",&element);
  p->data=element;
  p->next=NULL;
  if(start==NULL)
  {
  start=p;
  temp=start;
  }
  else
  {
    temp->next=p;
    temp=p;
  }
  }
  if(start->next!=NULL)
  {
  printf("%d ",start->data);
  start=start->next;
  }
  printf("\n");
}
