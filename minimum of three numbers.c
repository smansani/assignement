#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b && b<c)
	{
		printf("%d is smallest",a);
	}
	else if(b<c)
	{
		printf("%d is smallest",b);
	}
	else
	{
		printf("%d is smallest",c);
	}	
}
