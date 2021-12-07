#include<stdio.h>
main()
{
	int a;
	printf("enter the values for ");
	scanf("%d",&a);
	if(a>0)
	{
		printf("it is positive number");
	}
	else if(a==0)
	{
		printf("it is zero");
	}
	else
	{
		printf("it is negetive number");
	}
}
