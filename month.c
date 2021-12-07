#include<stdio.h>
main()
{
	int a,d;
	printf("enter the vaues for");
	scanf("%d",&a);
	d=a>0&&a<=12;
	if (d)
	{
		printf("it is a month");
	}
	else
	{
		printf("not a month");
	}
}
