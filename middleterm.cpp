#include<stdio.h>
insertion_end(int element,struct node* &start)
{
  struct node *p,*temp,*temp1;
  p=(struct node*)malloc(sizeof(struct node)); 
  p->data=element;
  p->next=NULL;
  if(start==NULL)
  {
  start=p;
  ptr=p;
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
 while(temp1!=NULL)
 {
 	printf("%d ",temp1->data);
 	temp1=temp1->next;
 }
 printf("\n");
 middle_term(ptr);
}
middle_term(struct node* &ptr)
{
 int slow = ptr;
 int fast = ptr;
 while(fast!=NULL)
  fast = (fast->next)->next;
 if(fast == NULL)
  printf("%d ",slow->data);
 else
  slow = slow->next;	
}
main()
{
	struct node *p,*start=NULL;
	int i,element;
	printf("Enter the element you want to insert:");
    scanf("%d",&element);
	insertion_beg(element,start);
}
