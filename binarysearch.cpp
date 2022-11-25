//Binary search
#include<stdio.h>
main()
{
	int beg,end,mid,flag=0,i,n,key;
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
	beg=0;
	end=n-1;
	while(beg<=end)
	{
		
	
	mid = (beg+end)/2;
		if(key==arr[mid])
		{
			printf("position of an element:%d",mid+1);
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
		printf("key does not present in an array");
	}
}
