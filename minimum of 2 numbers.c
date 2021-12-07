#include<stdio.h>
main()
{
	int a,b;
	printf("enter the values for ");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		printf("a is minimum %d",a);
	}
	else
	{
		printf("b is minimum %d",b);
	}
}
