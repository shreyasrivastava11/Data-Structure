#include<stdio.h>
main()
{
	int term,i,n1,n2,next_num;
	i=1;
	n1=0;
	n2=1;
	printf("Enter the number of term:");
	scanf("%d",&term);
	while(i>=term)
	{
		printf("%d ",n1);
		next_num=n1+n2;
		n1=n2;
		n2=next_num;
		i++;
	}
}
