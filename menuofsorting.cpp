//contains all sorting by menu
#include<stdio.h>
//Bubble Sort
int bubblesort()
{
   int i,N,p;
   printf("Enter number of elements:");
   scanf("%d",&N);
   int arr[N];
   printf("Enter the elements of an array:");
   for(i=0;i<N;i++)
   scanf("%d",&arr[i]);
   int j,temp,count=0;
   for(i=0;i<N;i++)
   {
    for(j=0;j<N-i-1;j++)
    {
    	if(arr[j]>arr[j+1])
    	{
    		temp=arr[j];
    		arr[j]=arr[j+1];
    		arr[j+1]=temp;
    		count++;
		}
	}
}
   printf("Sorted Array is:");
   for(i=0;i<N;i++)
   printf("%d ",arr[i]);	
   printf("\n");
   printf("Number of comparison to sort the array:%d\n",count);
	
}
//Insertion Sort
int insertionsort()
{
    int i,N,p;
    printf("Enter number of elements:");
    scanf("%d",&N);
    int arr[N];
    printf("Enter the elements of an array:");
    for(i=0;i<N;i++)
    scanf("%d",&arr[i]);
 	int j,key,count=0;
 	for(i=1;i<N;i++)
 	{
 	 key=arr[i];
	 j=i-1;	
	 while(j>=0 && arr[j]>key)
	 {
	 	arr[j+1]=arr[j];
	 	j=j-1;
	 	count++;
	 }
	 arr[j+1]=key;
	}
	printf("Sorted array is:");
	for(i=0;i<N;i++)
	printf("%d ",arr[i]);
	printf("\n");
	printf("Number of comparison to sort the array:%d\n",count);	
}
//Selection Sort
int selectionsort()
{
     int i,N,p;
     printf("Enter number of elements:");
     scanf("%d",&N);
     int arr[N];
     printf("Enter the elements of an array:");
     for(i=0;i<N;i++)
     scanf("%d",&arr[i]);
	 int temp,min,j,count=0;
	 for(i=0;i<N;i++)
	 {
	 	min=i;
	 	j=i+1;
	 	for(j=i+1;j<N;j++)
	 	{
	 	 if(arr[j]<arr[min])
	 	 {
		  min=j;
		  count++;
	     }
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	 }
	 printf("Sorted array is:");
	 for(i=0;i<N;i++)
	 printf("%d ",arr[i]);
	 printf("\n");
	 printf("Number of comparison to sort the array:%d\n",count);
	 return 0;		
}
//Counting Sort
countingsort()
{
 int i,N,p;
 printf("Enter number of elements:");
 scanf("%d",&N);
 int arr[N];
 printf("Enter the elements of an array:");
 for(i=0;i<N;i++)
 scanf("%d",&arr[i]);
 int output[10];
 int max = arr[0];
  for (int i=1; i<N; i++) 
  {
    if (arr[i] > max)
      max = arr[i];
  }
  int count[10];
  for (int i = 0; i <= max; ++i) 
  {
    count[i] = 0;
  }
  for (int i = 0; i < N; i++) 
  {
    count[arr[i]]++;
  }

  for (int i = 1; i <= max; i++) 
  {
    count[i] += count[i - 1];
  }

  for (int i = N - 1; i >= 0; i--) 
  {
    output[count[arr[i]] - 1] = arr[i];
    count[arr[i]]--;
  }

  for (int i = 0; i <N; i++) 
  {
    arr[i] = output[i];
  }
  printf("The sorted array is:");
  for (int i = 0; i < N; ++i) 
  {
    printf("%d  ", arr[i]);
  }
  printf("\n");
}

//radix sort
radixsort() 
{
  int i, b[10], m = 0,  exp = 1;
  int N,p;
  printf("Enter number of elements:");
  scanf("%d",&N);
  int arr[N];
  printf("Enter the elements of an array:");
  for(i=0;i<N;i++)
  scanf("%d",&arr[i]);
  for (i = 0; i < N;  i++) 
  {
  if (arr[i] > m)
  m = arr[i];
  }
  
  while (m / exp >  0) 
  {
  int box[10] = { 0 };
  for (i = 0; i <  N; i++)
  box[arr[i] / exp %  10]++;
  for (i = 1; i <  10; i++)
  box[i] += box[i -  1];
  for (i = N - 1; i  >= 0; i--)
  b[--box[arr[i] / exp  % 10]] = arr[i];
  for (i = 0; i <N; i++)
  arr[i] = b[i];
  exp=exp*10;
  }
  printf("The sorted array is:");
  for(i=0;i<N;i++)
  printf("%d ",arr[i]);
  printf("\n");
}
main()
{
	int choice;
	for(;;)
	{
	printf("                 SORTING OF ELEMENTS\n");
	printf("                 1.Sort Array by Bubble Sort\n");
	printf("                 2.Sort Array by Insertion Sort\n");
	printf("                 3.Sort Array by Selection Sort\n");
	printf("                 4.Sort Array by Counting Sort\n");
	printf("                 5.Sort Array by Radix Sort\n");
	printf("                 6.Exit\n");
	printf("                 Enter choice:");
	scanf("%d",&choice);
	 if(choice==1)
	 bubblesort();
	 
	 else if(choice==2)
	 insertionsort();
	 
	 else if(choice==3)
	 selectionsort();
	 
	 else if(choice==4)
	 countingsort();
	 else if(choice==5)
	 radixsort();
     else if(choice==6)
     {
     printf("Exit");
     break;
     }
     else
     printf("Enter valid choice number");
    }
    printf("              Name:Shreya Srivastava\n");
    printf("              Roll Number:2101641520134");
    printf("              Class:CS-AI-1A");
	return 0;
}

