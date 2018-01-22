#include<stdio.h>
void main()
{
	int n,d;
	printf("enter the no.");
	scanf("%d",&n);
	while(n>0)
	{
	n=n/10;
	d++;	
	}
	printf("%d",d);
}
