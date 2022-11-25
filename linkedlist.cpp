#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
}; 
//Insertion at beginning   
insertion_beg()
{
	struct node *p,*start=NULL;
	int no_of_elements,i,element;
	printf("Enter the number of elements:\n");
	scanf("%d",&no_of_elements);
	printf("Enter the element you want to insert:\n");
    for(i=0;i<no_of_elements;i++)
    {
    	p=(struct node*)malloc(sizeof(struct node));//stores base address
    	scanf("%d",&element);
    	p->data=element;
    	p->next=NULL;
    	if(start==NULL)
    	start=p;
    	else
    	{
    	p->next=start;
    	start=p;
        }
	}
    while(start!=NULL)
    {
	printf("%d ",start->data);
	start=start->next;
    }
    printf("\n");
}
//Insertion at end
insertion_end()
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
 while(start!=NULL)
 {
 	printf("%d ",start->data);
 	start=start->next;
 }
 printf("\n");
}
//Insertion at any position
insertion_any()
{
 struct node *p,*ptr,*start=NULL,*temp,*temp1;
 int no_of_elements,i,element,pos,loc=1,new_element;
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
  printf("Enter the position where you want to insert the element:\n");
  scanf("%d",&pos);
  ptr=(struct node *)malloc(sizeof(struct node));
  printf("Enter the new element you want to insert in the linked list:\n");
  scanf("%d",&new_element);
  ptr->data=new_element;
  ptr->next=NULL;
  temp1=start;
  while(start!=NULL)
  {
  	loc++;
  	if((loc-1)==(pos-1))
  	{
  	 temp=start->next;
	 start->next=ptr;
	 ptr->next=temp;	
	} 
    start=start->next;
  }
  printf("The new linked list formed is:");
  while(temp1!=NULL)
  {
  	printf("%d ",temp1->data);
  	temp1=temp1->next;
  }	
  printf("\n");
}
//deletion at beginning
deletion_beg()
{
 struct node *p,*start=NULL;
	int no_of_elements,i,element;
	printf("Enter the number of elements:\n");
	scanf("%d",&no_of_elements);
	printf("Enter the element you want to insert:\n");
    for(i=0;i<no_of_elements;i++)
    {
    	p=(struct node*)malloc(sizeof(struct node));//stores base address
    	scanf("%d",&element);
    	p->data=element;
    	p->next=NULL;
    	if(start==NULL)
    	start=p;
    	else
    	{
    	p->next=start;
    	start=p;
        }
	}
	//deletion
		
}
//Traversing of Linked List
traverse()
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
 while(start!=NULL)
 {
 	printf("%d ",start->data);
 	start=start->next;
 }
 printf("\n");	
}
//Searching the unsorted element of unsorted Linked List
searching_unsorted()
{
 struct node *p,*start=NULL,*temp;
 int no_of_elements,i,element,loc=1,item,flag=0;
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
 printf("Enter the element you want to search in the given linked list:\n");
 scanf("%d",&item);
 while(start!=NULL)
 {
 if(start->data==item)
{
    printf("The location of the data in the linked list is:%d",loc);
    printf("\n");
	flag++;
 }
 loc++;
 start=start->next;
}
 if(flag==0)
 printf("The data is not present in the linked list\n");
}
//Searching the sorted element present in linked list
searching_sorted()
{
 struct node *p,*start=NULL,*temp,*temp1;
 int no_of_elements,i,element,loc=1,item,flag=0,temp2;
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
 printf("Enter the element whose position you want to search:\n");
 scanf("%d",&item);
 while(start!=NULL)
 {
 	temp1=start->next;
 	if(temp1==NULL)
 	{
 	 if(start->data==item)
	  {
	  	printf("The position of element is:%d",loc);
	  	printf("\n");
	  	flag++;
	  }	
	}
	temp2=temp1->data;
 	if(start->data < temp2)
 	{
 	 if(start->data==item)
	  {
	  	printf("The position of given element is:%d",loc);
	  	printf("\n");
	  	flag++;
	  	
	  }	
	  loc++;
	  start=start->next; 
	}
	else
	printf("Please Enter the sorted elements\n");
  }	
  if(flag==0)
  printf("The element you have searched is not present in the given linked list\n");
}
 
main()
{
	int choice,choice_operation;
	for(;;)
	{
	printf("  Choose the operation:\n");
	printf("      1.Singly Linked List\n");
	printf("      2.Doubly Linked List\n");
	printf("      3.Circular Linked List\n");
	printf("      4.Exit\n");
	scanf("%d",&choice_operation);
	if(choice_operation==1 || choice_operation==2 || choice_operation==3)
    {
	printf("            LINKED LIST\n");
	printf("            1.Insertion at beginning\n");
	printf("            2.Insertion at end\n");
	printf("            3.Insertion at specific location\n");
	printf("            4.Deletion at beginning\n");
	printf("            5.Deletion at end\n");
	printf("            6.Deletion at location\n");
	printf("            7.Deletion of specific item\n");
	printf("            8.Traversing\n");
	printf("            9.Searching the elements which are in unsorted manner\n");
	printf("            10.Searching the elements which are in sorted manner\n");
	printf("            Enter the choice:\n");
	scanf("%d",&choice);
	if(choice==1)
		insertion_beg();
	else if(choice==2)
	    insertion_end();
	else if(choice==3)
	    insertion_any();
	else if(choice==4)
	    deletion_beg();
// else if(choice==5)
//        deletion_end();
//  else if(choice==6)
//        deletion_any();
//  else if(choice==7)
//	     break;
    else if(choice==8)
            traverse();
    else if(choice==9)
           searching_unsorted();
    else if(choice==10)
           searching_sorted();
    else
	    printf("Enter Valid choice\n");
   }
   else if(choice_operation==4)
            break;
   }
    
}
