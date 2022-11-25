//Addition matrix
#include<stdio.h>
main()
{
	
	int i,j,r1,c1,r2,c2;
	printf("Enter number of rows one:");
	scanf("%d",&r1);
	printf("Enter number of columns one:");
	scanf("%d",&c1);
	printf("Enter number of rows one:");
	scanf("%d",&r2);
	printf("Enter number of columns one:");
	scanf("%d",&c2);
	int a[100][100],b[100][100],c[100][100];
	if(r1!=r2 && c1!=c2)
	{
	 printf("Matrix addition is not possible");	
	}
	else
	if(r1==r2 && c1==c2)
	{
	 for(i=0;i<r1;i++)
	 {
	 	for(j=0;j<c1;j++)
	 	scanf("%d",&a[i][j]);
	 }
	 for(i=0;i<r1;i++)
	 {
	 	for(j=0;j<c1;j++)
	 	scanf("%d",&b[i][j]);
	 }
	 for(i=0;i<r1;i++)
	 {
	 	for(j=0;j<c1;j++)
	 	c[i][j] = a[i][j] + b[i][j];
	 }
	 for(i=0;i<r1;i++)
	 {
	   for(j=0;j<c1;j++)
	   printf("%d ",c[i][j]);
	   printf("\n");	
	 }	
	}
}
