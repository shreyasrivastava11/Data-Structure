//Singly Linked List
#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
}; 
//Insertion at beginning   
insertion_beg(int element,struct node *&start)
{
	struct node *p,*temp;
	p=(struct node*)malloc(sizeof(struct node));
	p->data=element;
    p->next=NULL;
    if(start==NULL)
    	start=p;
    else
    {
     p->next=start;
     start=p;
    }
    temp=start;
}
//Insertion at end
insertion_end(int element,struct node* &start)
{
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
//Insertion at any position
insertion_any(int element,struct node* &start)
{
  struct node *p,*temp,*temp1;
  int pos,new_element,loc=1;
  printf("Enter the position where you want to insert the element:\n");
  scanf("%d",&pos);
  p=(struct node *)malloc(sizeof(struct node)); 
  printf("Enter the new element you want to insert in the linked list:\n");
  scanf("%d",&new_element);
  p->data=new_element;
  p->next=NULL;
  temp1=start;
  while(start!=NULL)
  {
  	loc++;
  	if((loc-1)==(pos-1))  //To get the previos node address of pos node
  	{
  	 temp=start->next;
	 start->next=p;
	 p->next=temp;	
	} 
    start=start->next;
  }
}
//deletion at beginning
deletion_beg(struct node* &start)
{
	struct node *temp;
	//deletion
	temp=start;
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=start;	
}

//Deletion at end
deletion_end(struct node* &start)
{
  static struct node *temp1;
  temp1=start;
  while(temp1->next->next!=NULL)
  {
  temp1=temp1->next; 
  }
  temp1->next=NULL;
}
//Deletion at any point
deletion_any(struct node* &start)
{
  struct node *temp1;
  int loc=1,pos;
  printf("Enter the position where you want to delete the element:");
  scanf("%d",&pos);
  temp1=start;
  while(temp1!=NULL)
  {
  	if(loc==pos-1) //To get the previous node address for deletion 
  	 temp1->next=(temp1->next)->next;
	loc++;
	temp1=temp1->next;	
  }
}
//Traversing of Linked List
traverse(struct node* &start)
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
//Searching the unsorted element of unsorted Linked List
searching_unsorted(struct node* &start)
{
  struct node *p,*temp;
  int loc=1,flag=0,item;
  printf("Enter the element you want to search in the given linked list:");
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
searching_sorted(struct node* &start)
{
  struct node *temp1;
  int item,loc=1,flag=0,temp2;
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
	struct node *p,*start=NULL;
	int choice;
    {
    printf("------------For Singly Linked List------------\n");
	printf("            LINKED LIST\n");
	printf("            1.Insertion at beginning\n");
	printf("            2.Insertion at end\n");
	printf("            3.Insertion at specific location\n");
	printf("            4.Deletion at beginning\n");
	printf("            5.Deletion at end\n");
	printf("            6.Deletion at location\n");
	printf("            7.Traversing\n");
	printf("            8.Searching the elements which are in unsorted manner\n");
	printf("            9.Searching the elements which are in sorted manner\n");
	printf("            10.Exit\n");
	for(;;)
	{
	printf("            Enter the choice:");
	scanf("%d",&choice);
	int i,element;
	if(choice==1)
	{
	    printf("Enter the element you want to insert:");
        scanf("%d",&element);
		insertion_beg(element,start);
	}
	else if(choice==2)
	{
	    printf("Enter the element you want to insert:");
        scanf("%d",&element);
	    insertion_end(element,start);
	}
	else if(choice==3)
	{
		printf("Enter the element you want to insert:");
        scanf("%d",&element);
	    insertion_any(element,start);
	}
	else if(choice==4)
	    deletion_beg(start);
    else if(choice==5)
        deletion_end(start);
    else if(choice==6)
        deletion_any(start);
	else if(choice==7)
        traverse(start);
    else if(choice==8)
        searching_unsorted(start);
    else if(choice==9)
		searching_sorted(start);
    else if(choice==10)
    {
    	printf("Name:- Shreya Srivastava\n");
    	printf("Roll No.:- 2101641520134\n");
    	printf("Class:- CS-AI-2A\n");
    	break;
	}
	else
	    printf("Enter Valid choice");
   }
   }
}
