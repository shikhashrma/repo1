#include<stdio.h>
void main()
{
	int n,i,a[100],m,sum=0;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the array\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the no. for sum");
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		sum=sum+a[i];
	}
	printf("sum is = %d",sum);
}
