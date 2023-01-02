#include<stdio.h>
#include<stdlib.h>
void push(int max_size,int *arr)
{
	int top;
	for(top=max_size;top<0;top--)
	{
	 if(top>(max_size-1))
	 printf("Overflow\n");
	 else
	 printf("%d ",arr[top]);
	}
	printf("\n");
}
main()
{
	int max_size,top,choice;
	printf("---------STACK WITH ARRAY-------\n");
	printf("1.Push operation in stack\n");
	printf("2.Pop operation in stack\n");
	printf("3.Traversing in stack\n");
	printf("4.Exit\n");
	printf("Enter the maximum size of stack:");
	scanf("%d",&max_size);
	int arr[max_size];
	printf("Enter the choice of the operation:");
	scanf("%d",&choice);
	for(;;)
	{
		if(choice==1)
		{
		printf("Enter the element you want to insert in stack:");
	    for(top=0;top<max_size;top++)
	    scanf("%d\n",arr[top]);
		push(max_size,arr);
	    }
	}
}
