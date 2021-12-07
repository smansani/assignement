#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the values for ");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b+c==180)
	{
		printf("a,b,c can form triangle");
	}
	else
	{
		printf("a,b,c can not form triangle");
	}
}
