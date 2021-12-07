#include<stdio.h>
main()
{
	int cp,sp,a;
	printf("enter the values for ");
	scanf("%d%d",&cp,&sp);
	a=sp-cp;
	if (a>0)
	{
		printf("profit %d",a);
	}
	else
	{
		printf("loss %d",a);
	}
	
}
