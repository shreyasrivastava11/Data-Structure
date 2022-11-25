//linear Search
#include<stdio.h>
main()
{
	int n,key,i;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter key:");
	scanf("%d",&key);
	printf("Enter sorted elements of an array:");
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(key==arr[i])
		{
		printf("The position of an element is:%d\n",i+1);
//		break;
	    }
	}
}
