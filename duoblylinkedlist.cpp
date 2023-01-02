#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
//Insertion at beginning
insertion_beg(int element,struct node *&start)
{
	struct node *p,*temp,*prev=NULL;
	p = (struct node*)malloc(sizeof(struct node));
	p->data = element;
	p->next = NULL;
	if(start==NULL)
	start = p;
	else
	{
	p->prev = start;
	p->next = NULL;
	start=p;
    }
    temp = start;
    while(temp!=NULL)
    {
    	printf("%d ",temp->data);
    	temp=temp->next;
	}
}
main()
{
	struct node *p,*start=NULL;
	int choice;
    {
    printf("------------For doubly Linked List------------\n");
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
//	else if(choice==2)
//	{
//	    printf("Enter the element you want to insert:");
//        scanf("%d",&element);
//	    insertion_end(element,start);
//	}
//	else if(choice==3)
//	{
//		printf("Enter the element you want to insert:");
//        scanf("%d",&element);
//	    insertion_any(element,start);
//	}
//	else if(choice==4)
//	    deletion_beg(start);
//    else if(choice==5)
//        deletion_end(start);
//    else if(choice==6)
//        deletion_any(start);
//	else if(choice==7)
//        traverse(start);
//    else if(choice==8)
//        searching_unsorted(start);
//    else if(choice==9)
//		searching_sorted(start);
    else
	    printf("Enter Valid choice");
    }
   }
}
