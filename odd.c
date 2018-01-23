#include<stdio.h>
void main()
{
	int i,f,n;
	printf("enter the range");
	scanf("%d %d",&i,&f);
	for(n=i+1;n<=f;n++)
	{
		if(n%2==1)
		printf("%d ",n);
		
	}
}
