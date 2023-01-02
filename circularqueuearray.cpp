#include<stdio.h>
int max_size;
int q[1000];
static int rear = -1,front = -1;
//Insertion
enqueue(int item)
{
    if((rear + 1)%max_size == front)
    printf("The Queue is Overflow\n");
    else
    if(front == -1 && rear == -1){
    	front = 0;
    	rear = 0;
    	q[rear] = item;
	}
	else
	{
		rear = (rear + 1)%max_size;
		q[rear] = item;
	}
}
//Traverse
traverse()
{
	int i = 0;
	while(i<=rear)
	{
		printf("%d ",q[i]);
		i=(i+1)%n;
	}
	printf("\n");
}
//Deletion
dequeue()
{
  int data;
  if(front == -1)
  printf("The Queue is overflow\n");
  else
  {
  data = q[front];
  if(front == rear)
  {
  front = -1;
  rear = -1;
  }
  else
  front = (front + 1)%max_size;
  return data;
  }
  printf("\n");
}
main(){
	int element,choice,result;
	printf("Enter the max_size:");
	scanf("%d",&max_size);
	printf("--------------------LINEAR QUEUE--------------------------\n");
	printf("                   1.Insertion   \n");
	printf("                   2.Deletion     \n");
	printf("                   3.Traverse      \n");
	printf("                   4.Exit\n");
	for(;;)
	{
		printf("Enter the choice:");
		scanf("%d",&choice);
	if(choice == 1)
	{
	 printf("Enter the element:");
	 scanf("%d",&element);
	 enqueue(element);
    }
    else
	if(choice == 2)
    {
    result = dequeue();
    printf("%d ",result);
    }
    else
	if(choice == 3)
    traverse();
    else
    if(choice == 4)
    {
      printf("Name:- Shreya Srivastava\n");
	  printf("Roll Number:- 2101641520134\n");
	  printf("Class:- CS-AI-2A");	
      break;
    }
    else
    printf("Enter the valid choice\n");
    }
}
