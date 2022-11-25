//Quicksort and Mergesort Recursively
#include<stdio.h>
//Quicksort Function
int partition(int arr[],int low,int high)
{
	int pivot,i,j,temp;
	pivot = arr[high];
	i=low;
	for(j=low;j<=high-1;j++)
	{
		if(arr[j]<=pivot)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
		}
	}
	temp=arr[i];
	arr[i]=arr[high];
	arr[high]=temp;
	return i;
}

int quicksort(int arr[],int low,int high)
{
	int pi,i;
	if(low<high)
	{
	    pi= partition(arr,low,high);
		quicksort(arr,low,pi-1);
		quicksort(arr,pi+1,high);
	}
}
//MergeSort Function
merge(int arr[], int low, int q, int high) 
{

    int n1 = q - low + 1;
    int n2 = high - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[low + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];

    int i, j, k;
    i = 0;
    j = 0;
    k = low;

    while (i < n1 && j < n2) 
	{
        if (L[i] <= M[j]) 
		{
            arr[k] = L[i];
            i++;
        } else 
		{
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    while (i < n1) 
	{
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) 
	{
        arr[k] = M[j];
        j++;
        k++;
    }
}
//Merge Sort
mergesort(int arr[], int low, int high) 
{
  if (low < high) 
  {
    int m = low + (high - 1) / 2;

    mergesort(arr, low, m);
    mergesort(arr, m + 1, high);
    merge(arr, low, m, high);
  }
}
void printArray(int arr[], int N) 
{
  for (int i = 0; i < N; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

main()
{
    int i,N,low,high;
    printf("Enter number of elements:");
    scanf("%d",&N);
    int arr[N];
    printf("Enter the elements of an array:");
    for(i=0;i<N;i++)
    scanf("%d",&arr[i]);
    low=0;
    high=N-1;
	int choice;
	for(;;)
	{
	printf("                 SORTING OF ELEMENTS\n");
	printf("                 1.Sort Array by Quick Sort\n");
	printf("                 2.Sort Array by Merge Sort\n");
	printf("                 6.Exit\n");
	printf("                 Enter choice:");
	scanf("%d",&choice);
	if(choice==1)
	{
	quicksort(arr,low,high);
	printf("The Sorted Array is:\n");
	for(i=0;i<N;i++)
	printf("%d ",arr[i]);
    }
	else if(choice==2)
	{
	mergesort(arr,low,high);
	printf("The sorted Array is:\n");
	for(i=0;i<N;i++)
	printf("%d ",arr[i]);
    }
	else if(choice==3)
	{
	printf("Exit");
	break;
    }
	else
	printf("Invalid Choice"); 
    
}    
   
}    
