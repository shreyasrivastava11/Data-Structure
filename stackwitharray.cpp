#include<stdio.h>
#include<stdlib.h>
int max_size;
int s[1000];
int top=-1;
void push(int element)
{
	int i;
	if(top>=(max_size-1))
	 printf("Overflow\n");
	else
	{
		if(top==-1)
		{
			 top = 0;
	 		s[top] = element;
    	}
		else
		{
			top = top + 1;
			s[top] = element;
		}
    }
}
int pop(){
	int element;
	if(top<=-1){
	printf("Stack is empty\n");
    }
	else{
		element = s[top];
        top = top - 1;
        }
    return element;
}
traverse(){
	int i=top;	
	while(i>=0)
	{
	printf("%d ",s[i]);
	i--;
    }
	printf("\n");
}
main()
{
	int choice,element,result;
	printf("---------STACK-------\n");
	printf("1.Push operation in stack\n");
	printf("2.Pop operation in stack\n");
	printf("3.Traversing in stack\n");
	printf("4.Exit\n");
	printf("Enter the maximum size of stack:");
	scanf("%d",&max_size);
	for(;;)
	{
		printf("Enter the choice of the operation:");
	    scanf("%d",&choice);
		if(choice==1)
		{
		printf("Enter the element you want to insert in stack:");
	    scanf("%d",&element);
		push(element);
	    }
	    if(choice==2)
		{
		 result = pop();
		 printf("%d",result);	
		}
	    if(choice==3)
	    traverse();
	}
}
