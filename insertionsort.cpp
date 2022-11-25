//Insertion sort
#include<stdio.h>
main()
{
 	int i,j,key,n;
 	printf("Enter number of elements:");
 	scanf("%d",&n);
 	int arr[n];
 	printf("Enter the elements of an array:");
 	for(i=0;i<n;i++)
 	{
 	 scanf("%d",&arr[i]);	
	}
 	for(i=1;i<=n;i++)
 	{
 	 key=arr[i];
	 j=i-1;	
	 while(j>=0 && arr[j]>key)
	 {
	 	arr[j+1]=arr[j];
	 	j=j-1;
	 }
	 arr[j+1]=key;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
