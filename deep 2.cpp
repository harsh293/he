#include<stdio.h>
main()
{
	int a[10], i, min;
	printf("give 10 values");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	min=999999;
	for(i=0;i<10;i++)
	{
		if(a[i]<min)
		min=a[i];
		
	}
	printf("minimum is %d",min);
}
