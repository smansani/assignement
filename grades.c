#include<stdio.h>
main()
{
	int tel,eng,mat,phy,che;
	printf("ente the values for");
	scanf("%d%d%d%d%d",&tel,&eng,&mat,&phy,&che);
	int T=tel+eng+mat+phy+che;
	float avg=T/5;
	if (avg>90)
	printf("grade A");
	else if (avg>80)
	printf("grade B");
	else if (avg>70)
	printf("grade C");
	else if (avg>40)
	printf("grade D");
	else if (avg<40)
	printf("grade E");                                                       
}
