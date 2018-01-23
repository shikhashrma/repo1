#include<stdio.h>
void main()
{
	int i,f,n;
	printf("enter the range");
	scanf("%d\n%d",&i,&f);
	for(n=i+1;n<f;n++)
	{
		if(n%2==0)
		printf("%d ",n);
		
	}
}
