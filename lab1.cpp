//Linear Search and Binary Search
#include<stdio.h>
//linear Search
linearsearch()
{
	int i,n,key,choice,count=0;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	printf("Enter the elements of an array:\n ");
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter the element whose position you have to find:\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==arr[i])
		{
		printf("The position of an element is:%d\n",i+1);
		count++;
//		break;
	    }
	}
	if(count==0)
	{
	printf("key does not present in an array\n");	
	}
}
//Binary Search
binarysearch()
{
	int i,n,key,choice;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	printf("In case of binary search Entered Array should be sorted\n");
	printf("Enter the sorted elements of an array:\n ");
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter the element whose position you have to find:\n");
	scanf("%d",&key);
	int beg,end,mid,flag=0;
	beg=0;
	end=n-1;
	while(beg<=end)
	{
		
	
	mid = (beg+end)/2;
		if(key==arr[mid])
		{
			printf("position of an element:%d\n",mid+1);
			flag++;
			break;
		}
		
		else if(key>arr[mid])
			beg=mid+1;
		
		else
			end=mid-1;
	}

	if(flag==0)
	{
		printf("key does not present in an array\n");
	}
}
main()
{
	int choice;
	for(;;)
	{
	printf("               Searching the position of an array\n");
	printf("               1.Linear Search\n");
	printf("               2.Binary Search\n");
	printf("               3.Exit\n");
	scanf("%d",&choice);
	if(choice==1)
	linearsearch();
	else if(choice==2)
	binarysearch();
	else if(choice==3)
	{
	printf("Exit\n");
	break;
    }
	else
	printf("Invalid choice\n");
    }
    printf("               Name:Shreya Srivastava\n");
    printf("               Roll Number:2101641520134\n");
    printf("               Class:CS-AI-1A\n");
	return 0;
}
