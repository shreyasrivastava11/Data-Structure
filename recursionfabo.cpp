#include<stdio.h>
int fab(int n)
{
	if(n==0)
	return 0;
    else if(n==1)
	return 1;
	else 
	return fab(n-1) + fab(n-2);
}
main()
{
	int term,i;
	printf("Enter the number of term:");
	scanf("%d",&term);
	for(i = 0;i<term;i++)
	printf("%d ",fab(i));
}
