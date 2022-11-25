//input array elements
#include<stdio.h>
main()
{
	int n,i;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter elements of an array:");
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
