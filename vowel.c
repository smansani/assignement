#include<stdio.h>
main()
{
	char q;
	printf("enter the character");
	scanf("%c",&q);
    if	(q=='a'||q=='e'||q=='i'||q=='o'||q=='u')
	{
		printf("it is vowel");
	}
	else 
	{
		printf("it is consonant");
	}
}
